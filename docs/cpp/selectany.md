---
title: selectany
ms.date: 11/04/2016
f1_keywords:
- selectany_cpp
helpviewer_keywords:
- __declspec keyword [C++], selectany
- selectany __declspec keyword
ms.assetid: 9c353017-5a42-4f50-b741-bd13da1ce84d
ms.openlocfilehash: 6cd2ec4e22d94c42432a1fc3e39afd5540302d22
ms.sourcegitcommit: 43cee7a0d41a062661229043c2f7cbc6ace17fa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/13/2020
ms.locfileid: "92008217"
---
# `selectany`

**Specifico di Microsoft**

Viene indicato al compilatore che l'elemento dati globale (variabile o oggetto) è una funzione inclusa nel pacchetto (COMDAT) a scelta.

## <a name="syntax"></a>Sintassi

> **`__declspec( selectany )`***dichiaratore*

## <a name="remarks"></a>Commenti

In fase di collegamento, se sono visualizzate più definizioni di COMDAT, il linker ne sceglie una e ignora il resto. Se l'opzione del linker [`/OPT:REF`](../build/reference/opt-optimizations.md) (ottimizzazioni) è selezionata, si verificherà l'eliminazione di COMDAT per rimuovere tutti gli elementi di dati senza riferimenti nell'output del linker.

I costruttori e l'assegnazione attraverso funzione globale o metodi statici presenti nella dichiarazione non creano un riferimento e non impediscono l'eliminazione di /opt:REF. Non si dovrebbe contare sugli effetti collaterali di tale codice, quando non esistono altri riferimenti ai dati.

Per gli oggetti globali inizializzati in modo dinamico, **`selectany`** eliminerà anche il codice di inizializzazione di un oggetto senza riferimenti.

In genere, un elemento dati globale può essere inizializzato solo una volta, in un progetto DLL o EXE. **`selectany`** può essere utilizzato per inizializzare i dati globali definiti dalle intestazioni, quando la stessa intestazione viene visualizzata in più di un file di origine. **`selectany`** è disponibile nei compilatori C e C++.

> [!NOTE]
> **`selectany`** può essere applicato solo all'inizializzazione effettiva di elementi di dati globali visibile esternamente.

## <a name="example-selectany-attribute"></a>Esempio: `selectany` attribute

Questo codice Mostra come usare l' **`selectany`** attributo:

```cpp
//Correct - x1 is initialized and externally visible
__declspec(selectany) int x1=1;

//Incorrect - const is by default static in C++, so
//x2 is not visible externally (This is OK in C, since
//const is not by default static in C)
const __declspec(selectany) int x2 =2;

//Correct - x3 is extern const, so externally visible
extern const __declspec(selectany) int x3=3;

//Correct - x4 is extern const, so it is externally visible
extern const int x4;
const __declspec(selectany) int x4=4;

//Incorrect - __declspec(selectany) is applied to the uninitialized
//declaration of x5
extern __declspec(selectany) int x5;

// OK: dynamic initialization of global object
class X {
public:
X(int i){i++;};
int i;
};

__declspec(selectany) X x(1);
```

## <a name="example-use-selectany-attribute-to-ensure-data-comdat-folding"></a>Esempio: usare `selectany` Attribute per garantire la riduzione dei dati COMDAT

Questo codice illustra come usare l' **`selectany`** attributo per garantire la riduzione dei dati COMDAT quando si usa anche l' [`/OPT:ICF`](../build/reference/opt-optimizations.md) opzione del linker. Si noti che i dati devono essere contrassegnati con **`selectany`** e inseriti in una **`const`** sezione (ReadOnly). È necessario specificare esplicitamente la sezione di sola lettura.

```cpp
// selectany2.cpp
// in the following lines, const marks the variables as read only
__declspec(selectany) extern const int ix = 5;
__declspec(selectany) extern const int jx = 5;
int main() {
   int ij;
   ij = ix + jx;
}
```

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[`__declspec`](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
