---
title: Ridistribuzione della libreria MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- MFC, redistributing
- redistributing MFC library
ms.assetid: 72714ce1-385e-4c1c-afa5-96b03e873866
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9ca153ec9ca079bf13b1c1c1dcedd6e41497307f
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="redistributing-the-mfc-library"></a>Ridistribuzione della libreria MFC
Se si collega in modo dinamico l'applicazione per la libreria MFC, è necessario ridistribuire le DLL MFC corrispondente. Ad esempio, se l'applicazione MFC viene compilato utilizzando la versione di MFC che viene fornito con Visual Studio 2015, è necessario ridistribuire mfc140.dll o mfc140u.dll, a seconda se l'app viene compilato per il supporto per Unicode o caratteri "narrow".  
  
> [!NOTE]
>  I file mfc140.dll sono state omesse dalla directory dei file ridistribuibili in Visual Studio 2015 RTM. È possibile utilizzare le versioni installate da Visual Studio 2015 nelle directory Windows\system32 e Windows\syswow64 invece.  
  
 Poiché tutte le DLL MFC utilizzano la versione condivisa della libreria di runtime C (CRT), è inoltre necessario ridistribuire CRT. La versione di MFC che viene fornito con Visual Studio 2015 Usa la libreria CRT universale, che viene distribuita come parte di Windows 10. Per eseguire un'applicazione MFC compilata con Visual Studio 2015 nelle versioni precedenti di Windows, è necessario ridistribuire Universal CRT. Per informazioni su come ridistribuire universal CRT come un componente del sistema operativo o utilizzando la distribuzione locale, vedere [introduzione Universal CRT](http://go.microsoft.com/fwlink/p/?linkid=617977). Per scaricare l'Universal CRT per la distribuzione centrale sulle versioni supportate di Windows, vedere [Windows 10 Universal C Runtime](http://go.microsoft.com/fwlink/p/?LinkId=619489). Versioni specifiche di architettura ridistribuibili di ucrtbase.dll per la distribuzione locale sono disponibili nel SDK di Windows. Per impostazione predefinita, Visual Studio installa queste in C:\Program Files (x86) \Windows Kits\10\Redist\ucrt\DLLs\ in una sottodirectory specifica dell'architettura.  
  
 Se l'app viene compilato utilizzando una versione precedente della libreria MFC, è necessario ridistribuire la DLL di CRT corrispondente dalla directory dei file ridistribuibili. Ad esempio, se l'applicazione MFC viene compilato utilizzando il set di strumenti di Visual Studio 2013 (vc120), è necessario ridistribuire il msvcr120.dll. È inoltre necessario ridistribuire il corrispondente mfc`<version>`u.dll o mfc`<version>`. dll.  
  
 Se si collega in modo statico l'applicazione a MFC (vale a dire, se si specifica **Usa MFC in una libreria statica** sul **generale** nella scheda il **pagine delle proprietà** la finestra di dialogo), non è Per ridistribuire una DLL MFC. Tuttavia, anche se il collegamento statico potrebbe funzionare per il testing e distribuzione interna delle applicazioni, si consiglia di non utilizzarla per la ridistribuzione di MFC. Per ulteriori informazioni sulle strategie consigliate per la distribuzione di librerie di Visual C++, vedere [scelta di un metodo di distribuzione](../ide/choosing-a-deployment-method.md).  
  
 Se l'applicazione usa le classi MFC che implementano il controllo WebBrowser (ad esempio, [classe CHtmlView](../mfc/reference/chtmlview-class.md) o [CHtmlEditView Class](../mfc/reference/chtmleditview-class.md)), si consiglia di installare anche la versione più recente di Microsoft Internet Explorer in modo che il computer di destinazione avranno i file di controllo comune più recenti. (Minimo, Internet Explorer 4.0 è obbligatorio). Informazioni su come installare i componenti di Internet Explorer sono disponibile in "Articolo 185375: come creare un singolo file EXE installazione di Internet Explorer" nel sito Web del supporto Microsoft.  
  
 Se l'applicazione utilizza le classi di database MFC (ad esempio, [classe CRecordset](../mfc/reference/crecordset-class.md) e [CRecordView (classe)](../mfc/reference/crecordview-class.md)), è necessario ridistribuire ODBC e driver ODBC utilizzati dall'applicazione. Per ulteriori informazioni, vedere [ridistribuzione dei file di supporto Database](../ide/redistributing-database-support-files.md).  
  
 Se l'applicazione MFC utilizza controlli Windows Form, è necessario ridistribuire mfcmifc80 con l'applicazione. Questa DLL è un assembly .NET firmato con nome sicuro che può essere ridistribuito con un'applicazione in una cartella locale dell'applicazione o mediante la distribuzione in Global Assembly Cache (GAC) tramite il [Gacutil.exe (strumento Global Assembly Cache)](/dotnet/framework/tools/gacutil-exe-gac-tool).  
  
 Se si ridistribuisce una DLL MFC, assicurarsi di ridistribuire la versione finale e non la versione di debug. Versioni di debug delle DLL non sono ridistribuibili. I nomi delle versioni di debug delle DLL MFC terminare con una "d", ad esempio, Mfc140d.dll.  
  
 È possibile ridistribuire MFC utilizzando entrambi VCRedist _*architettura*.exe, i moduli unione che vengono installati con Visual Studio oppure distribuendo la DLL di MFC nella stessa cartella dell'applicazione. Per ulteriori informazioni sulla ridistribuzione di MFC, vedere [ridistribuzione di file Visual C++](../ide/redistributing-visual-cpp-files.md).  
  
## <a name="installation-of-localized-mfc-components"></a>Installazione di componenti MFC localizzati  
 Se si decide di localizzare l'applicazione mediante l'installazione di una DLL di localizzazione di MFC, è necessario utilizzare i file di unione ridistribuibili (MSM). Ad esempio, se si desidera localizzare l'applicazione in x86 computer, è necessario unire Microsoft_VC`<version>`_MFCLOC_x86.msm nel pacchetto di installazione per x86 computer.  
  
 I file MSM ridistribuibili contengono le DLL che vengono utilizzate per la localizzazione. È una DLL per ogni lingua supportata. Il processo di installazione installa queste DLL nella cartella %Windir%\system32\. nel computer di destinazione.  
  
 Per ulteriori informazioni su come localizzare le applicazioni MFC, vedere [TN057: localizzazione di componenti MFC](../mfc/tn057-localization-of-mfc-components.md), nonché [articolo 208983: come per l'utilizzo di DLL di MFC LOC](http://go.microsoft.com/fwlink/p/?linkid=198025) nel sito Web del supporto Microsoft.  
  
 È possibile ridistribuire le DLL di localizzazione di MFC distribuendo la DLL di MFC nella cartella locale dell'applicazione. Per ulteriori informazioni sulla ridistribuzione di librerie di Visual C++, vedere [ridistribuzione di file Visual C++](../ide/redistributing-visual-cpp-files.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Ridistribuzione di file Visual C++](../ide/redistributing-visual-cpp-files.md)