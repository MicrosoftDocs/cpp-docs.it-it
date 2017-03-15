---
title: "Impostazioni applicazione, Creazione guidata progetto Win32 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.win32.appset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "impostazioni applicazione [C++]"
  - "Creazione guidata progetto Win32, impostazioni applicazione"
ms.assetid: d6b818f0-9b23-4793-a6c5-df1c8c594bad
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Impostazioni applicazione, Creazione guidata progetto Win32
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questa schermata della procedura guidata può essere utilizzata per impostare le opzioni per il progetto Win32.  
  
 **Tipo di applicazione**  
 Crea il tipo di applicazione specificato.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**Applicazione console**|Crea un'applicazione console.  I programmi console vengono sviluppati mediante [funzioni console](https://msdn.microsoft.com/en-us/library/ms813137.aspx) che forniscono il supporto della modalità carattere nelle finestre di console.  Le [librerie di runtime](../c-runtime-library/c-run-time-library-reference.md) del linguaggio Visual C\+\+ forniscono inoltre l'output e l'input dalle finestre di console con funzioni di I\/O standard, quali **printf\_s\(\)** e **scanf\_s\(\)**.  Un'applicazione console non è dotata di interfaccia utente grafica.  Viene compilata in un file EXE e può essere eseguita come applicazione autonoma dalla riga di comando.<br /><br /> Alle applicazioni console può essere aggiunto il supporto per MFC e ATL.|  
|**Applicazione Windows**|Crea un programma Win32,  ovvero un'applicazione eseguibile \(EXE\) scritta nel linguaggio C o C\+\+ che utilizza chiamate all'API Win32 per creare un'interfaccia utente grafica.<br /><br /> A un'applicazione Windows non può essere aggiunto il supporto per MFC e ATL.|  
|**DLL**|Crea una libreria a collegamento dinamico \(DLL\) Win32,  ovvero un file binario, scritto nel linguaggio C o C\+\+, che utilizza chiamate all'API Win32 anziché alle classi MFC e funge da libreria di funzioni condivisa, utilizzabile contemporaneamente da più applicazioni.<br /><br /> A un'applicazione DLL non può essere aggiunto il supporto per MFC e ATL.  La DLL può essere impostata per l'esportazione di simboli.|  
|**Libreria statica**|Crea una libreria statica,  ovvero un file contenente oggetti con i relativi dati e funzioni che si collega al programma quando viene compilato il file eseguibile.  In questo argomento viene illustrata la creazione dei file iniziali e delle [proprietà del progetto](../ide/property-pages-visual-cpp.md) per una libreria statica.  Un file di libreria statica offre i seguenti vantaggi:<br /><br /> -   Una libreria statica Win32 si rivela utile se l'applicazione utilizzata effettua chiamate all'API Win32 anziché alle classi MFC.<br />-   Il processo di collegamento rimane invariato indipendentemente dal fatto che il resto dell'applicazione Windows sia scritto nel linguaggio C o C\+\+.<br />-   È possibile collegare una libreria statica a un programma basato su MFC o a un programma non MFC.|  
  
 **Opzioni aggiuntive**  
 Definisce le funzionalità di supporto e le opzioni dell'applicazione, a seconda del tipo.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**Progetto vuoto**|Specifica che i file di progetto sono vuoti.  Se si dispone di un insieme di file di codice sorgente \(quali file CPP, file di intestazione, icone, barre degli strumenti, finestre di dialogo e così via\) e si desidera creare un progetto nell'ambiente di sviluppo di Visual C\+\+, è necessario creare innanzitutto un progetto vuoto, quindi aggiungere i file a tale progetto.<br /><br /> Questa opzione non è disponibile per i progetti di libreria statica.|  
|**Esporta simboli**|Specifica che il progetto di DLL effettua l'esportazione di simboli.|  
|**Intestazione precompilata**|Specifica che il progetto di libreria statica utilizza un'intestazione precompilata.|  
|Controlli Security Development Lifecycle \(SDL\)|Per ulteriori informazioni su SDL, vedere [Microsoft Security Development Lifecycle \(SDL\)  Process Guidance](84aed186-1d75-4366-8e61-8d258746bopq).|  
  
 **Aggiungi supporto per**  
 Consente di aggiungere il supporto per una delle librerie fornite con Visual C\+\+.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**ATL**|Integra nel progetto il supporto per le classi di libreria ATL \(Active Template Library\).  Disponibile solo per le applicazioni console Win32.<br /><br /> **Nota** Questa opzione non fornisce il supporto per l'aggiunta di oggetti ATL mediante le creazioni guidate codice ATL.  Gli oggetti ATL possono essere aggiunti soltanto ai progetti ATL o ai progetti MFC dotati di supporto per ATL.|  
|**MFC**|Integra nel progetto il supporto per la libreria MFC \(Microsoft Foundation Class\).  Disponibile solo per le librerie statiche e le applicazioni console Win32.|  
  
## Vedere anche  
 [Creazione guidata applicazione Win32](../windows/win32-application-wizard.md)   
 [Procedura: Creare un'applicazione desktop di Windows](../Topic/How%20to:%20Create%20a%20Windows%20Desktop%20Application.md)