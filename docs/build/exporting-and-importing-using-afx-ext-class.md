---
title: "Esportazione e importazione tramite AFX_EXT_CLASS | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "afx_ext_class"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AFX_EXT_CLASS (macro)"
  - "file eseguibili [C++], importazione di classi"
  - "esportazione di classi [C++]"
  - "esportazione di DLL [C++], AFX_EXT_CLASS (macro)"
  - "DLL di estensione [C++], esportazione di classi"
  - "importazione di DLL [C++]"
ms.assetid: 6b72cb2b-e92e-4ecd-bcab-c335e1d1cfde
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Esportazione e importazione tramite AFX_EXT_CLASS
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le [DLL di estensione](../build/extension-dlls-overview.md) utilizzano la macro **AFX\_EXT\_CLASS** per esportare le classi, mentre gli eseguibili che si collegano alla DLL di estensione utilizzano la macro per importare le classi.  Con la macro **AFX\_EXT\_CLASS**, gli stessi file di intestazione utilizzati per compilare la DLL di estensione possono essere utilizzati con gli eseguibili che si collegano alla DLL.  
  
 Nel file di intestazione per la DLL, aggiungere la parola chiave **AFX\_EXT\_CLASS** alla dichiarazione della classe, nel modo seguente:  
  
```  
class AFX_EXT_CLASS CMyClass : public CDocument  
{  
// <body of class>  
};  
```  
  
 Questa macro viene definita da MFC come **\_\_declspec\(dllexport\)** quando vengono definiti i simboli del preprocessore **\_AFXDLL** e `_AFXEXT`.  La macro viene invece definita come **\_\_declspec\(dllimport\)** quando **\_AFXDLL** è definito e `_AFXEXT` non lo è.  Quando è definito, il simbolo del preprocessore **\_AFXDLL** indica che la versione condivisa di MFC viene utilizzata dall'eseguibile di destinazione, ovvero una DLL o un'applicazione.  Quando sia **\_AFXDLL** che `_AFXEXT` sono definiti, significa che l'eseguibile di destinazione è una DLL di estensione.  
  
 Poiché **AFX\_EXT\_CLASS** è definita come **\_\_declspec\(dllexport\)** durante l'esportazione da una DLL di estensione, è possibile esportare un'intera classe senza inserire nel file def i nomi decorati di tutti i simboli di tale classe.  Questo metodo è utilizzato nell'esempio [DLLHUSK](http://msdn.microsoft.com/it-it/dfcaa6ff-b8e2-4efd-8100-ee3650071f90) MFC.  
  
 Anche se questo metodo consente di evitare la creazione di un file def con tutti i nomi decorati della classe, la creazione di un file def è più efficace poiché i nomi possono essere esportati in base al valore ordinale.  Per utilizzare il metodo di esportazione tramite file def, inserire il seguente codice all'inizio e alla fine del file di intestazione:  
  
```  
#undef AFX_DATA  
#define AFX_DATA AFX_EXT_DATA  
// <body of your header file>  
#undef AFX_DATA  
#define AFX_DATA  
```  
  
> [!CAUTION]
>  Fare attenzione durante l'esportazione delle funzioni inline, poiché potrebbero creare conflitti di versione.  Dato che una funzione inline viene espansa nel codice dell'applicazione, se viene successivamente riscritta non viene aggiornata nell'applicazione, a meno che non si ricompili l'applicazione stessa.  In genere, le funzioni DLL possono essere aggiornate senza ricompilare le applicazioni che le utilizzano.  
  
## Esportazione di singoli membri in una classe  
 Talvolta può risultare utile esportare singoli membri della classe.  Se si esporta, ad esempio, una classe derivata da `CDialog`, può essere sufficiente esportare il costruttore e la chiamata `DoModal`.  È possibile utilizzare **AFX\_EXT\_CLASS** sui singoli membri da esportare.  
  
 Di seguito è riportato un esempio.  
  
```  
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
  
 Poiché non si esportano tutti i membri della classe, può verificarsi un problema legato al funzionamento delle macro MFC.  Molte macro di supporto MFC dichiarano o definiscono in realtà membri dati.  È pertanto necessario esportare anche questi membri dati dalla DLL.  
  
 La macro `DECLARE_DYNAMIC`, ad esempio, viene definita nel modo seguente quando si compila una DLL di estensione:  
  
```  
#define DECLARE_DYNAMIC(class_name) \  
protected: \  
   static CRuntimeClass* PASCAL _GetBaseClass(); \  
public: \  
   static AFX_DATA CRuntimeClass class##class_name; \  
   virtual CRuntimeClass* GetRuntimeClass() const; \  
```  
  
 La riga che inizia con static `AFX_DATA` dichiara un oggetto static all'interno della classe.  Per esportare correttamente questa classe e accedere alle informazioni della libreria di runtime da un eseguibile client, è necessario esportare questo oggetto static.  Poiché l'oggetto static viene dichiarato con il modificatore `AFX_DATA`, è sufficiente definire `AFX_DATA` come **\_\_declspec\(dllexport\)** quando si compila la DLL e come **\_\_declspec\(dllimport\)** quando si compila l'eseguibile client.  Poiché **AFX\_EXT\_CLASS** è già definita in tal modo, è sufficiente ridefinire `AFX_DATA` come **AFX\_EXT\_CLASS** intorno alla definizione della classe.  
  
 Di seguito è riportato un esempio.  
  
```  
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
  
 Poiché MFC utilizza sempre il simbolo `AFX_DATA` sugli elementi di dati che definisce all'interno delle macro, questa tecnica è valida per tutti gli scenari di questo tipo,  ad esempio `DECLARE_MESSAGE_MAP`.  
  
> [!NOTE]
>  Se si esporta l'intera classe anziché alcuni membri di essa, i membri dati statici vengono esportati automaticamente.  
  
### Scegliere l'argomento con cui si desidera procedere  
  
-   [Esportazione da una DLL utilizzando i file def](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Esportazione da una DLL utilizzando \_\_declspec\(dllexport\)](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
-   [Esportazione di funzioni C\+\+ per l'utilizzo in eseguibili in linguaggio C](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)  
  
-   [Esportazione di funzioni C per l'utilizzo in eseguibili in linguaggio C o C\+\+](../build/exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)  
  
-   [Scelta del metodo di esportazione da utilizzare](../build/determining-which-exporting-method-to-use.md)  
  
-   [Importazione in un'applicazione utilizzando \_\_declspec\(dllimport\)](../build/importing-into-an-application-using-declspec-dllimport.md)  
  
-   [Inizializzare una DLL](../build/initializing-a-dll.md)  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Nomi decorati](../build/reference/decorated-names.md)  
  
-   [Importazione ed esportazione di funzioni inline](../build/importing-and-exporting-inline-functions.md)  
  
-   [Importazioni reciproche](../build/mutual-imports.md)  
  
## Vedere anche  
 [Esportazione da una DLL](../build/exporting-from-a-dll.md)