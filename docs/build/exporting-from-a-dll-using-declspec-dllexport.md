---
title: Esportazione da una DLL tramite __declspec(dllexport)
ms.date: 11/04/2016
f1_keywords:
- dllexport
- __declspec
helpviewer_keywords:
- __declspec(dllexport) keyword [C++]
- names [C++], DLL exports by
- export directives [C++]
- exporting DLLs [C++], __declspec(dllexport) keyword
ms.assetid: a35e25e8-7263-4a04-bad4-00b284458679
ms.openlocfilehash: 3b6b9733776f30fc8dcbfeee709b7d24e0f0187b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62195316"
---
# <a name="exporting-from-a-dll-using-declspecdllexport"></a>Esportazione da una DLL tramite __declspec(dllexport)

Microsoft ha introdotto **Export** nella versione del compilatore 16 bit dell'oggetto visivo C++ per consentire al compilatore di generare automaticamente i nomi di esportazione e inserirli in un file con estensione LIB. Questo file con estensione LIB è quindi utilizzabile per il collegamento a una DLL come un lib statico.

Nelle versioni più recenti del compilatore, è possibile esportare i dati, funzioni, classi o funzioni membro della classe da una DLL mediante il **dllexport** (parola chiave). **dllexport** aggiunge la direttiva di esportazione del file oggetto non è necessario usare un file con estensione def.

La comodità è più evidente quando si tenta di esportare decorati i nomi delle funzioni C++. Poiché non è presente alcuna specifica standard per la decorazione dei nomi, il nome di una funzione esportata potrebbe cambiare tra versioni diverse del compilatore. Se si usa **dllexport**, la ricompilazione della DLL e file .exe dipendenti è necessaria solo per conto di eventuali modifiche delle convenzioni di denominazione.

Molte direttive di esportazione, ad esempio numeri ordinali, NONAME e PRIVATE, possono essere definite solo in un file. def e non è possibile specificare questi attributi senza un file def. Se tuttavia si utilizza **dllexport** oltre a usare un def file non causa errori di compilazione.

Per esportare le funzioni, il **dllexport** parola chiave deve comparire a sinistra della parola chiave della convenzione di chiamata, se viene specificata una parola chiave. Ad esempio:

```
__declspec(dllexport) void __cdecl Function1(void);
```

Per esportare tutti i membri dati pubblici e le funzioni membro in una classe, la parola chiave deve comparire a sinistra del nome della classe come indicato di seguito:

```
class __declspec(dllexport) CExampleExport : public CObject
{ ... class definition ... };
```

> [!NOTE]
>  `__declspec(dllexport)` non è possibile applicare a una funzione con il `__clrcall` convenzione di chiamata.

Quando si compila la DLL, si crea in genere un file di intestazione che contiene i prototipi di funzione e/o le classi esportate e aggiungere **dllexport** alle dichiarazioni nel file di intestazione. Per rendere il codice più leggibile, definire una macro per **dllexport** e utilizzarla con ciascun simbolo da esportare:

```
#define DllExport   __declspec( dllexport )
```

**dllexport** archivia i nomi nella tabella di esportazione della DLL delle funzioni. Se si desidera ottimizzare le dimensioni della tabella, vedere [esportazione di funzioni da una DLL per ordinale anziché al nome](exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md).

> [!NOTE]
>  Durante il porting del codice sorgente della DLL da Win16 a Win32, sostituire ogni istanza di **Export** con **dllexport**.

Come riferimento, eseguire ricerche in file di intestazione Winbase Win32. Che contiene esempi di **declspec** utilizzo.

## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.

- [Esportazione da una DLL tramite i file def](exporting-from-a-dll-using-def-files.md)

- [Esportazione e importazione utilizzando AFX_EXT_CLASS](exporting-and-importing-using-afx-ext-class.md)

- [Esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio C](exporting-cpp-functions-for-use-in-c-language-executables.md)

- [Esportazione di funzioni C per l'utilizzo in eseguibili in linguaggio C o C++](exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)

- [Determinare quale metodo di esportazione da utilizzare](determining-which-exporting-method-to-use.md)

- [Importare in un'applicazione tramite __declspec(dllimport)](importing-into-an-application-using-declspec-dllimport.md)

- [Inizializzare una DLL](run-time-library-behavior.md#initializing-a-dll)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [La parola chiave declspec](../cpp/declspec.md)

- [Importazione ed esportazione di funzioni inline](importing-and-exporting-inline-functions.md)

- [Importazioni reciproche](mutual-imports.md)

## <a name="see-also"></a>Vedere anche

[Esportazione da una DLL](exporting-from-a-dll.md)
