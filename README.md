# 📦 Sistema de Gerenciamento de Estoque em C

Este projeto implementa um **Sistema de Gerenciamento de Estoque** desenvolvido em **linguagem C**, utilizando **matrizes bidimensionais** para controlar a quantidade de produtos em múltiplas filiais.

O sistema funciona via **menu interativo no terminal**, permitindo cadastrar estoques, atualizar valores e realizar diversas consultas estatísticas.

---

## 🎯 Objetivo do Projeto

* Gerenciar o estoque de **até 10 filiais**
* Controlar **até 15 produtos**
* Realizar **consultas e análises** sobre os dados armazenados
* Aplicar conceitos fundamentais de:

  * Matrizes
  * Funções
  * Estruturas de controle
  * Entrada e saída de dados em C

---

## 🖥️ Funcionalidades

### 🔹 Cadastro Inicial

* Definição do número de filiais e produtos
* Inserção da quantidade de cada produto em cada filial

### 🔹 Atualização de Estoque

* Alteração manual do estoque de um produto específico em uma filial
* Validação de entradas (sem valores negativos)

### 🔹 Consultas Disponíveis

* 📊 Estoque total de cada produto
* 🏬 Estoque total de cada filial
* 📈 Produto com **maior e menor estoque**
* 🏢 Filial com **mais e menos estoque**
* 📉 Média de estoque por filial
* 📦 Média de estoque por produto

---

## 📂 Estrutura do Projeto

```
📦 gerenciamento-estoque-c
├── main.c        # Código-fonte com toda a lógica do sistema
└── README.md     # Documentação do projeto
```

---

## ⚙️ Constantes Utilizadas

```c
#define mfiliais 10
#define mprodutos 15
```

* `mfiliais` → número máximo de filiais
* `mprodutos` → número máximo de produtos

---

## 🚀 Como Compilar e Executar

### 1️⃣ Compilar o programa

```bash
gcc main.c -o estoque
```

### 2️⃣ Executar

```bash
./estoque
```

---

## 🧭 Menu Principal

Ao iniciar o programa, o usuário tem acesso ao menu:

```
1 - Cadastro Inicial
2 - Atualização do Estoque
3 - Consultas
4 - Encerrar o Programa
```

---

## 🧠 Principais Funções do Sistema

* `inserirDados()` – cadastra o estoque inicial
* `atualizarEstoque()` – atualiza valores de produtos
* `consultas()` – menu de consultas estatísticas
* `totalEstoquePorProduto()` – soma estoque por produto
* `totalEstoquePorFilial()` – soma estoque por filial
* `produtoMaiorMenorEstoque()` – identifica extremos de produtos
* `filialMaiorMenorEstoque()` – identifica extremos de filiais
* `mediaEstoquePorFilial()` – calcula média por filial
* `mediaEstoquePorProduto()` – calcula média por produto

---

## ⚠️ Observações Importantes

* O sistema utiliza:

  ```c
  system("cls");
  system("pause");
  ```

  👉 **Compatível com Windows**
  👉 Em Linux/macOS, substitua por:

  ```c
  system("clear");
  ```

* O programa não utiliza arquivos; os dados são armazenados **apenas em memória** durante a execução.

---

## 🧪 Exemplo de Uso

* Cadastro de 3 filiais e 5 produtos
* Atualização do estoque do Produto 2 na Filial 1
* Consulta do produto com maior estoque
* Cálculo da média de estoque por filial

---
## 🇺🇸 (English Version)


➡️ **([English Version](README.en.md))**

---

## 👨‍💻 Autor

**Felipe Salinas Caodaglio**
