---
title: Esportazione e importazione tramite AFX_EXT_CLASS | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
f1_keywords:
- afx_ext_class
dev_langs:
- C++
helpviewer_keywords:
- AFX_EXT_CLASS macro
- exporting classes [C++]
- importing DLLs [C++]
- extension DLLs [C++], exporting classes
- executable files [C++], importing classes
- exporting DLLs [C++], AFX_EXT_CLASS macro
ms.assetid: 6b72cb2b-e92e-4ecd-bcab-c335e1d1cfde
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 46964b4babc7d7afd4b523ee37981296e9f7dc57
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45711941"
---
# <a name="exporting-and-importing-using-afxextclass"></a>Esportazione e importazione tramite AFX_EXT_CLASS

[DLL di estensione MFC](../build/extension-dlls-overview.md) usare la macro **AFX_EXT_CLASS** per esportare classi; i file eseguibili che si collegano alla DLL di estensione MFC utilizzano la macro per importare le classi. Con il **AFX_EXT_CLASS** (macro), gli stessi file di intestazione utilizzati per compilare la DLL può essere utilizzata con i file eseguibili che si collegano alla DLL di estensione MFC.

Nel file di intestazione per la DLL, aggiungere il **AFX_EXT_CLASS** una parola chiave per la dichiarazione della classe come indicato di seguito:

```cpp
class AFX_EXT_CLASS CMyClass : public CDocument
{
// <body of class>
};
```

Questa macro viene definita da MFC come `__declspec(dllexport)` quando i simboli del preprocessore `_AFXDLL` e `_AFXEXT` sono definiti. La macro viene definita come `__declspec(dllimport)` quando si `_AFXDLL` viene definito e `_AFXEXT` non è definito. Quando viene definito, il simbolo del preprocessore `_AFXDLL` indica che viene viene utilizzata la versione condivisa di MFC per l'eseguibile di destinazione (una DLL o un'applicazione). Quando entrambe `_AFXDLL` e `_AFXEXT` sono definiti, ciò indica che l'eseguibile di destinazione è una DLL di estensione MFC.

In quanto `AFX_EXT_CLASS` viene definito come `__declspec(dllexport)` durante l'esportazione da una DLL di estensione MFC, è possibile esportare intere classi senza inserire i nomi decorati per tutti i simboli di tale classe nel file def.

Anche se è possibile evitare la creazione di un file. def e tutti i nomi per la classe decorati con questo metodo, la creazione di un file con estensione def è più efficiente perché i nomi possono essere esportati per ordinale. Per usare il metodo file def di esportazione, inserire il codice seguente all'inizio e alla fine del file di intestazione:

```cpp
#undef AFX_DATA
#define AFX_DATA AFX_EXT_DATA
// <body of your header file>
#undef AFX_DATA
#define AFX_DATA
```

> [!CAUTION]
>  Prestare attenzione durante l'esportazione di funzioni inline, poiché possono creare la possibilità di conflitti di versione. Una funzione inline viene espanso in codice dell'applicazione; Pertanto, se in un secondo momento si riscrive la funzione, non viene aggiornato a meno che non viene ricompilato l'applicazione stessa. In genere, le funzioni di DLL possono essere aggiornate senza ricompilare le applicazioni che li utilizzano.

## <a name="exporting-individual-members-in-a-class"></a>Esportazione di singoli membri in una classe

In alcuni casi è consigliabile esportare i singoli membri della classe. Ad esempio, se si sta esportando un `CDialog`-derivato (classe), si potrebbe essere necessario solo esportare il costruttore e il `DoModal` chiamare. È possibile usare `AFX_EXT_CLASS` sui singoli membri è necessario esportare.

Ad esempio:

```cpp
class CExampleDialog : public CDialog
{
public:
   AFX_EXT_CLASS CExampleDialog();
   AFX_EXT_CLASS int DoModal();
   ...
   // rest of class definition
   ...
};
```

Poiché non è più, si siano esportando tutti i membri della classe, è possibile riscontrare un problema aggiuntivo a causa della modalità che funzionano di macro MFC. Molte delle macro di supporto di MFC effettivamente dichiarare o definire membri dati. Di conseguenza, questi membri dati inoltre devono essere esportati dalla DLL.

Ad esempio, il `DECLARE_DYNAMIC` macro viene definita come segue quando si compila una DLL di estensione MFC:

```cpp
#define DECLARE_DYNAMIC(class_name) \
protected: \
   static CRuntimeClass* PASCAL _GetBaseClass(); \
public: \
   static AFX_DATA CRuntimeClass class##class_name; \
   virtual CRuntimeClass* GetRuntimeClass() const; \
```

La riga che inizia con statica `AFX_DATA` dichiara un oggetto statico all'interno della classe. Per esportare correttamente questa classe e accedere alle informazioni in fase di esecuzione da un file eseguibile del client, è necessario esportare questo oggetto statico. Poiché l'oggetto statico è dichiarato con il modificatore `AFX_DATA`, è necessario solo definire `AFX_DATA` essere `__declspec(dllexport)` quando si compila la DLL e definirlo come `__declspec(dllimport)` quando si compila il file eseguibile del client. Poiché `AFX_EXT_CLASS` già definito in questo modo, è sufficiente ridefinire `AFX_DATA` essere identico `AFX_EXT_CLASS` intorno alla definizione della classe.

Ad esempio:

```cpp
#undef  AFX_DATA
#define AFX_DATA AFX_EXT_CLASS

class CExampleView : public CView
{
   DECLARE_DYNAMIC()
   // ... class definition ...
};

#undef  AFX_DATA
#define AFX_DATA
```

Poiché MFC Usa sempre il `AFX_DATA` simbolo per elementi di dati viene definita all'interno delle macro, questa tecnica è valida per tutti questi scenari. Ad esempio, funziona per `DECLARE_MESSAGE_MAP`.

> [!NOTE]
>  Se si sta esportando l'intera classe piuttosto che i membri selezionati della classe, vengono esportati automaticamente i membri dati statici.

### <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.

- [Esportazione da una DLL tramite i file def](../build/exporting-from-a-dll-using-def-files.md)

- [Esportazione da una DLL tramite dllexport](../build/exporting-from-a-dll-using-declspec-dllexport.md)

- [Esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio C](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)

- [Esportazione di funzioni C per l'utilizzo in eseguibili in linguaggio C o C++](../build/exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)

- [Determinare quale metodo di esportazione da utilizzare](../build/determining-which-exporting-method-to-use.md)

- [Importare in un'applicazione che usa declspec](../build/importing-into-an-application-using-declspec-dllimport.md)

- [Inizializzare una DLL](../build/run-time-library-behavior.md#initializing-a-dll)

### <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Nomi decorati](../build/reference/decorated-names.md)

- [Importazione ed esportazione di funzioni inline](../build/importing-and-exporting-inline-functions.md)

- [Importazioni reciproche](../build/mutual-imports.md)

## <a name="see-also"></a>Vedere anche

[Esportazione da una DLL](../build/exporting-from-a-dll.md)