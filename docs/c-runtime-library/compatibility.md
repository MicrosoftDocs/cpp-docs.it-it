---
title: "Compatibilità | Microsoft Docs"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- c.programs
dev_langs:
- C++
helpviewer_keywords:
- CRT, compatibility
- compatibility, C run-time libraries
- compatibility
ms.assetid: 346709cb-edda-4909-9a19-3d253eddb6b7
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b2c7d2882017a624bb00f5a32f5d6da69ff61057
ms.sourcegitcommit: 185e11ab93af56ffc650fe42fb5ccdf1683e3847
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 01/29/2018
---
# <a name="compatibility"></a>Compatibilità
La libreria run-time di C universale (UCRT) supporta la maggior parte delle librerie standard di C necessarie per la conformità a C++. Implementa la libreria C99 (ISO/IEC 9899:1999) con le eccezioni delle macro generiche di tipo definite in \<<tgmath.h> e la compatibilità di tipo strict in \<complex.h>. UCRT implementa anche un subset di grandi dimensioni della libreria C POSIX.1 (ISO/IEC 9945-1:1996, POSIX System Application Program Interface), ma non è completamente conforme agli standard POSIX specifici.  Inoltre, UCRT implementa diverse funzioni e macro specifiche per Microsoft non incluse in uno standard.  
  
 Le funzioni specifiche per l'implementazione Microsoft di Visual C++ si trovano nella libreria vcruntime.  Molte di queste funzioni sono per uso interno e non possono essere chiamate dal codice utente. Alcune sono documentate per l'uso durante il debug e per la compatibilità dell'implementazione.  
  
 Lo standard C++ riserva all'implementazione i nomi che iniziano con un carattere di sottolineatura nello spazio dei nomi globale. Poiché le funzioni POSIX si trovano nello spazio dei nomi globale, ma non fanno parte della libreria run-time di C standard, le implementazioni specifiche per Microsoft di queste funzioni hanno un carattere di sottolineatura iniziale. Per la portabilità, UCRT supporta anche i nomi predefiniti, ma il compilatore Visual C++ genera un avviso di deprecazione quando viene compilato il codice che li usa. Solo i nomi POSIX predefiniti sono deprecati, non le funzioni. Per eliminare l'avviso, definire `_CRT_NONSTDC_NO_WARNINGS` prima di includere le intestazioni nel codice che usa i nomi POSIX originali.  
  
 Alcune funzioni nella libreria C standard hanno una storia di utilizzi non sicuri a causa di parametri usati in modo improprio e di buffer non controllati. Queste funzioni causano spesso problemi di sicurezza nel codice. Microsoft ha creato un set di versioni più sicure per queste funzioni che verifica l'uso dei parametri e richiama il gestore di parametro non valido quando viene rilevato un problema in fase di esecuzione.  Per impostazione predefinita, il compilatore Visual C++ genera un avviso di deprecazione quando per una funzione in uso è disponibile una variante più sicura. Quando si compila il codice come C++, è possibile definire `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES` come 1 per eliminare la maggior parte degli avvisi. Questo elemento usa gli overload dei modelli per chiamare le varianti più sicure e, allo stesso tempo, per mantenere portabile il codice di origine. Per eliminare l'avviso, definire `_CRT_SECURE_NO_WARNINGS` prima di includere le intestazioni nel codice che usa queste funzioni. Per altre informazioni, vedere [Security Features in the CRT](../c-runtime-library/security-features-in-the-crt.md).  
  
 Ad eccezione di quanto indicato nella documentazione per funzioni specifiche, UCRT è compatibile con l'API Windows.  Alcune funzioni non sono supportate nelle app di Windows Store per Windows 8 o nelle app della piattaforma UWP (Universal Windows Platform) in Windows 10. Queste funzioni sono elencate nell'articolo [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md), che enumera le funzioni non supportate da Windows Runtime e da [UWP](/uwp).  
  
## <a name="related-articles"></a>Articoli correlati  
  
|Titolo|Descrizione|  
|-----------|-----------------|  
|[App di Windows Store, Windows Runtime e runtime del linguaggio C](../c-runtime-library/windows-store-apps-the-windows-runtime-and-the-c-run-time.md)|Descrive i casi in cui le routine UCRT non sono compatibili con le app di Windows universale o le app di Windows Store.|  
|[Conformità ANSI C](../c-runtime-library/ansi-c-compliance.md)|Descrive la denominazione conforme agli standard in UCRT.|  
|[UNIX](../c-runtime-library/unix.md)|Fornisce indicazioni per trasferire i programmi su UNIX.|  
|[Windows Platforms (CRT)](../c-runtime-library/windows-platforms-crt.md) (Piattaforme Windows (CRT))|Elenca i sistemi operativi che CRT supporta.|  
|[Compatibilità con le versioni precedenti](../c-runtime-library/backward-compatibility.md)|Descrive come eseguire il mapping dei nomi CRT precedenti ai nuovi.|  
|[Funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md)|Fornisce una panoramica sui file della libreria CRT (.lib) e le opzioni del compilatore associate.|