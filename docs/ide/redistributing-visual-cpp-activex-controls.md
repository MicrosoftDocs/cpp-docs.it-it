---
title: Ridistribuzione di controlli ActiveX di Visual C++ | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- controls [C++], redistributing
- controls [C++], distributing
ms.assetid: eefbb7e4-d28c-4c35-98bf-d9540cfaae83
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2b770bbacca06c6edfb3b9b4eda53fc7be8a7ae0
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "33331019"
---
# <a name="redistributing-visual-c-activex-controls"></a>Ridistribuzione di controlli ActiveX di Visual C++
Visual C++ 6.0 fornisce controlli ActiveX che è possibile usare in applicazioni da ridistribuire in seguito. Questi controlli non sono più inclusi in Visual C++. In base ai contratti di licenza di Visual C++ 6.0, è possibile ridistribuire questi controlli con le applicazioni sviluppate in Visual C++.  
  
> [!NOTE]
>  Visual C++ 6.0 non è più supportato da Microsoft.  
  
 Per l'elenco dei controlli ActiveX di Visual C++ 6.0 ridistribuibili, vedere Common\Redist\Redist.txt nel disco 1 dei CD di Visual C++ 6.0.  
  
 Quando si distribuiscono applicazioni, è necessario installare e registrare, tramite Regsvr32.exe, il file con estensione ocx corrispondente al controllo ActiveX usato. Assicurarsi anche che nel computer di destinazione siano presenti le versioni correnti dei file di sistema seguenti (un asterisco indica che il file deve essere registrato):  
  
-   Asycfilt.dll  
  
-   Comcat.dll *  
  
-   Oleaut32.dll *  
  
-   Olepro32.dll *  
  
-   Stdole2.tlb  
  
 Se queste DLL non sono disponibili nel sistema di destinazione, è necessario aggiornarle tramite il meccanismo stabilito per l'aggiornamento del sistema operativo corrispondente. È possibile scaricare i Service Pack più recenti per i sistemi operativi Windows da [http://windowsupdate.microsoft.com](http://windowsupdate.microsoft.com).  
  
 Se l'applicazione usa un controllo ActiveX che si connette a un database, nel sistema di destinazione devono essere installati i componenti MDAC (Microsoft Data Access Component). Per altre informazioni, vedere [Ridistribuzione dei file di supporto del database](../ide/redistributing-database-support-files.md).  
  
 Se si usa un controllo ActiveX che si connette a un database, è anche necessario replicare il nome dell'origine dati nel computer di destinazione. Tale operazione può essere eseguita a livello di codice tramite funzioni, ad esempio `ConfigDSN`.  
  
 Alcuni controlli ActiveX ridistribuibili hanno dipendenze aggiuntive. Per ogni file con estensione ocx nella cartella Os\System del CD di Visual C++ 6.0 è presente anche un file con estensione dep. Per ogni file con estensione ocx che si vuole ridistribuire, cercare una o più voci USES nel file con estensione dep corrispondente. Se un file è elencato, è necessario assicurarsi che sia presente nel computer di destinazione. Tutte le DLL che supportano direttamente un file con estensione ocx devono essere registrati. Perché Regsvr32.exe abbia esito positivo, il computer di destinazione deve prima di tutto contenere tutte le DLL caricate in modo statico dal controllo. Se poi per una DLL elencata come dipendenza è presente anche un file con estensione dep nella cartella Os\System del CD di Visual C++ 6.0, è anche necessario esaminare le voci USES in quest'ultimo.  
  
## <a name="see-also"></a>Vedere anche  
 [Ridistribuzione di file Visual C++](../ide/redistributing-visual-cpp-files.md)