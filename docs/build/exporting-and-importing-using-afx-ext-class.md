---
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
ms.openlocfilehash: 95c72f8251a8a59833483eb948709c80a69d03d7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328604"
---
# <a name="exporting-and-importing-using-afx_ext_class"></a>Esportazione e importazione tramite AFX_EXT_CLASS

Le DLL di [estensione MFC utilizzano](extension-dlls-overview.md) la **AFX_EXT_CLASS** macro per esportare le classi; gli eseguibili che si collegano alla DLL di estensione MFC utilizzano la macro per importare le classi. Con la macro **AFX_EXT_CLASS,** gli stessi file di intestazione utilizzati per compilare la DLL di estensione MFC possono essere utilizzati con gli eseguibili collegati alla DLL.

Nel file di intestazione della DLL aggiungere la parola chiave **AFX_EXT_CLASS** alla dichiarazione della classe come segue:

```cpp
class AFX_EXT_CLASS CMyClass : public CDocument
{
// <body of class>
};
```

Questa macro viene definita `__declspec(dllexport)` da MFC `_AFXDLL` come `_AFXEXT` quando vengono definiti i simboli del preprocessore. Ma la macro `__declspec(dllimport)` è `_AFXDLL` definita `_AFXEXT` come quando è definita e non è definita. Quando definito, il `_AFXDLL` simbolo del preprocessore indica che la versione condivisa di MFC viene utilizzata dall'eseguibile di destinazione (una DLL o un'applicazione). Quando `_AFXDLL` entrambi `_AFXEXT` e sono definiti, ciò indica che l'eseguibile di destinazione è una DLL di estensione MFC.

Poiché `AFX_EXT_CLASS` è `__declspec(dllexport)` definito come quando si esporta da una DLL di estensione MFC, è possibile esportare intere classi senza inserire i nomi decorati per tutti i simboli di tale classe nel file def.

Sebbene sia possibile evitare di creare un file def e tutti i nomi decorati per la classe con questo metodo, la creazione di un file def è più efficiente perché i nomi possono essere esportati per ordinale. Per utilizzare il metodo di esportazione del file def, inserire il codice seguente all'inizio e alla fine del file di intestazione:

```cpp
#undef AFX_DATA
#define AFX_DATA AFX_EXT_DATA
// <body of your header file>
#undef AFX_DATA
#define AFX_DATA
```

> [!CAUTION]
> Prestare attenzione quando si esportano funzioni inline, perché possono creare la possibilità di conflitti di versione. Una funzione inline viene espansa nel codice dell'applicazione; Pertanto, se in seguito si riscrive la funzione, non viene aggiornata a meno che l'applicazione stessa non venga ricompilata. In genere, le funzioni DLL possono essere aggiornate senza ricompilare le applicazioni che le utilizzano.

## <a name="exporting-individual-members-in-a-class"></a>Esportazione di singoli membri in una classeExporting Individual Members in a Class

A volte potresti voler esportare singoli membri della tua classe. Ad esempio, se si `CDialog`esporta una classe derivata, potrebbe essere `DoModal` necessario esportare solo il costruttore e la chiamata . È possibile `AFX_EXT_CLASS` utilizzare sui singoli membri che è necessario esportare.

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

Poiché non si esportano più tutti i membri della classe, è possibile che si verifichi un problema aggiuntivo a causa del funzionamento delle macro MFC. Molte delle macro helper di MFC dichiarano o definiscono effettivamente i membri dati. Pertanto, questi membri dati devono essere esportati anche dalla DLL.

Ad esempio, `DECLARE_DYNAMIC` la macro viene definita come segue quando si compila una DLL di estensione MFC:

```cpp
#define DECLARE_DYNAMIC(class_name) \
protected: \
   static CRuntimeClass* PASCAL _GetBaseClass(); \
public: \
   static AFX_DATA CRuntimeClass class##class_name; \
   virtual CRuntimeClass* GetRuntimeClass() const; \
```

La riga che `AFX_DATA` inizia con static è la dichiarazione di un oggetto statico all'interno della classe. Per esportare correttamente questa classe e accedere alle informazioni di runtime da un eseguibile client, è necessario esportare questo oggetto statico. Poiché l'oggetto statico `AFX_DATA`viene dichiarato con `AFX_DATA` il `__declspec(dllexport)` modificatore , è sufficiente `__declspec(dllimport)` definire come durante la compilazione della DLL e definirla come quando si compila l'eseguibile client. Poiché `AFX_EXT_CLASS` è già definito in questo modo, è sufficiente ridefinire `AFX_DATA` in modo che sia uguale `AFX_EXT_CLASS` alla definizione della classe.

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

Poiché MFC `AFX_DATA` utilizza sempre il simbolo sugli elementi di dati che definisce all'interno delle macro, questa tecnica funziona per tutti questi scenari. Ad esempio, funziona `DECLARE_MESSAGE_MAP`per .

> [!NOTE]
> Se si esporta l'intera classe anziché i membri selezionati della classe, i membri dati statici vengono esportati automaticamente.

### <a name="what-do-you-want-to-do"></a>Per saperne di più

- [Esportazione da una DLL utilizzando file def](exporting-from-a-dll-using-def-files.md)

- [Esportazione da una DLL utilizzando __declspec(dllexport)](exporting-from-a-dll-using-declspec-dllexport.md)

- [Esportare le funzioni di C, per l'utilizzo in file eseguibili in linguaggio C](exporting-cpp-functions-for-use-in-c-language-executables.md)

- [Esportare le funzioni C per l'utilizzo in file eseguibili in linguaggio C o C](exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)

- [Determinare il metodo di esportazione da utilizzare](determining-which-exporting-method-to-use.md)

- [Importare in un'applicazione tramite __declspec(dllimport)](importing-into-an-application-using-declspec-dllimport.md)

- [Inizializzare una DLL](run-time-library-behavior.md#initializing-a-dll)

### <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Nomi decorati](reference/decorated-names.md)

- [Importazione ed esportazione di funzioni inline](importing-and-exporting-inline-functions.md)

- [Importazioni reciproche](mutual-imports.md)

## <a name="see-also"></a>Vedere anche

[Esportazione da una DLL](exporting-from-a-dll.md)
