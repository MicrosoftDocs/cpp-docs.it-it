---
title: Limitazioni di CImage con sistemi operativi precedenti | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CImage
dev_langs:
- C++
helpviewer_keywords:
- CImage class [MFC], limitations
ms.assetid: 4bedaab8-7dd1-4c91-ab35-b75fb56765b0
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 27046704975bf8f5e28f12acbfa72e860660fdbd
ms.sourcegitcommit: 30ab99c775d99371ed22d1a46598e542012ed8c6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/08/2018
---
# <a name="cimage-limitations-with-earlier-operating-systems"></a>Limitazioni di CImage con sistemi operativi precedenti
Molti `CImage` funzioni funzionano solo con le versioni più recenti di Windows: Windows 95/98 o Windows NT 4.0 o Windows 2000. In questo articolo vengono descritte le limitazioni di versione di alcuni metodi.  
  
 [CImage::PlgBlt](../atl-mfc-shared/reference/cimage-class.md#plgblt) e [CImage::MaskBlt](../atl-mfc-shared/reference/cimage-class.md#maskblt) funzionano con solo Windows NT 4.0 o versioni successive. Non funzionerà in applicazioni in esecuzione in Windows 95/98 o versioni successive.  
  
 [CImage::AlphaBlend](../atl-mfc-shared/reference/cimage-class.md#alphablend) e [CImage::TransparentBlt](../atl-mfc-shared/reference/cimage-class.md#transparentblt) funzionano con solo Windows 2000 o versioni successive e Windows 98 o versione successiva, perché è necessario collegare con msimg32 utilizzare questi metodi. (Questa libreria è disponibile solo per le applicazioni in esecuzione Windows 2000 o versioni successive e Windows 98 o versione successiva).  
  
 È possibile includere `AlphaBlend` e `TransparentBlt` in un'applicazione che viene eseguito in Windows 95 o Windows NT 4.0 solo se questi metodi mai chiamati. Se l'applicazione include questi metodi, e deve essere eseguita nei sistemi operativi precedenti, è necessario utilizzare l'opzione del linker [/delayload](../build/reference/delayload-delay-load-import.md) per ritardare il caricamento di msimg32. Fino a quando l'applicazione non chiama uno di questi metodi in esecuzione su Windows NT 4.0 o Windows 95, non tenterà di caricare msimg32. È possibile verificare se il supporto di trasparenza è disponibile tramite il `CImage::IsTransparencySupported` metodo.  
  
## <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocViewSDI#8](../mfc/codesnippet/cpp/cimage-limitations-with-earlier-operating-systems_1.cpp)]  
  
 Per compilare un'applicazione che chiama questi metodi, inserire un #define _WIN32_WINNT istruzione prima #including le intestazioni di sistema, che indica che la versione di Windows è uguale o maggiore di 5.0:  
  
 [!code-cpp[NVC_MFCDocViewSDI#9](../mfc/codesnippet/cpp/cimage-limitations-with-earlier-operating-systems_2.h)]  
  
 Se l'applicazione non è necessario eseguire in un sistema operativo precedente a Windows 2000 o Windows 98, è possibile collegare direttamente a msimg32 senza utilizzare **/delayload**.  
  
 [CImage::Draw](../atl-mfc-shared/reference/cimage-class.md#draw) si comporta in modo diverso quando si utilizza Windows 2000 e Windows 98 rispetto a Windows NT 4.0 o Windows 95.  
  
 Se si compila l'applicazione con _WIN32_WINNT impostato su un valore inferiore a 0x0500, **disegnare** verrà lavoro, ma non gestirà automaticamente la trasparenza nei sistemi che eseguono Windows 2000 e Windows 98 e versioni successive.  
  
 Se si compila l'applicazione con _WIN32_WINNT impostato su 0x0500 o versione successiva, **disegnare** gestirà automaticamente la trasparenza nei sistemi che eseguono Windows 2000 o Windows 98 e versioni successive. Verrà inoltre applicata, ma senza il supporto di trasparenza, con Windows NT 4.0 e Windows 95; Tuttavia, è necessario utilizzare **/delayload** per ritardare il caricamento di msimg32. LIB, come descritto in precedenza per `AlphaBlend` e `TransparentBlt`.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CImage](../atl-mfc-shared/reference/cimage-class.md)
