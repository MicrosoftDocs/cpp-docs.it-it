---
title: Importazioni reciproche | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- mutual DLL imports [C++]
- AFX_DATA
- importing DLLs [C++], mutual imports
- mutually importing executable files [C++]
- AFX_EXT_CLASS macro
- circular imports
- _AFXEXT preprocessor symbol
- DLLs [C++], importing
- executable files [C++], importing
- extension DLLs [C++], mutual imports
- exporting DLLs [C++], mutual imports
ms.assetid: 2cc29537-92ee-4d92-af39-8b8b3afd808f
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: bfd31cd4e5776555137daf002c076e14d4031f89
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mutual-imports"></a>Importazioni reciproche
Esportazione o importazione in un altro file eseguibile presenta complicazioni quando le importazioni sono reciproca (o circolare). Ad esempio, due DLL importare simboli tra loro, simili alle funzioni ricorsive.  
  
 Il problema di importazione reciproca di file eseguibili (in genere DLL) è che non è possibile compilare senza compilare prima l'altro. Ogni processo di compilazione richiede, come input, una libreria di importazione prodotta dal processo di compilazione.  
  
 La soluzione consiste nell'utilizzare l'utilità LIB con l'opzione /DEF, che genera una libreria di importazione senza compilare il file eseguibile. Utilizzo di questa utilità, è possibile compilare tutte le librerie di importazione è necessario, indipendentemente dal numero di DLL coinvolti o grado di complessità delle dipendenze.  
  
 È la soluzione generale per la gestione delle importazioni reciproche:  
  
1.  Eseguire ogni DLL a sua volta. (Qualsiasi ordine è possibile, anche se alcuni ordini sono più adatti). Se tutte le librerie di importazione necessarie sono disponibili correnti, eseguire LINK per creare il file eseguibile (DLL). Questa operazione genera una libreria di importazione. In caso contrario, eseguire LIB per produrre una libreria di importazione.  
  
     Esecuzione di LIB con l'opzione /DEF produce un file aggiuntivo con un. Estensione EXP. Il file con estensione File EXP deve essere utilizzato in seguito per compilare il file eseguibile.  
  
2.  Dopo aver utilizzato LINK o LIB per compilare tutte le librerie di importazione, tornare indietro ed eseguire LINK per generare i file eseguibili che non sono stati compilati nel passaggio precedente. Si noti che è necessario specificare il file EXP corrispondente nella riga di collegamento.  
  
     Se è stata eseguita l'utilità LIB in precedenza per creare una libreria di importazione per DLL1, avrebbe prodotto anche il file DLL1. È necessario utilizzare DLL1 come input di collegamento durante la compilazione di DLL1.  
  
 Nella figura seguente viene illustrata una soluzione per due DLL importazione reciproca, DLL1 e DLL2. Passaggio 1 consiste nell'esecuzione di LIB, con il set di opzione /DEF, su DLL1. Passaggio 1 produce DLL1 DLL1.lib e una libreria di importazione. Nel passaggio 2, la libreria di importazione viene utilizzata per compilare DLL2, che a sua volta genera una libreria di importazione per simboli di DLL2. Passaggio 3 genera DLL1, utilizzando DLL1 e DLL2 come input. Tenere presente che non è necessario un file EXP per DLL2, poiché LIB non è stato utilizzato per compilare la libreria di importazione DLL2.  
  
 ![Uso di importazioni reciproche per collegare due DLL](../build/media/vc37yj1.gif "vc37YJ1")  
Collegamento di due DLL con importazioni reciproche  
  
## <a name="limitations-of-afxext"></a>Limitazioni di AFXEXT  
 È possibile utilizzare il `_AFXEXT` simbolo del preprocessore per le DLL, purché non si dispone più livelli di estensione MFC DLL di estensione MFC. Se si dispone di estensione MFC DLL che chiamano o derivano dalle classi nel propria MFC DLL di estensione, quindi dalla quale derivare le classi MFC, è necessario utilizzare il proprio simbolo del preprocessore per evitare ambiguità.  
  
 Il problema è che in Win32, è necessario dichiarare in modo esplicito i dati come **dllexport** se è possibile esportare da una DLL, e **declspec** se deve essere importato da una DLL. Quando si definisce `_AFXEXT`, le intestazioni MFC assicurarsi che **AFX_EXT_CLASS** sia definito correttamente.  
  
 Quando si dispone più livelli, un simbolo, ad esempio **AFX_EXT_CLASS** non è sufficiente, perché una DLL di estensione MFC potrebbe essere esportare nuove classi, nonché importare altre classi da un'altra DLL di estensione MFC. Per risolvere questo problema, utilizzare un simbolo del preprocessore speciale che indica che si compila la DLL o utilizzando la DLL. Si supponga, ad esempio, due DLL di estensione MFC, dll e DLL. Ognuno di essi Esporta alcune classi nella h e h, rispettivamente. B. dll utilizza le classi di DLL. I file di intestazione avrà un aspetto simile al seguente:  
  
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
  
 DLL viene compilata con `/D A_IMPL` e DLL viene compilata con `/D B_IMPL`. Utilizzando simboli distinti per ogni DLL, `CExampleB` viene esportato e `CExampleA` viene importato quando si compila una DLL. `CExampleA`viene esportato quando si compila una DLL e importato quando viene utilizzato dalla DLL (o un altro client).  
  
 Questo tipo di disposizione non può essere eseguito quando si utilizza l'elemento predefinito **AFX_EXT_CLASS** e `_AFXEXT` simboli del preprocessore. La tecnica sopra descritta risolve questo problema in modo diversamente da quanto accade non che viene utilizzato il meccanismo di MFC quando si compila la tecnologia Active, Database e DLL di estensione MFC di rete.  
  
## <a name="not-exporting-the-entire-class"></a>Non esportare l'intera classe  
 Quando non si sta esportando un'intera classe, è necessario assicurarsi che gli elementi dati necessari creati dalle macro MFC vengano esportati correttamente. Questa operazione può essere eseguita mediante la ridefinizione `AFX_DATA` alla macro della classe specifico. Questa operazione deve essere eseguita ogni volta che si sta esportando non l'intera classe.  
  
 Ad esempio:  
  
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
  
### <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.  
  
-   [Esportazione da una DLL](../build/exporting-from-a-dll.md)  
  
-   [Esportazione da una DLL tramite. DEF (file)](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Esportazione da una DLL tramite dllexport](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
-   [Esportazione e importazione tramite AFX_EXT_CLASS](../build/exporting-and-importing-using-afx-ext-class.md)  
  
-   [Esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio C](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)  
  
-   [Metodo di esportazione da utilizzare](../build/determining-which-exporting-method-to-use.md)  
  
-   [Importazione in un'applicazione utilizzando declspec](../build/importing-into-an-application-using-declspec-dllimport.md)  
  
### <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [L'utilità LIB e l'opzione /DEF](../build/reference/lib-reference.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Importazione ed esportazione](../build/importing-and-exporting.md)