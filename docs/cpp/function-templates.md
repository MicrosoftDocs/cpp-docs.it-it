---
description: 'Altre informazioni su: modelli di funzione'
title: Modelli di funzioni
ms.date: 07/15/2019
helpviewer_keywords:
- function templates
- templates, function
- function templates, about function templates
ms.assetid: 59b56a4b-0689-4161-9c07-25021562e2a7
ms.openlocfilehash: f64041e2fdd8b9acc30a4f71e445d9f73bb7db37
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97341386"
---
# <a name="function-templates"></a>Modelli di funzioni

I modelli di classe definiscono un gruppo di classi correlate, basate sugli argomenti tipo passati alla classe mediante la creazione di istanze. I modelli di funzione sono simili ai modelli di classe ma definiscono un gruppo di funzioni. Con i modelli di funzione è possibile specificare un set di funzioni basate sullo stesso codice, ma che agiscono su tipi o classi differenti. Il modello di funzione seguente scambia due elementi:

```cpp
// function_templates1.cpp
template< class T > void MySwap( T& a, T& b ) {
   T c(a);
   a = b;
   b = c;
}
int main() {
}
```

Questo codice definisce un gruppo di funzioni che scambiano i valori degli argomenti. Da questo modello è possibile generare funzioni che sostituiscono i **`int`** **`long`** tipi e e anche i tipi definiti dall'utente. `MySwap` scambia anche le classi se il costruttore di copia e l'operatore di assegnazione della classe sono definiti correttamente.

Inoltre, il modello di funzione impedisce lo scambio di oggetti di tipi diversi, perché il compilatore conosce i tipi dei parametri *a* e *b* in fase di compilazione.

Sebbene questa funzione possa essere eseguita da una funzione non basata su modelli, utilizzando i puntatori void, la versione del modello è indipendente dai tipi. Considerare le chiamate seguenti:

```cpp
int j = 10;
int k = 18;
CString Hello = "Hello, Windows!";
MySwap( j, k );          //OK
MySwap( j, Hello );      //error
```

La seconda chiamata `MySwap` attiva un errore in fase di compilazione, in quanto il compilatore non può generare una funzione `MySwap` con parametri di tipi differenti. Se sono stati utilizzati puntatori void, entrambe le chiamate di funzione verranno compilate correttamente, tuttavia la funzione non verrà eseguita nel modo previsto in fase di esecuzione.

La specifica esplicita degli argomenti di modelli per un modello di funzione non è consentita. Ad esempio:

```cpp
// function_templates2.cpp
template<class T> void f(T) {}
int main(int j) {
   f<char>(j);   // Generate the specialization f(char).
   // If not explicitly specified, f(int) would be deduced.
}
```

Quando un argomento di modello è specificato in modo esplicito, le normali conversioni implicite vengono effettuate per convertire l'argomento della funzione nel tipo dei parametri del modello di funzione corrispondente. Nell'esempio precedente, il compilatore eseguirà la conversione nel `j` tipo **`char`** .

## <a name="see-also"></a>Vedi anche

[Modelli](../cpp/templates-cpp.md)<br/>
[Creazione di istanze di modelli di funzione](../cpp/function-template-instantiation.md)<br/>
[Creazione di un'istanza esplicita](../cpp/explicit-instantiation.md)<br/>
[Specializzazione esplicita di modelli di funzione](../cpp/explicit-specialization-of-function-templates.md)
