---
title: Esportazione da una DLL tramite dllexport | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
f1_keywords:
- dllexport
- __declspec
dev_langs:
- C++
helpviewer_keywords:
- __declspec(dllexport) keyword [C++]
- names [C++], DLL exports by
- export directives [C++]
- exporting DLLs [C++], __declspec(dllexport) keyword
ms.assetid: a35e25e8-7263-4a04-bad4-00b284458679
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e6ab1d11c117c75633ce4ab836965449c4cc6ca1
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32368548"
---
# <a name="exporting-from-a-dll-using-declspecdllexport"></a>Esportazione da una DLL tramite __declspec(dllexport)
Microsoft ha introdotto **Export** nella versione di Visual C++ per consentire al compilatore di generare automaticamente i nomi di esportazione e inserirle in un file con estensione LIB del compilatore a 16 bit. Questo file con estensione LIB quindi utilizzabile come un lib statico per il collegamento a una DLL.  
  
 Nelle versioni più recenti del compilatore, è possibile esportare i dati, funzioni, classi o funzioni membro della classe da una DLL utilizzando il **dllexport** (parola chiave). **dllexport** aggiunge la direttiva di esportazione nel file oggetto non è necessario utilizzare un file def.  
  
 Questo metodo pratico è evidente quando si tenta di esportare decorati i nomi delle funzioni di C++. Poiché non esiste alcuna specifica standard per la decorazione dei nomi, tra le versioni del compilatore potrebbe modificare il nome di una funzione esportata. Se si utilizza **dllexport**, la ricompilazione della DLL e file .exe dipendenti è necessaria solo per conto di eventuali modifiche delle convenzioni di denominazione.  
  
 Molte direttive di esportazione, ad esempio numeri ordinali, NONAME e privato, è possibile eseguire solo in un file. def e non è possibile specificare questi attributi senza un file def. Se tuttavia si utilizza **dllexport** oltre a utilizzare un def file non causa errori di compilazione.  
  
 Per esportare le funzioni, il **dllexport** (parola chiave) deve apparire a sinistra della parola chiave della convenzione di chiamata, se viene specificata una parola chiave. Ad esempio:  
  
```  
__declspec(dllexport) void __cdecl Function1(void);  
```  
  
 Per esportare tutti i membri dati pubblici e le funzioni membro in una classe, la parola chiave deve apparire a sinistra del nome della classe, come indicato di seguito:  
  
```  
class __declspec(dllexport) CExampleExport : public CObject  
{ ... class definition ... };  
```  
  
> [!NOTE]
>  `__declspec(dllexport)` non è possibile applicare a una funzione con il `__clrcall` convenzione di chiamata.  
  
 Quando si compila la DLL, è in genere creare un file di intestazione che contiene i prototipi di funzione e/o sta esportando e aggiungere classi **dllexport** alle dichiarazioni nel file di intestazione. Per rendere il codice più leggibile, definire una macro per **dllexport** e usare la macro con ogni simbolo da esportare:  
  
```  
#define DllExport   __declspec( dllexport )   
```  
  
 **dllexport** archivi funzionano nomi nella tabella di esportazione della DLL. Se si desidera ottimizzare le dimensioni della tabella, vedere [esportazione di funzioni da una DLL in numero ordinale anziché al nome](../build/exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md).  
  
> [!NOTE]
>  Durante il porting del codice sorgente della DLL da Win16 a Win32, sostituire ogni istanza di **Export** con **dllexport**.  
  
 Come riferimento, cercare il file di intestazione Winbase Win32. Che contiene esempi di **declspec** utilizzo.  
  
## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.  
  
-   [Esportazione da una DLL tramite DEF (file)](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Esportazione e importazione tramite AFX_EXT_CLASS](../build/exporting-and-importing-using-afx-ext-class.md)  
  
-   [Esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio C](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)  
  
-   [Esportazione di funzioni C per l'utilizzo in eseguibili in linguaggio C o C++](../build/exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)  
  
-   [Determinare quale metodo di esportazione da utilizzare](../build/determining-which-exporting-method-to-use.md)  
  
-   [Importare un'applicazione che utilizza declspec](../build/importing-into-an-application-using-declspec-dllimport.md)  
  
-   [Inizializzazione di una DLL](../build/run-time-library-behavior.md#initializing-a-dll)  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [La parola chiave declspec](../cpp/declspec.md)  
  
-   [Importazione ed esportazione di funzioni inline](../build/importing-and-exporting-inline-functions.md)  
  
-   [Importazioni reciproche](../build/mutual-imports.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Esportazione da una DLL](../build/exporting-from-a-dll.md)