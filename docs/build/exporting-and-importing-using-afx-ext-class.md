---
title: Esportazione e importazione tramite AFX_EXT_CLASS | Documenti Microsoft
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
ms.openlocfilehash: f6cc853c66afae72d6e426d800c0443ab206ab20
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="exporting-and-importing-using-afxextclass"></a>Esportazione e importazione tramite AFX_EXT_CLASS  
  
[DLL di estensione MFC](../build/extension-dlls-overview.md) usare la macro **AFX_EXT_CLASS** per esportare classi; i file eseguibili che si collegano alla DLL di estensione MFC utilizzano la macro per importare le classi. Con il **AFX_EXT_CLASS** (macro), gli stessi file di intestazione utilizzati per compilare la DLL può essere utilizzato con i file eseguibili che si collegano alla DLL di estensione MFC.  
  
 Nel file di intestazione per la DLL, aggiungere il **AFX_EXT_CLASS** parola chiave per la dichiarazione della classe come indicato di seguito:  
  
```cpp  
class AFX_EXT_CLASS CMyClass : public CDocument  
{  
// <body of class>  
};  
```  
  
Questa macro viene definita da MFC come `__declspec(dllexport)` quando i simboli del preprocessore `_AFXDLL` e `_AFXEXT` sono definiti. La macro viene definita come `__declspec(dllimport)` quando `_AFXDLL` è definito e `_AFXEXT` non è definito. Quando viene definito, il simbolo del preprocessore `_AFXDLL` indica la versione di MFC condivisa viene utilizzata l'eseguibile di destinazione (una DLL o un'applicazione). Quando entrambi `_AFXDLL` e `_AFXEXT` sono definite, ciò indica che l'eseguibile di destinazione è una DLL di estensione MFC.  
  
Poiché `AFX_EXT_CLASS` è definito come `__declspec(dllexport)` durante l'esportazione da una DLL di estensione MFC, è possibile esportare un'intera classe senza inserire i nomi decorati per tutti i simboli di tale classe nel file def.  
  
Anche se è possibile evitare la creazione di un file. def e tutti i nomi per la classe decorati con questo metodo, la creazione di un file. def è più efficiente poiché i nomi possono essere esportati per ordinale. Per utilizzare il metodo di file. def di esportazione, inserire il codice seguente all'inizio e alla fine del file di intestazione:  
  
```cpp  
#undef AFX_DATA  
#define AFX_DATA AFX_EXT_DATA  
// <body of your header file>  
#undef AFX_DATA  
#define AFX_DATA  
```  
  
> [!CAUTION]
>  Prestare attenzione durante l'esportazione di funzioni inline, poiché possono creare la possibilità di conflitti di versione. Una funzione inline viene espanso in codice dell'applicazione; Pertanto, se è in un secondo momento riscrivere la funzione, non viene aggiornato a meno che non viene ricompilato l'applicazione stessa. In genere, funzioni DLL possono essere aggiornate senza ricompilare le applicazioni che li utilizzano.  
  
## <a name="exporting-individual-members-in-a-class"></a>Esportazione di singoli membri in una classe  
  
In alcuni casi è consigliabile esportare i singoli membri della classe. Ad esempio, se si sta esportando un `CDialog`-classe derivata solo potrebbe essere necessario esportare il costruttore e `DoModal` chiamare. È possibile utilizzare `AFX_EXT_CLASS` sui singoli membri, è necessario esportare.  
  
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
  
Perché non si siano esportando tutti i membri della classe, è possibile eseguire un problema a causa della modalità di lavoro di macro MFC. Molte delle macro di supporto di MFC effettivamente dichiarare o definire membri dati. Di conseguenza, questi membri dati devono anche essere esportati dalla DLL di.  
  
Ad esempio, il `DECLARE_DYNAMIC` macro viene definita come indicato di seguito quando si compila una DLL di estensione MFC:  
  
```cpp  
#define DECLARE_DYNAMIC(class_name) \  
protected: \  
   static CRuntimeClass* PASCAL _GetBaseClass(); \  
public: \  
   static AFX_DATA CRuntimeClass class##class_name; \  
   virtual CRuntimeClass* GetRuntimeClass() const; \  
```  
  
La riga che inizia con static `AFX_DATA` dichiara un oggetto all'interno della classe statico. Per esportare correttamente questa classe e accedere alle informazioni in fase di esecuzione da un file eseguibile del client, è necessario esportare questo oggetto statico. Poiché l'oggetto statico viene dichiarato con il modificatore `AFX_DATA`, è necessario definire `AFX_DATA` da `__declspec(dllexport)` durante la compilazione della DLL e definirlo come `__declspec(dllimport)` quando si compila il file eseguibile del client. Poiché `AFX_EXT_CLASS` è già definito in questo modo, è sufficiente ridefinire `AFX_DATA` per essere lo stesso `AFX_EXT_CLASS` intorno alla definizione della classe.  
  
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
  
Poiché MFC utilizza sempre il `AFX_DATA` simbolo sugli elementi di dati che definisce all'interno delle macro, questa tecnica è valida per tutti gli scenari di questo tipo. Ad esempio, funziona per `DECLARE_MESSAGE_MAP`.  
  
> [!NOTE]
>  Se si sta esportando l'intera classe anziché selezionato i membri della classe, i membri dati statici vengono automaticamente esportati.  
  
### <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.  
  
-   [Esportazione da una DLL tramite DEF (file)](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Esportazione da una DLL tramite dllexport](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
-   [Esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio C](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)  
  
-   [Esportazione di funzioni C per l'utilizzo in eseguibili in linguaggio C o C++](../build/exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)  
  
-   [Determinare quale metodo di esportazione da utilizzare](../build/determining-which-exporting-method-to-use.md)  
  
-   [Importare un'applicazione che utilizza declspec](../build/importing-into-an-application-using-declspec-dllimport.md)  
  
-   [Inizializzazione di una DLL](../build/run-time-library-behavior.md#initializing-a-dll)  
  
### <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Nomi decorati](../build/reference/decorated-names.md)  
  
-   [Importazione ed esportazione di funzioni inline](../build/importing-and-exporting-inline-functions.md)  
  
-   [Importazioni reciproche](../build/mutual-imports.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Esportazione da una DLL](../build/exporting-from-a-dll.md)