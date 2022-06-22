
function loadDestaques(data) {
    
    let dadosFilmes = JSON.parse(data.target.response)
    
    let filme = dadosFilmes.results
    let dadosHTML = ``
    for (let i = 0; i < dadosFilmes.results.length; i++) {
        dadosHTML += `
        <div class="col-xs-6 col-sm-4 col-md-3" >
            <div class="card" >
                <img src="https://image.tmdb.org/t/p/w500${filme[i].poster_path}" class="card-img-top" alt="endgame">
                <div class="card-body">
                    <p><b>${filme[i].title}</b></p>
                </div>
            </div>
        </div>
        `;
    }
    document.getElementById ('destaques').innerHTML = dadosHTML
}

function loadEntrevistas(data) {

    let dadosEntrevistas = JSON.parse(data.target.response)
    let filme = dadosEntrevistas.results
    let dadosHTML = ``
    for (let i = 0; i < 3; i++)
    {
        dadosHTML += `
        <div class="col-xs-12 col-sm-6 col-md-4">
            <iframe width="100%" height="50%" src="https://www.youtube.com/embed/${filme[i].key}"
                title="YouTube video player" frameborder="0"
                allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture"
                allowfullscreen style="border-radius: 5px;" style="border-radius: 5px;"></iframe>
            <h6><b>Homem Aranha - Sem Volta para Casa</b></h6>
            <span class="d-block"><b>Diretor:</b>${}</span>
            <span class="d-block"><b>Roteiro:</b> Erick Sommers, Chris McKenna</span>
            <span class="d-block"><b>Estreia:</b> 16 de dezembro de 2021</span>
        </div>
        `
    }
}

function init () {
    
    let xhr = new XMLHttpRequest();
    
    xhr.onload = loadDestaques
    let urlDestaques = "https://api.themoviedb.org/3/movie/popular?api_key=1a4cf959e487061d0a642414b4f7c041&languege=pt-BR"
    xhr.open('GET', urlDestaques, true)
    xhr.send();

}

document.body.onload = init;
/*
const init = () => {
    let dadosHTML = ``
    for (let i = 0; i < 8;i++){
        dadosFilmes.results[0].
    }
}

document.body.onload = init */
