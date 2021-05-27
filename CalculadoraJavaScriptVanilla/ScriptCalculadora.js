function calcular() {

  var num1 = document.getElementById("valor1").value;
  var num2 = document.getElementById("valor2").value;

  if (num1 == "" || num2 == "") {
    alert("Preencha os numeros!");
  } else {
    num1 = parseInt(num1);
    num2 = parseInt(num2);

    var operacao = document.getElementById("operacoes").value;

    if (operacao == "somar") {
      var resultado = num1 + num2;
    } else if (operacao == "subtrair") {
      var resultado = num1 - num2;
    } else if (operacao == "multiplicar") {
      var resultado = num1 * num2;
    } else {
      var resultado = num1 / num2;
    }

    alert("Resultado = " + resultado);
  }
}
