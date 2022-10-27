

SELECT COUNT(a.placa)
FROM Veiculo a, Estaciona b
WHERE a.cor = "Preto" AND a.placa = b.veiculo_placa AND patio_num = 1

SELECT a.cor, COUNT(a.placa) 
FROM Veiculo a 
group by a.cor

SELECT RIGHT(dtEntrada, 4), COUNT(veiculo_placa) 
FROM Estaciona
group by RIGHT(dtEntrada, 4)

SELECT a.Cliente_cpf, COUNT(b.dtEntrada) 
FROM Veiculo a INNER JOIN Estaciona b ON a.placa = b.veiculo_placa
WHERE b.patio_num = 1
group by a.Cliente_cpf
having COUNT(b.dtEntrada) > 3





SELECT TOP(1) c.nome FROM Cliente c, Veiculo v where c.Cliente.cpf = v.Cliente_cpf ORDER BY c.dtNasc

SELECT p.num, COUNT()