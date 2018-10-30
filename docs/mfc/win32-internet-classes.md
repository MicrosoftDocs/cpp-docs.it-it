---
title: Classi Internet Win32 | Microsoft Docs
ms.custom: ''
ms.date: 09/12/2018
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.classes.win32
dev_langs:
- C++
helpviewer_keywords:
- Internet classes [MFC]
- WinInet classes [MFC], classes
- Win32 [MFC], Internet classes
- Windows API [MFC], Internet classes
ms.assetid: b49601d5-3025-4068-9408-316b54ee4375
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1c59d9d3e2a838c2b3933d49454a494ab6c7a290
ms.sourcegitcommit: a3c9e7888b8f437a170327c4c175733ad9eb0454
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2018
ms.locfileid: "50204431"
---
# <a name="win32-internet-classes"></a>Classi Internet Win32

MFC esegue il wrapping della Internet Win32 (WinInet) e della tecnologia di ActiveX per semplificare la programmazione Internet.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere utilizzata per nuove attività di sviluppo. Per altre informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

[CInternetSession](../mfc/reference/cinternetsession-class.md)<br/>
Crea e Inizializza una o più sessioni Internet simultanee e, se necessario, viene descritta la connessione a un server proxy.

[CInternetConnection](../mfc/reference/cinternetconnection-class.md)<br/>
Gestisce la connessione a un server Internet.

[CInternetFile](../mfc/reference/cinternetfile-class.md)<br/>
Questa classe e le relative classi derivate possono accedere ai file nei sistemi remoti che utilizzano protocolli Internet.

[CHttpConnection](../mfc/reference/chttpconnection-class.md)<br/>
Gestisce la connessione a un server HTTP.

[CHttpFile](../mfc/reference/chttpfile-class.md)<br/>
Fornisce la funzionalità per individuare e leggere i file in un server HTTP.

[CGopherFile](../mfc/reference/cgopherfile-class.md)<br/>
Fornisce la funzionalità per individuare e leggere file in un server gopher.

[CFtpConnection](../mfc/reference/cftpconnection-class.md)<br/>
Gestisce la connessione a un server FTP.

[CGopherConnection](../mfc/reference/cgopherconnection-class.md)<br/>
Gestisce la connessione a un server gopher.

[CFileFind](../mfc/reference/cfilefind-class.md)<br/>
Esegue ricerche di file su Internet e locali.

[Classe CFtpFileFind](../mfc/reference/cftpfilefind-class.md)<br/>
Facilita le ricerche di file su Internet dei server FTP.

[CGopherFileFind](../mfc/reference/cgopherfilefind-class.md)<br/>
Facilita le ricerche di file su Internet dei server gopher.

[CGopherLocator](../mfc/reference/cgopherlocator-class.md)<br/>
Ottiene un "localizzatore" gopher da un server gopher, determina il tipo di localizzatore e lo rende disponibile per `CGopherFileFind`.

[Classe CInternetException](../mfc/reference/cinternetexception-class.md)<br/>
Rappresenta una condizione di eccezione correlata a un'operazione su Internet.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)

