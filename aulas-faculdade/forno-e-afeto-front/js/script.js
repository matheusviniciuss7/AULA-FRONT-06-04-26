const botaoEncomenda =  document.querySelector(".botao-encomenda");
const orientacoesEncomenda = document.querySelector(".orientacoes-encomenda");

botaoEncomenda.addEventListener("click",function () {
    orientacoesEncomenda.classList.toggle("oculto");
    if (orientacoesEncomenda.classList.contains("oculto")){
        botaoEncomenda.textContent = "Solicitar encomenda";
    } else {
        botaoEncomenda.textContent = "Ocultar orientações";
    }
});