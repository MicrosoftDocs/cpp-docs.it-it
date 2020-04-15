---
title: Esportazione da una DLL tramite __declspec(dllexport)
ms.date: 05/06/2019
f1_keywords:
- dllexport
helpviewer_keywords:
- __declspec(dllexport) keyword [C++]
- names [C++], DLL exports by
- export directives [C++]
- exporting DLLs [C++], __declspec(dllexport) keyword
ms.assetid: a35e25e8-7263-4a04-bad4-00b284458679
ms.openlocfilehash: 075962758773660085ae0b98b668c264524cc6aa
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328586"
---
# <a name="exporting-from-a-dll-using-__declspecdllexport"></a>Esportazione da una DLL tramite __declspec(dllexport)

È possibile esportare dati, funzioni, classi o funzioni membro di classe da una DLL utilizzando la parola **chiave __declspec(dllexport).** **__declspec(dllexport)** aggiunge la direttiva export al file oggetto in modo che non sia necessario utilizzare un file def.

Questa comodità è più evidente quando si tenta di esportare i nomi di funzione decorata in C. Poiché non esiste alcuna specifica standard per la decorazione dei nomi, il nome di una funzione esportata potrebbe cambiare tra le versioni del compilatore. Se si utilizza **__declspec(dllexport)**, la ricompilazione della DLL e dei file exe dipendenti è necessaria solo per tenere conto delle modifiche apportate alle convenzioni di denominazione.

Molte direttive di esportazione, ad esempio ordinali, NONAME e PRIVATE, possono essere eseguite solo in un file def e non è possibile specificare questi attributi senza un file def. Tuttavia, l'utilizzo di **__declspec(dllexport)** oltre all'utilizzo di un file def non causa errori di compilazione.

Per esportare le funzioni, la parola chiave **__declspec(dllexport)** deve essere visualizzata a sinistra della parola chiave della convenzione di chiamata, se viene specificata una parola chiave. Ad esempio:

```
__declspec(dllexport) void __cdecl Function1(void);
```

Per esportare tutti i membri dati pubblici e le funzioni membro in una classe, la parola chiave deve essere visualizzata a sinistra del nome della classe come segue:

```
class __declspec(dllexport) CExampleExport : public CObject
{ ... class definition ... };
```

> [!NOTE]
> `__declspec(dllexport)`non può essere applicato `__clrcall` a una funzione con la convenzione di chiamata.

Quando si compila la DLL, in genere si crea un file di intestazione che contiene i prototipi di funzione e/o le classi che si stanno esportando e aggiungere **__declspec(dllexport)** alle dichiarazioni nel file di intestazione. Per rendere il codice più leggibile, definire una macro per **__declspec(dllexport)** e utilizzare la macro con ogni simbolo che si sta esportando:

```
#define DllExport   __declspec( dllexport )
```

**__declspec(dllexport)** archivia i nomi delle funzioni nella tabella di esportazione della DLL. Se si desidera ottimizzare le dimensioni della tabella, vedere Esportazione di funzioni da una DLL in [base al numero ordinale anziché](exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md)al nome .

## <a name="what-do-you-want-to-do"></a>Per saperne di più

- [Esportazione da una DLL utilizzando file def](exporting-from-a-dll-using-def-files.md)

- [Esportare e importare utilizzando AFX_EXT_CLASS](exporting-and-importing-using-afx-ext-class.md)

- [Esportare le funzioni di C, per l'utilizzo in file eseguibili in linguaggio C](exporting-cpp-functions-for-use-in-c-language-executables.md)

- [Esportare le funzioni C per l'utilizzo in file eseguibili in linguaggio C o C](exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)

- [Determinare il metodo di esportazione da utilizzare](determining-which-exporting-method-to-use.md)

- [Importare in un'applicazione tramite __declspec(dllimport)](importing-into-an-application-using-declspec-dllimport.md)

- [Inizializzare una DLL](run-time-library-behavior.md#initializing-a-dll)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Parola chiave __declspec](../cpp/declspec.md)

- [Importazione ed esportazione di funzioni inline](importing-and-exporting-inline-functions.md)

- [Importazioni reciproche](mutual-imports.md)

## <a name="see-also"></a>Vedere anche

[Esportazione da una DLL](exporting-from-a-dll.md)
