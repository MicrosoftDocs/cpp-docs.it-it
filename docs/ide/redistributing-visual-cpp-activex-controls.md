---
title: Ridistribuzione dei controlli ActiveX di Visual C++ | Documenti Microsoft
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
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="redistributing-visual-c-activex-controls"></a>Ridistribuzione di controlli ActiveX di Visual C++
Visual C++ 6.0 fornisce controlli ActiveX, che è possibile utilizzare nelle applicazioni che è quindi possibile ridistribuire. Questi controlli non sono più inclusi in Visual C++. Per i contratti di licenza di Visual C++ 6.0, è possibile ridistribuire questi controlli con le applicazioni sviluppate in Visual C++.  
  
> [!NOTE]
>  Non è più supportato da Microsoft Visual C++ 6.0.  
  
 Per un elenco dei controlli ActiveX di Visual C++ 6.0, vedere Common\Redist\Redist.txt sul disco 1 del CD del prodotto Visual C++ 6.0.  
  
 Quando si distribuiscono applicazioni, è necessario installare e registrare il file ocx per il controllo ActiveX (utilizzando Regsvr32.exe). Inoltre, assicurarsi che il computer di destinazione con le versioni correnti dei file di sistema seguente (un asterisco indica che il file deve essere registrato):  
  
-   Asycfilt  
  
-   Comcat *  
  
-   Oleaut32.dll *  
  
-   Olepro32. dll *  
  
-   Stdole2  
  
 Se queste DLL non sono disponibili nel sistema di destinazione, è necessario aggiornarle tramite il meccanismo stabilito per l'aggiornamento del sistema operativo corrispondente. È possibile scaricare il service pack più recenti per i sistemi operativi Windows dal [ http://windowsupdate.microsoft.com ](http://windowsupdate.microsoft.com).  
  
 Se l'applicazione utilizza uno dei controlli ActiveX che si connette a un database, è necessario disporre di Microsoft Data Access Components (MDAC) installato nel sistema di destinazione. Per ulteriori informazioni, vedere [ridistribuzione dei file di supporto Database](../ide/redistributing-database-support-files.md).  
  
 Quando si utilizza un controllo ActiveX che si connette a un database, è anche necessario replicare il nome dell'origine dati nel computer di destinazione. È possibile farlo a livello di codice con le funzioni, ad esempio `ConfigDSN`.  
  
 Alcuni controlli ActiveX ridistribuibili hanno dipendenze aggiuntive. Per ogni file ocx nella cartella Os\System nel CD del prodotto Visual C++ 6.0, è inoltre disponibile un file DEP. Per ogni file ocx che si desidera ridistribuire, cercare una o più voci utilizzato nel file DEP corrispondente. Se un file è elencato, è necessario assicurarsi che il file sia nel computer di destinazione. Tutte le DLL che supportano direttamente un file ocx devono essere registrati. (Per Regsvr32.exe abbia esito positivo, il computer di destinazione deve contenere innanzitutto tutte le DLL caricate in modo statico il controllo.) Inoltre, se una DLL che è elencata come dipendenza dispone anche di un file DEP nella cartella Os\System sul CD di Visual C++ 6.0, è necessario esaminare in tale file per le voci utilizza DEP.  
  
## <a name="see-also"></a>Vedere anche  
 [Ridistribuzione di file Visual C++](../ide/redistributing-visual-cpp-files.md)