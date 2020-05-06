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

L'esportazione o l'importazione in un altro file eseguibile presenta delle complicazioni quando le importazioni sono reciproche o circolari. Ad esempio, due dll importano simboli tra loro, in modo analogo alle funzioni ricorsive reciproche.

Il problema dell'importazione reciproca dei file eseguibili (in genere dll) è che nessuno dei due può essere compilato senza compilare l'altro. Ogni processo di compilazione richiede, come input, una libreria di importazione prodotta da un altro processo di compilazione.

La soluzione consiste nell'usare l'utilità LIB con l'opzione/DEF, che produce una libreria di importazione senza compilare il file eseguibile. Utilizzando questa utilità, è possibile compilare tutte le librerie di importazione necessarie, indipendentemente dal numero di dll che coinvolgono o dalla complessità delle dipendenze.

La soluzione generale per la gestione delle importazioni reciproche è:

1. Ogni DLL viene eseguita a sua volta. (Qualsiasi ordine è fattibile, sebbene alcuni ordini siano più ottimali). Se sono presenti tutte le librerie di importazione necessarie e sono correnti, eseguire il collegamento per compilare il file eseguibile (DLL). Viene prodotta una libreria di importazione. In caso contrario, eseguire LIB per produrre una libreria di importazione.

   L'esecuzione di LIB con l'opzione/DEF genera un file aggiuntivo con un. Estensione EXP. Il. Il file EXP deve essere usato in un secondo momento per compilare il file eseguibile.

1. Dopo aver utilizzato collegamento o LIB per compilare tutte le librerie di importazione, tornare indietro ed eseguire il collegamento per compilare tutti i file eseguibili non compilati nel passaggio precedente. Si noti che è necessario specificare il file exp corrispondente nella riga di collegamento.

   Se in precedenza è stata eseguita l'utilità LIB per produrre una libreria di importazione per DLL1, LIB avrebbe prodotto anche il file DLL1. exp. È necessario usare DLL1. exp come input per il collegamento quando si compila DLL1. dlll.

Nella figura seguente viene illustrata una soluzione per due dll che si importano reciprocamente, DLL1 e DLL2. Il passaggio 1 consiste nell'eseguire LIB con l'opzione/DEF impostata su DLL1. Il passaggio 1 produce DLL1. lib, una libreria di importazione e DLL1. exp. Nel passaggio 2 la libreria di importazione viene usata per compilare DLL2, che a sua volta produce una libreria di importazione per i simboli Dll2. Il passaggio 3 compila DLL1 usando DLL1. exp e DLL2. lib come input. Si noti che non è necessario un file exp per DLL2 perché LIB non è stato usato per compilare la libreria di importazione Dll2.

![Uso delle importazioni reciproche per collegare due dll](media/vc37yj1.gif "tramite importazioni reciproche")<br/>
Collegamento di due DLL con importazioni reciproche

## <a name="limitations-of-_afxext"></a>Limitazioni di _AFXEXT

È possibile utilizzare il `_AFXEXT` simbolo del preprocessore per le DLL di estensione MFC, purché non siano presenti più livelli di dll di estensione MFC. Se si dispone di dll di estensione MFC che chiamano o derivano dalle classi nelle DLL dell'estensione MFC, che derivano quindi dalle classi MFC, è necessario usare il simbolo del preprocessore per evitare ambiguità.

Il problema è che in Win32 è necessario dichiarare in modo esplicito i dati come **__declspec (dllexport)** se devono essere esportati da una dll e **__declspec (dllimport)** se devono essere importati da una dll. Quando si definisce `_AFXEXT`, le intestazioni MFC assicurano che **AFX_EXT_CLASS** sia definito correttamente.

Quando si dispone di più livelli, un simbolo come **AFX_EXT_CLASS** non è sufficiente, perché una DLL di estensione MFC potrebbe esportare nuove classi, oltre ad importare altre classi da un'altra DLL di estensione MFC. Per risolvere questo problema, utilizzare un simbolo del preprocessore speciale che indichi che si sta compilando la DLL rispetto all'utilizzo della DLL. Si immagini, ad esempio, due dll di estensione MFC, un file dll e B. dll. Ognuno di essi Esporta alcune classi rispettivamente in A. h e B. h. B. dll utilizza le classi di un file con estensione dll. I file di intestazione avranno un aspetto simile al seguente:

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

Quando si compila un file con estensione dll, questo viene `/D A_IMPL` compilato con e quando B. dll viene compilato, viene compilato `/D B_IMPL`con. Utilizzando simboli distinti per ogni DLL, `CExampleB` viene esportato `CExampleA` e viene importato durante la compilazione di B. dll. `CExampleA`viene esportato quando si compila un file con estensione dll e viene importato quando viene utilizzato da B. dll (o un altro client).

Non è possibile eseguire questo tipo di sovrapposizione quando si usano i simboli predefiniti **AFX_EXT_CLASS** e `_AFXEXT` del preprocessore. La tecnica descritta sopra risolve questo problema in modo diverso dal meccanismo che MFC utilizza per la compilazione delle relative tecnologie attive, database e dll di estensione MFC di rete.

## <a name="not-exporting-the-entire-class"></a>Non viene esportata l'intera classe

Quando non si esporta un'intera classe, è necessario assicurarsi che gli elementi di dati necessari creati dalle macro MFC vengano esportati correttamente. Questa operazione può essere eseguita ridefinendo `AFX_DATA` sulla macro della classe specifica. Questa operazione deve essere eseguita ogni volta che non viene esportata l'intera classe.

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

### <a name="what-do-you-want-to-do"></a>Per saperne di più

- [Esportazione da una DLL](exporting-from-a-dll.md)

- [Esportazione da una DLL mediante. File DEF](exporting-from-a-dll-using-def-files.md)

- [Esportare da una DLL utilizzando __declspec (dllexport)](exporting-from-a-dll-using-declspec-dllexport.md)

- [Esportare e importare utilizzando AFX_EXT_CLASS](exporting-and-importing-using-afx-ext-class.md)

- [Esportare le funzioni C++ per l'utilizzo in eseguibili in linguaggio C](exporting-cpp-functions-for-use-in-c-language-executables.md)

- [Determinare il metodo di esportazione da utilizzare](determining-which-exporting-method-to-use.md)

- [Importare in un'applicazione tramite __declspec(dllimport)](importing-into-an-application-using-declspec-dllimport.md)

### <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [L'utilità LIB e l'opzione/DEF](reference/lib-reference.md)

## <a name="see-also"></a>Vedere anche

[Importazione ed esportazione](importing-and-exporting.md)
