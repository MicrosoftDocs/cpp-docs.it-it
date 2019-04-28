---
title: Importazioni reciproche
ms.date: 11/04/2016
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
ms.openlocfilehash: f01e69138a6ca1744645a1c2fa8525b7088e260d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62295671"
---
# <a name="mutual-imports"></a>Importazioni reciproche

L'esportazione o importazione di un altro file eseguibile presenta complicazioni quando le importazioni sono reciproca (o circolare). Ad esempio, due DLL importare simboli tra loro, simili alle funzioni ricorsive.

Il problema di importazione reciproca di file eseguibili (in genere DLL) è che nessuno possa essere compilata senza compilare prima l'altro. Ogni processo di compilazione richiede, come input, una libreria di importazione generata dal processo di compilazione.

La soluzione consiste nell'utilizzare l'utilità LIB con l'opzione /DEF, che genera una libreria di importazione senza compilare il file eseguibile. Con questa utilità, è possibile creare tutte le librerie di importazione è necessario, sono coinvolti, indipendentemente dal numero di DLL o grado di complessità delle dipendenze.

La soluzione per la gestione delle importazioni reciproche generale è:

1. Eseguire ogni DLL a loro volta. (Qualsiasi ordine è fattibile, anche se alcuni ordini sono più appropriati). Se tutte le librerie di importazione necessarie esistano e siano correnti, eseguire LINK per generare il file eseguibile (DLL). Questa operazione genera una libreria di importazione. In caso contrario, eseguire LIB per produrre una libreria di importazione.

   L'esecuzione di LIB con l'opzione /DEF produce un file aggiuntivo con un. Estensione EXP. Il file con estensione File EXP dovrà essere usato in futuro per compilare il file eseguibile.

1. Dopo l'uso di collegamento o LIB per compilare tutte le librerie di importazione, tornare indietro ed eseguire collegamento per compilare eventuali file eseguibili che non sono stati creati nel passaggio precedente. Si noti che il file EXP corrispondente deve essere specificato nella riga di collegamento.

   Se è stata eseguita l'utilità in precedenza per creare una libreria di importazione per DLL1 LIB, LIB avrebbe prodotto il file di DLL1. È necessario usare DLL1 come input di collegamento durante la compilazione DLL1.

La figura seguente mostra una soluzione per due DLL importazione si escludono a vicenda, DLL1 e DLL2. Passaggio 1 è per l'esecuzione di LIB, con il set di opzioni /DEF su DLL1. Passaggio 1 produce DLL1 DLL1.lib e una libreria di importazione. Nel passaggio 2, la libreria di importazione consente di compilare DLL2, che a sua volta genera una libreria di importazione per i simboli DLL2. Passaggio 3 si basa DLL1, usando DLL1 e DLL2 come input. Si noti che un file di estensione EXP per DLL2 non è necessario perché LIB non è stato usato per compilare la libreria di importazione DLL2.

![Uso di importazioni reciproche per collegare due DLL](media/vc37yj1.gif "con importazioni reciproche per collegare due DLL")<br/>
Collegamento di due DLL con importazioni reciproche

## <a name="limitations-of-afxext"></a>Limitazioni di AFXEXT

È possibile usare il `_AFXEXT` simbolo del preprocessore per le DLL fino a quando non è più livelli di DLL estensione MFC di estensione MFC. Se si dispone di MFC di estensione dll che chiamano o derivare dalle classi in MFC un'estensione personalizzata le DLL, che quindi derivare dalle classi MFC, è necessario utilizzare il simbolo del preprocessore per evitare ambiguità.

Il problema è che in Win32, è necessario dichiarare in modo esplicito tutti i dati come **dllexport** se devono essere esportate da una DLL, e **declspec** se è possibile importare da una DLL. Quando si definiscono `_AFXEXT`, le intestazioni MFC assicurarsi che **AFX_EXT_CLASS** sia definito correttamente.

Quando sono presenti più livelli, un simbolo, ad esempio **AFX_EXT_CLASS** non è sufficiente, perché una DLL di estensione MFC può essere esportare nuove classi, nonché l'importazione di altre classi da un'altra DLL di estensione MFC. Per risolvere questo problema, utilizzare un simbolo del preprocessore speciale che indica che si compila la DLL o tramite la DLL. Si supponga, ad esempio, due DLL estensione MFC, dll e b. dll. Ognuno di essi Esporta alcune classi di h e h, rispettivamente. B. dll Usa le classi dalla DLL. I file di intestazione sarebbe simile al seguente:

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

Quando viene compilato DLL, viene compilata con `/D A_IMPL` e quando b. dll viene compilata con `/D B_IMPL`. Tramite simboli separati per ogni DLL `CExampleB` vengono esportati e `CExampleA` viene importato durante la compilazione b. dll. `CExampleA` è esportare durante la creazione di DLL e importato quando viene usato da DLL (o un altro client).

Questo tipo di sovrapposizione non può essere eseguito quando si usa l'oggetto incorporato **AFX_EXT_CLASS** e `_AFXEXT` simboli del preprocessore. La tecnica descritta in precedenza è stato risolto il problema in modo non diversamente da quanto accade che il meccanismo di MFC Usa durante la compilazione relativo tecnologie Active, Database e le DLL estensione MFC di rete.

## <a name="not-exporting-the-entire-class"></a>Non esportare l'intera classe

Quando non si esporta un'intera classe, è necessario assicurarsi che gli elementi dati necessari creati le macro MFC vengono esportati in modo corretto. Questa operazione può essere eseguita mediante la ridefinizione `AFX_DATA` alla macro della classe specifico. Questa operazione deve essere eseguita ogni volta che si sta esportando non l'intera classe.

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

- [Esportazione da una DLL](exporting-from-a-dll.md)

- [Esportazione da una DLL mediante. File DEF](exporting-from-a-dll-using-def-files.md)

- [Esportazione da una DLL tramite dllexport](exporting-from-a-dll-using-declspec-dllexport.md)

- [Esportazione e importazione utilizzando AFX_EXT_CLASS](exporting-and-importing-using-afx-ext-class.md)

- [Esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio C](exporting-cpp-functions-for-use-in-c-language-executables.md)

- [Determinare quale metodo di esportazione da utilizzare](determining-which-exporting-method-to-use.md)

- [Importare in un'applicazione tramite __declspec(dllimport)](importing-into-an-application-using-declspec-dllimport.md)

### <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [L'utilità LIB e l'opzione /DEF](reference/lib-reference.md)

## <a name="see-also"></a>Vedere anche

[Importazione ed esportazione](importing-and-exporting.md)
