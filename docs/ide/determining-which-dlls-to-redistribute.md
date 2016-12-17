---
title: "Determinazione delle DLL da ridistribuire | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "distribuzione di applicazioni [C++], ridistribuzione di DLL"
  - "dipendenze [C++], distribuzione di applicazioni"
  - "distribuzione di applicazioni [C++], ridistribuzione di DLL"
  - "DLL [C++], ridistribuzione"
  - "ridistribuzione di DLL"
ms.assetid: f7a2cb42-fb48-42ab-abd2-b35e2fd5601a
caps.latest.revision: 31
caps.handback.revision: 31
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Determinazione delle DLL da ridistribuire
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si compila un'applicazione che usa le DLL fornite da Visual Studio, gli utenti che vogliono eseguire l'applicazione dovranno disporre delle stesse DLL nei propri computer.  Poiché la maggior parte degli utenti probabilmente non dispone di Visual Studio, è necessario fornire loro queste DLL.  Visual Studio rende le DLL disponibili sotto forma di librerie ridistribuibili che è possibile includere nel programma di installazione dell'applicazione.  
  
 Le DLL ridistribuibili sono incluse nell'installazione di Visual Studio.  Per impostazione predefinita, sono installate nella cartella Programmi \(x86\)\\Versione di Microsoft Visual Studio\\VC\\Redist.  Per rendere più semplice includerle nel programma di installazione, sono disponibili anche sotto forma di pacchetti ridistribuibili autonomi nell'Area download Microsoft.  Si tratta di file eseguibili che consentono di installare i file ridistribuibili nel computer dell'utente.  La versione del pacchetto ridistribuibile deve corrispondere alla versione del set di strumenti di Visual Studio usato per creare l'applicazione.  Per trovare un pacchetto ridistribuibile corrispondente, cercare "pacchetti ridistribuibili Visual C\+\+" nell'[Area download Microsoft](http://go.microsoft.com/fwlink/p/?LinkId=158431).  
  
 Per determinare quali DLL è necessario ridistribuire con l'applicazione, raccogliere un elenco delle DLL da cui dipende l'applicazione.  Un modo per raccogliere l'elenco consiste nell'eseguire lo strumento Dependency Walker \(depends.exe\), come descritto in [Informazioni sulle dipendenze di un'applicazione Visual C\+\+](../ide/understanding-the-dependencies-of-a-visual-cpp-application.md).  
  
 Se si dispone dell'elenco delle dipendenze, confrontarlo con l'elenco in un file Redist.txt nella directory di installazione di Microsoft Visual Studio o con "l'elenco REDIST" di DLL ridistribuibili a cui viene fatto riferimento nella sezione "Codice distribuibile" delle Condizioni di licenza software Microsoft per la copia di Visual Studio in uso.  Per Visual Studio 2013, l'elenco è disponibile online in [Codice distribuibile per Microsoft Visual Studio 2013 e Microsoft Visual Studio 2013 SDK](http://go.microsoft.com/fwlink/p/?LinkId=313603).  Non è possibile ridistribuire tutti i file inclusi in Visual Studio. È consentito ridistribuire solo i file specificati in Redist.txt o "nell'elenco REDIST" online. Le versioni di debug delle applicazioni e le varie DLL di debug di Visual C\+\+ non sono ridistribuibili.  Per altre informazioni, vedere [Scelta di un metodo di distribuzione](../ide/choosing-a-deployment-method.md).  
  
 Nella tabella seguente vengono descritte alcune DLL di Visual C\+\+ da cui l'applicazione potrebbe dipendere.  
  
|Libreria di Visual C\+\+|Descrizione|Si applica a|  
|------------------------------|-----------------|------------------|  
|msvcr*versione*.dll|Libreria di runtime C \(CRT\) per il codice nativo.|Applicazioni che usano le [Funzionalità libreria CRT](../c-runtime-library/crt-library-features.md).|  
|msvcp*versione*.dll|Libreria C\+\+ standard per il codice nativo.|Applicazioni che utilizzano la [libreria C\+\+ standard](../standard-library/cpp-standard-library-reference.md).|  
|mfc*versione*.dll|Libreria MFC.|Applicazioni che utilizzano la [Libreria MFC](../mfc/mfc-desktop-applications.md).|  
|mfc*versione*u.dll|Libreria MFC con supporto Unicode.|Applicazioni che utilizzano la [Libreria MFC](../mfc/mfc-desktop-applications.md) e richiedono il supporto per Unicode.|  
|mfcmifc80.dll|Libreria di interfacce gestite MFC.|Applicazioni che usano la [Libreria MFC](../mfc/mfc-desktop-applications.md) con [Controlli per Windows Form](../Topic/Windows%20Forms%20Controls.md).|  
|mfcm*versione*.dll|Libreria gestita MFC.|Applicazioni che usano la [Libreria MFC](../mfc/mfc-desktop-applications.md) con [Controlli per Windows Form](../Topic/Windows%20Forms%20Controls.md).|  
|mfcm*versione*u.dll|Libreria gestita MFC con supporto Unicode.|Applicazioni che usano la [Libreria MFC](../mfc/mfc-desktop-applications.md) con [Controlli per Windows Form](../Topic/Windows%20Forms%20Controls.md) e richiedono il supporto per Unicode.|  
  
> [!NOTE]
>  Non è più necessario ridistribuire Active Template Library come DLL separata.  Le sue funzionalità sono state spostate in intestazioni e in una libreria statica.  
  
 Per altre informazioni sulla ridistribuzione di queste DLL con l'applicazione, vedere [Ridistribuzione di file Visual C\+\+](../ide/redistributing-visual-cpp-files.md).  Per esempi, vedere [Esempi di distribuzione](../ide/deployment-examples.md).  
  
 In genere non è necessario ridistribuire le DLL di sistema, perché fanno parte del sistema operativo.  Possono tuttavia verificarsi eccezioni, ad esempio quando l'applicazione verrà eseguita in versioni diverse dei sistemi operativi Microsoft.  In questo caso, assicurarsi di leggere le Condizioni di licenza corrispondenti.  Tentare inoltre di aggiornare le DLL di sistema tramite Windows Update, Service Pack o pacchetti ridistribuibili forniti da Microsoft.  È possibile trovare i pacchetti disponibili cercando nel sito Web del [Supporto tecnico Microsoft](http://support.microsoft.com/) o nell'[Area download Microsoft](http://go.microsoft.com/fwlink/p/?LinkId=158431).  
  
## Vedere anche  
 [Scelta di un metodo di distribuzione](../ide/choosing-a-deployment-method.md)   
 [Distribuzione di applicazioni desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)