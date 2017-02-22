---
title: "Limitazioni di CImage con sistemi operativi precedenti | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CImage"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CImage (classe), limiti"
ms.assetid: 4bedaab8-7dd1-4c91-ab35-b75fb56765b0
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Limitazioni di CImage con sistemi operativi precedenti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Molte funzioni di `CImage` funzionano solo con le versioni più recenti di windows: 95\/98 Windows NT o Windows 4.0, Windows 2000.  In questo articolo vengono descritte le limitazioni della versione di determinati metodi.  
  
 [CImage::PlgBlt](../Topic/CImage::PlgBlt.md) e di [CImage::MaskBlt](../Topic/CImage::MaskBlt.md) solo con Windows NT 4.0 o successiva.  Non funzioneranno per le applicazioni in esecuzione su Windows 95\/98 o versioni successive.  
  
 [CImage::AlphaBlend](../Topic/CImage::AlphaBlend.md) e di [CImage::TransparentBlt](../Topic/CImage::TransparentBlt.md) solo con Windows 2000 o versioni successive e Windows 98 o versioni successive in quanto è necessario accedere con msimg32.lib per utilizzare questi metodi. \(Questa libreria è disponibile solo per le applicazioni che eseguono Windows 2000 o versioni successive e Windows 98 o successiva.\)  
  
 È possibile importare `AlphaBlend` e `TransparentBlt` in un'applicazione eseguita in Windows 95 o Windows NT 4.0 solo se questi metodi non gli elementi chiamati.  Se l'applicazione include questi metodi e deve funzionare nei sistemi operativi precedenti, è necessario utilizzare [\/delayload](../build/reference/delayload-delay-load-import.md) del linker per ritardare il caricamento di msimg32.lib.  Finché l'applicazione non chiama uno di questi metodi durante l'esecuzione in Windows NT 4.0 o Windows 95, non tenta di caricare msimg32.lib.  È possibile controllare se il supporto della trasparenza è disponibile tramite il metodo di `CImage::IsTransparencySupported`.  
  
## Esempio  
 [!code-cpp[NVC_MFCDocViewSDI#8](../mfc/codesnippet/CPP/cimage-limitations-with-earlier-operating-systems_1.cpp)]  
  
 Per compilare un'applicazione che chiamati questi metodi, inserire un'istruzione \#define \_WIN32\_WINNT prima di \#including le intestazioni di sistema, per indicare che la versione di Windows è uguale o superiore a 5,0:  
  
 [!code-cpp[NVC_MFCDocViewSDI#9](../mfc/codesnippet/CPP/cimage-limitations-with-earlier-operating-systems_2.h)]  
  
 Se l'applicazione non deve essere eseguita in un sistema operativo precedente di Windows 2000 o Windows 98, è possibile accedere direttamente a msimg32.lib senza utilizzare **\/delayload**.  
  
 [CImage::Draw](../Topic/CImage::Draw.md) si comporta in modo diverso quando vengono utilizzate con Windows 2000 e Windows 98 che funziona con Windows NT 4.0 o Windows 95.  
  
 Se si compila l'applicazione con \_WIN32\_WINNT impostato su un valore inferiore a 0x0500, **Disegna** eseguito, ma non gestirà la trasparenza automaticamente nei sistemi con Windows 2000 e Windows 98 e versioni successive.  
  
 Se si compila l'applicazione con \_WIN32\_WINNT impostato a 0x0500 o superiore, **Disegna** manterrà la trasparenza automaticamente nei sistemi con Windows 2000 o Windows 98 e versioni successive.  Viene inoltre eseguito, ma senza supporto di trasparenza, con Windows NT 4.0 e Windows 95; tuttavia, è necessario utilizzare **\/delayload** per ritardare il caricamento di msimg32.LIB, come descritto in precedenza per `AlphaBlend` e `TransparentBlt`.  
  
## Vedere anche  
 [CImage Class](../atl-mfc-shared/reference/cimage-class.md)