---
title: "Esportazione da una DLL tramite __declspec(dllexport) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "dllexport"
  - "__declspec"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__declspec(dllexport) (parola chiave) [C++]"
  - "direttive di esportazione [C++]"
  - "esportazione di DLL [C++], __declspec(dllexport) (parola chiave)"
  - "nomi [C++], esportazioni di DLL"
ms.assetid: a35e25e8-7263-4a04-bad4-00b284458679
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Esportazione da una DLL tramite __declspec(dllexport)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nella versione a 16 bit del compilatore di Microsoft Visual C\+\+ è stata introdotta la parola chiave **\_\_export** per consentire la generazione automatica dei nomi di esportazione e il relativo posizionamento in un file lib,  che può quindi essere utilizzato come un normale file lib statico per il collegamento a una DLL.  
  
 Nelle versioni più recenti del compilatore è possibile esportare dati, funzioni, classi o funzioni membro delle classi da una DLL mediante la parola chiave **\_\_declspec\(dllexport\)**,  che aggiunge la direttiva di esportazione al file oggetto per evitare di dover utilizzare un file def.  
  
 L'utilità di questa parola chiave è evidente quando si tenta di esportare i nomi decorati di funzioni C\+\+.  Dato che non esiste alcuna specifica standard per la decorazione dei nomi, il nome di una funzione esportata può variare tra le diverse versioni del compilatore.  Se si utilizza **\_\_declspec\(dllexport\)**, la ricompilazione della DLL e dei file exe dipendenti è necessaria solo per tenere conto di eventuali modifiche delle convenzioni di denominazione.  
  
 Molte direttive di esportazione, come i numeri ordinali, NONAME e PRIVATE, possono essere definite solo in un file def e non è possibile specificare questi attributi senza un file def.  L'utilizzo di **\_\_declspec\(dllexport\)** insieme a un file def, tuttavia, non causa errori di compilazione.  
  
 Per esportare le funzioni, la parola chiave **\_\_declspec\(dllexport\)** deve comparire a sinistra della parola chiave della convenzione di chiamata, se specificata.  Di seguito è riportato un esempio.  
  
```  
__declspec(dllexport) void __cdecl Function1(void);  
```  
  
 Per esportare tutte le funzioni membro e i membri dati pubblici di una classe, la parola chiave deve comparire a sinistra del nome della classe come indicato di seguito:  
  
```  
class __declspec(dllexport) CExampleExport : public CObject  
{ ... class definition ... };  
```  
  
> [!NOTE]
>  Impossibile applicare `__declspec(dllexport)` a una funzione con la convenzione di chiamata `__clrcall`.  
  
 Quando si compila la DLL, in genere viene creato un file di intestazione contenente i prototipi di funzione e\/o le classi esportate e viene aggiunta la parola chiave **\_\_declspec\(dllexport\)** alle dichiarazioni nel file di intestazione.  Per rendere il codice più leggibile, definire una macro per **\_\_declspec\(dllexport\)**, quindi utilizzarla con ciascun simbolo da esportare:  
  
```  
#define DllExport   __declspec( dllexport )   
```  
  
 **\_\_declspec\(dllexport\)** memorizza i nomi di funzione nella tabella di esportazione della DLL.  Per ottimizzare le dimensioni della tabella, vedere [Esportazione di funzioni da una DLL in base al numero ordinale anziché al nome](../build/exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md).  
  
> [!NOTE]
>  Quando si esegue il porting del codice sorgente della DLL da Win16 a Win32, sostituire ogni istanza di **\_\_export** con **\_\_declspec\(dllexport\)**.  
  
 Come riferimento, esaminare il file di intestazione Winbase.h di Win32,  che contiene esempi di utilizzo di **\_\_declspec\(dllimport\)**.  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Esportazione da una DLL utilizzando i file def](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Esportazione e importazione utilizzando AFX\_EXT\_CLASS](../build/exporting-and-importing-using-afx-ext-class.md)  
  
-   [Esportazione di funzioni C\+\+ per l'utilizzo in eseguibili in linguaggio C](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)  
  
-   [Esportazione di funzioni C per l'utilizzo in eseguibili in linguaggio C o C\+\+](../build/exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)  
  
-   [Scelta del metodo di esportazione da utilizzare](../build/determining-which-exporting-method-to-use.md)  
  
-   [Importazione in un'applicazione utilizzando \_\_declspec\(dllimport\)](../build/importing-into-an-application-using-declspec-dllimport.md)  
  
-   [Inizializzare una DLL](../build/initializing-a-dll.md)  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Parola chiave \_\_declspec](../cpp/declspec.md)  
  
-   [Importazione ed esportazione di funzioni inline](../build/importing-and-exporting-inline-functions.md)  
  
-   [Importazioni reciproche](../build/mutual-imports.md)  
  
## Vedere anche  
 [Esportazione da una DLL](../build/exporting-from-a-dll.md)