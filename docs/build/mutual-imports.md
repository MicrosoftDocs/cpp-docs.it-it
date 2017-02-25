---
title: "Importazioni reciproche | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_AFXEXT (simbolo del preprocessore)"
  - "AFX_DATA"
  - "AFX_EXT_CLASS (macro)"
  - "importazioni circolari"
  - "DLL [C++], importazione"
  - "file eseguibili [C++], importazione"
  - "esportazione di DLL [C++], importazioni reciproche"
  - "DLL di estensione [C++], importazioni reciproche"
  - "importazione di DLL [C++], importazioni reciproche"
  - "importazioni DLL reciproche [C++]"
  - "importazione reciproca di file eseguibili [C++]"
ms.assetid: 2cc29537-92ee-4d92-af39-8b8b3afd808f
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Importazioni reciproche
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'esportazione o l'importazione in un altro file eseguibile presenta alcune complicazioni quando le importazioni sono reciproche, ovvero circolari.  Un esempio è dato da due DLL che importano simboli l'una dall'altra, analogamente alle funzioni ricorsive reciproche.  
  
 Il problema dei file eseguibili a importazione reciproca, di solito DLL, è dato dal fatto che non è possibile compilare un file senza compilare prima l'altro.  Ciascun processo di compilazione richiede, come input, una libreria di importazione prodotta dall'altro processo di compilazione.  
  
 La soluzione consiste nell'impiego dell'utilità LIB con l'opzione \/DEF, che produce una libreria di importazione senza compilare l'eseguibile.  Questa utilità consente di compilare tutte le librerie di importazione necessarie, indipendentemente dal numero di DLL coinvolte o dal grado di complessità delle dipendenze.  
  
 La soluzione generale per gestire le importazioni reciproche è descritta di seguito.  
  
1.  Prendere ciascuna DLL a turno. L'ordine non è importante, anche se alcune soluzioni sono ottimali. Se tutte le librerie di importazione necessarie sono attualmente disponibili, eseguire LINK per compilare il file eseguibile \(DLL\).  Viene creata una libreria di importazione.  In caso contrario, eseguire LIB per creare una libreria di importazione.  
  
     L'esecuzione di LIB con l'opzione \/DEF produce un file aggiuntivo con estensione exp,  che deve essere utilizzato successivamente per compilare l'eseguibile.  
  
2.  Dopo avere utilizzato LINK o LIB per compilare tutte le librerie di importazione, tornare indietro ed eseguire LINK per compilare i file eseguibili che non sono stati compilati nel passaggio precedente.  Tenere presente che il file exp corrispondente deve essere specificato sulla riga LINK.  
  
     Se è stata eseguita l'utilità LIB per creare una libreria di importazione per DLL1, dovrebbe essere stato prodotto anche il file DLL1.exp.  È necessario utilizzare DLL1.exp come input per LINK al momento della compilazione di DLL1.dll.  
  
 Nell'esempio riportato di seguito viene illustrata una soluzione per due DLL di importazione reciproche, DLL1 e DLL2.  Il passaggio 1 prevede l'esecuzione di LIB, con l'opzione \/DEF impostata, su DLL1.  Questo passaggio produce la libreria di importazione DLL1.lib e il file DLL1.exp.  Nel passaggio 2 la libreria di importazione viene utilizzata per compilare DLL2, che produce a sua volta una libreria di importazione per i simboli di DLL2.  Il passaggio 3 compila DLL1, utilizzando come input DLL1.exp e DLL2.lib.  Tenere presente che non è necessario un file exp per DLL2, poiché non è stata utilizzata l'utilità LIB per compilare la libreria di importazione di DLL2.  
  
 ![Uso di importazioni reciproche per collegare due DLL](../build/media/vc37yj1.png "vc37YJ1")  
Collegamento di due DLL con importazioni reciproche  
  
## Limitazioni di \_AFXEXT  
 È possibile utilizzare il simbolo del preprocessore `_AFXEXT` per le DLL di estensione purché non siano presenti più livelli di DLL di estensione.  Se si hanno DLL di estensione che chiamano o derivano da classi nelle relative DLL di estensione, derivando quindi dalle classi MFC, è necessario utilizzare il proprio simbolo del preprocessore per evitare ambiguità.  
  
 Il problema è dato dal fatto che in Win32 è necessario dichiarare i dati in modo esplicito come **\_\_declspec\(dllexport\)** se devono essere esportati da una DLL e come **\_\_declspec\(dllimport\)** se devono essere importati da una DLL.  Quando si definisce `_AFXEXT`, le intestazioni MFC assicurano la corretta definizione di **AFX\_EXT\_CLASS**.  
  
 Quando sono presenti più livelli, un simbolo come **AFX\_EXT\_CLASS** non è sufficiente, poiché una DLL di estensione potrebbe esportare nuove classi o importare altre classi da un'altra DLL di estensione.  Per risolvere il problema, è possibile utilizzare uno speciale simbolo del preprocessore per indicare se si sta compilando la DLL o utilizzando la DLL.  Ad esempio, si immaginino due estensioni DLL: A.dll e B.dll.  Esportano entrambe alcune classi in A.h e B.h, rispettivamente.  B.dll utilizza le classi di A.dll.  I file di intestazione potrebbero essere analoghi al seguente:  
  
```  
/* A.H */  
#ifdef A_IMPL  
   #define CLASS_DECL_A   __declspec(dllexport)  
#else  
   #define CLASS_DECL_A   __declspec(dllimport)  
#endif  
  
class CLASS_DECL_A CExampleA : public CObject  
{ ... class definition ... };  
  
// B.H  
#ifdef B_IMPL  
   #define CLASS_DECL_B   __declspec(dllexport)  
#else  
   #define CLASS_DECL_B   __declspec(dllimport)  
#endif  
  
class CLASS_DECL_B CExampleB : public CExampleA  
{ ... class definition ... };  
...  
```  
  
 A.dll viene compilata con `/D A_IMPL` e B.dll viene compilata con `/D B_IMPL`.  Utilizzando simboli distinti per ogni DLL, `CExampleB` viene esportato, mentre `CExampleA` viene importato durante la compilazione di B.dll.  `CExampleA` viene esportato durante la compilazione di A.dll e importato quando viene utilizzato da B.dll \(o da un altro client\).  
  
 Questo tipo di disposizione su più livelli non può essere realizzato quando si utilizzano i simboli del preprocessore incorporati **AFX\_EXT\_CLASS** e `_AFXEXT`.  La tecnica sopra descritta risolve il problema in modo non dissimile dal meccanismo utilizzato da MFC nella compilazione delle proprie DLL di estensione per la tecnologia Active, i database e la rete.  
  
## Esportazione di porzioni di classi  
 Quando si esportano porzioni di classi, occorre accertarsi che gli elementi di dati necessari creati dalle macro MFC vengano esportati correttamente.  A tal fine, è possibile ridefinire `AFX_DATA` in base alla macro della classe specifica.  Eseguire questa operazione ogni volta che non si esporta l'intera classe.  
  
 Di seguito è riportato un esempio.  
  
```  
/* A.H */  
#ifdef A_IMPL  
   #define CLASS_DECL_A  _declspec(dllexport)  
#else  
   #define CLASS_DECL_A  _declspec(dllimport)  
#endif  
  
#undef  AFX_DATA  
#define AFX_DATA CLASS_DECL_A  
  
class CExampleA : public CObject  
{  
   DECLARE_DYNAMIC()  
   CLASS_DECL_A int SomeFunction();  
   //... class definition ...  
};  
  
#undef AFX_DATA  
#define AFX_DATA  
```  
  
### Scegliere l'argomento con cui si desidera procedere  
  
-   [Esportare da una DLL](../build/exporting-from-a-dll.md)  
  
-   [Esportazione da una DLL tramite i file def](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Esportazione da una DLL utilizzando \_\_declspec\(dllexport\)](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
-   [Esportazione e importazione utilizzando AFX\_EXT\_CLASS](../build/exporting-and-importing-using-afx-ext-class.md)  
  
-   [Esportazione di funzioni C\+\+ per l'utilizzo in eseguibili in linguaggio C](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)  
  
-   [Scelta del metodo di esportazione da utilizzare](../build/determining-which-exporting-method-to-use.md)  
  
-   [Importazione in un'applicazione utilizzando \_\_declspec\(dllimport\)](../build/importing-into-an-application-using-declspec-dllimport.md)  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Utilità LIB e opzione \/DEF](../build/reference/lib-reference.md)  
  
## Vedere anche  
 [Importazione ed esportazione](../build/importing-and-exporting.md)