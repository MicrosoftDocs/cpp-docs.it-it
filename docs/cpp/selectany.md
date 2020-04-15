---
title: selectany
ms.date: 11/04/2016
f1_keywords:
- selectany_cpp
helpviewer_keywords:
- __declspec keyword [C++], selectany
- selectany __declspec keyword
ms.assetid: 9c353017-5a42-4f50-b741-bd13da1ce84d
ms.openlocfilehash: e8ca82900ffd16264aca494950d4793029e55d9c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365592"
---
# <a name="selectany"></a>selectany

**Specifico di Microsoft**

Viene indicato al compilatore che l'elemento dati globale (variabile o oggetto) è una funzione inclusa nel pacchetto (COMDAT) a scelta.

## <a name="syntax"></a>Sintassi

```
__declspec( selectany ) declarator
```

## <a name="remarks"></a>Osservazioni

In fase di collegamento, se sono visualizzate più definizioni di COMDAT, il linker ne sceglie una e ignora il resto. Se è selezionata l'opzione del linker [/OPT:REF](../build/reference/opt-optimizations.md) (Optimizations), si verificherà l'eliminazione COMDAT per rimuovere tutti gli elementi di dati senza riferimenti nell'output del linker.

I costruttori e l'assegnazione attraverso funzione globale o metodi statici presenti nella dichiarazione non creano un riferimento e non impediscono l'eliminazione di /opt:REF. Non si dovrebbe contare sugli effetti collaterali di tale codice, quando non esistono altri riferimenti ai dati.

Per gli oggetti globali inizializzati in modo dinamico, **selectany** eliminerà anche il codice di inizializzazione di un oggetto senza riferimenti.

In genere, un elemento dati globale può essere inizializzato solo una volta, in un progetto DLL o EXE. **selectany** può essere utilizzato per inizializzare i dati globali definiti dalle intestazioni, quando la stessa intestazione viene visualizzata in più di un file di origine. **selectany** è disponibile in entrambi i compilatori C e C.

> [!NOTE]
> **selectany** può essere applicato solo all'inizializzazione effettiva di elementi di dati globali visibili esternamente.

## <a name="example"></a>Esempio

Questo codice mostra come usare l'attributo **selectany:This** code shows how to use the selectany attribute:

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

## <a name="example"></a>Esempio

Questo codice mostra come utilizzare l'attributo **selectany** per garantire la riduzione dei dati COMDAT quando si utilizza anche l'opzione del linker [/OPT:ICF.](../build/reference/opt-optimizations.md) Si noti che i dati devono essere contrassegnati con **selectany** e inseriti in una sezione **const** (readonly). È necessario specificare esplicitamente la sezione di sola lettura.

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

**FINE Specifico di Microsoft**

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
