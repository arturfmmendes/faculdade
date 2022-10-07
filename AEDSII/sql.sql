SELECT peojeto.descicao, COUNT(SELECT Empregado.nome from Empregado WHERE sexo = 'F') 
as numero_de_mulheres
FROM Projeto 
INNER JOIN Alocacao ON  Projeto.idProjeto = Alocacao.Projeto_idProjeto 
INNER JOIN Empregado ON Alocacao.Empregado_idEmpregado = Empregado.idEmpregado
GROUP BY Projeto.descicao 
HAVING numero_de_mulheres > 2