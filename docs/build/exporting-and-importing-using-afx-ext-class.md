---
description: 'Altre informazioni su: esportazione e importazione usando AFX_EXT_CLASS'
title: Esportazione e importazione tramite AFX_EXT_CLASS
ms.date: 11/04/2016
f1_keywords:
- afx_ext_class
helpviewer_keywords:
- AFX_EXT_CLASS macro
- exporting classes [C++]
- importing DLLs [C++]
- extension DLLs [C++], exporting classes
- executable files [C++], importing classes
- exporting DLLs [C++], AFX_EXT_CLASS macro
ms.assetid: 6b72cb2b-e92e-4ecd-bcab-c335e1d1cfde
ms.openlocfilehash: 9c82874b1e5e8791f2825cf6874399fab0e10eaa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97156684"
---
# <a name="exporting-and-importing-using-afx_ext_class"></a>Esportazione e importazione tramite AFX_EXT_CLASS

Le [dll dell'estensione MFC](extension-dlls-overview.md) utilizzano la macro **AFX_EXT_CLASS** per esportare le classi; gli eseguibili che si collegano alla DLL di estensione MFC utilizzano la macro per importare le classi. Con la macro **AFX_EXT_CLASS** , gli stessi file di intestazione utilizzati per compilare la dll di estensione MFC possono essere utilizzati con gli eseguibili che si collegano alla dll.

Nel file di intestazione della DLL aggiungere la parola chiave **AFX_EXT_CLASS** alla dichiarazione della classe come indicato di seguito:

```cpp
class AFX_EXT_CLASS CMyClass : public CDocument
{
// <body of class>
};
```

Questa macro viene definita da MFC come `__declspec(dllexport)` quando vengono definiti i simboli del preprocessore `_AFXDLL` e `_AFXEXT` . Tuttavia, la macro viene definita come `__declspec(dllimport)` quando `_AFXDLL` è definito e `_AFXEXT` non è definito. Quando viene definito, il simbolo del preprocessore `_AFXDLL` indica che la versione condivisa di MFC viene utilizzata dall'eseguibile di destinazione, ovvero una dll o un'applicazione. Quando `_AFXDLL` `_AFXEXT` vengono definiti sia che, questo indica che l'eseguibile di destinazione è una DLL di estensione MFC.

Poiché `AFX_EXT_CLASS` è definito come `__declspec(dllexport)` durante l'esportazione da una DLL di estensione MFC, è possibile esportare intere classi senza inserire i nomi decorati per tutti i simboli della classe nel file def.

Sebbene sia possibile evitare di creare un file def e tutti i nomi decorati per la classe con questo metodo, la creazione di un file con estensione def è più efficiente perché i nomi possono essere esportati in base all'ordinale. Per usare il metodo di esportazione del file. def, inserire il codice seguente all'inizio e alla fine del file di intestazione:

```cpp
#undef AFX_DATA
#define AFX_DATA AFX_EXT_DATA
// <body of your header file>
#undef AFX_DATA
#define AFX_DATA
```

> [!CAUTION]
> Prestare attenzione quando si esportano funzioni inline, perché possono creare la possibilità di conflitti di versione. Una funzione inline viene espansa nel codice dell'applicazione. di conseguenza, se successivamente si riscrive la funzione, questa non viene aggiornata a meno che l'applicazione stessa non venga ricompilata. In genere, le funzioni DLL possono essere aggiornate senza ricompilare le applicazioni che le utilizzano.

## <a name="exporting-individual-members-in-a-class"></a>Esportazione di singoli membri in una classe

In alcuni casi potrebbe essere necessario esportare singoli membri della classe. Se ad esempio si esporta una `CDialog` classe derivata da, potrebbe essere necessario esportare solo il costruttore e la `DoModal` chiamata. È possibile usare `AFX_EXT_CLASS` nei singoli membri che è necessario esportare.

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

Poiché non vengono più esportati tutti i membri della classe, è possibile che si verifichi un ulteriore problema a causa del modo in cui funzionano le macro MFC. Diverse macro helper di MFC dichiarano effettivamente o definiscono i membri dati. Pertanto, è necessario esportare anche questi membri dati dalla DLL.

Ad esempio, la `DECLARE_DYNAMIC` macro viene definita come indicato di seguito durante la compilazione di una DLL di estensione MFC:

```cpp
#define DECLARE_DYNAMIC(class_name) \
protected: \
   static CRuntimeClass* PASCAL _GetBaseClass(); \
public: \
   static AFX_DATA CRuntimeClass class##class_name; \
   virtual CRuntimeClass* GetRuntimeClass() const; \
```

La riga che inizia con static `AFX_DATA` sta dichiarando un oggetto statico all'interno della classe. Per esportare correttamente questa classe e accedere alle informazioni in fase di esecuzione da un eseguibile client, è necessario esportare questo oggetto statico. Poiché l'oggetto statico viene dichiarato con il modificatore `AFX_DATA` , è necessario definire solo `AFX_DATA` quando si `__declspec(dllexport)` Compila la dll e la si definisce come `__declspec(dllimport)` quando si compila il file eseguibile del client. Poiché `AFX_EXT_CLASS` è già definito in questo modo, è sufficiente ridefinire in modo che `AFX_DATA` corrisponda alla `AFX_EXT_CLASS` definizione della classe.

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

Poiché MFC utilizza sempre il `AFX_DATA` simbolo per gli elementi di dati definiti all'interno delle macro, questa tecnica funziona per tutti gli scenari di questo tipo. Ad esempio, funziona per `DECLARE_MESSAGE_MAP` .

> [!NOTE]
> Se si esporta l'intera classe anziché i membri selezionati della classe, i membri dati statici vengono esportati automaticamente.

### <a name="what-do-you-want-to-do"></a>Per saperne di più

- [Esportazione da una DLL tramite i file def](exporting-from-a-dll-using-def-files.md)

- [Esportare da una DLL utilizzando __declspec (dllexport)](exporting-from-a-dll-using-declspec-dllexport.md)

- [Esportare le funzioni C++ per l'utilizzo in eseguibili in linguaggio C](exporting-cpp-functions-for-use-in-c-language-executables.md)

- [Esportare le funzioni C per l'utilizzo in eseguibili in linguaggio C o C++](exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)

- [Determinare il metodo di esportazione da usare](determining-which-exporting-method-to-use.md)

- [Importare in un'applicazione tramite __declspec(dllimport)](importing-into-an-application-using-declspec-dllimport.md)

- [Inizializzare una DLL](run-time-library-behavior.md#initializing-a-dll)

### <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Nomi decorati](reference/decorated-names.md)

- [Importazione ed esportazione di funzioni inline](importing-and-exporting-inline-functions.md)

- [Importazioni reciproche](mutual-imports.md)

## <a name="see-also"></a>Vedi anche

[Esportazione da una DLL](exporting-from-a-dll.md)
