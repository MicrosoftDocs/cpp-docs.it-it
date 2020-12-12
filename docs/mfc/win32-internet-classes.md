---
description: 'Altre informazioni su: classi Internet Win32'
title: Classi Internet Win32
ms.date: 09/12/2018
f1_keywords:
- vc.classes.win32
helpviewer_keywords:
- Internet classes [MFC]
- WinInet classes [MFC], classes
- Win32 [MFC], Internet classes
- Windows API [MFC], Internet classes
ms.assetid: b49601d5-3025-4068-9408-316b54ee4375
ms.openlocfilehash: 8b6acad5f867444c33ed86cb7e70f4f1eec42df0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97197478"
---
# <a name="win32-internet-classes"></a>Classi Internet Win32

MFC esegue il wrapping della tecnologia Win32 Internet (WinInet) e ActiveX per semplificare la programmazione Internet.

>[!IMPORTANT]
> ActiveX è una tecnologia legacy che non deve essere usata per nuove attività di sviluppo. Per ulteriori informazioni sulle tecnologie moderne che sostituiscono ActiveX, vedere [controlli ActiveX](activex-controls.md).

[CInternetSession](../mfc/reference/cinternetsession-class.md)<br/>
Crea e Inizializza una sessione Internet o più sessioni Internet simultanee e, se necessario, descrive la connessione a un server proxy.

[CInternetConnection](../mfc/reference/cinternetconnection-class.md)<br/>
Gestisce la connessione a un server Internet.

[CInternetFile](../mfc/reference/cinternetfile-class.md)<br/>
Questa classe e le relative classi derivate consentono l'accesso a file in sistemi remoti che utilizzano protocolli Internet.

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
Esegue ricerche di file locali e Internet.

[CFtpFileFind](../mfc/reference/cftpfilefind-class.md)<br/>
Facilita le ricerche di file su Internet dei server FTP.

[CGopherFileFind](../mfc/reference/cgopherfilefind-class.md)<br/>
Facilita le ricerche di file su Internet dei server gopher.

[CGopherLocator](../mfc/reference/cgopherlocator-class.md)<br/>
Ottiene un "localizzatore" gopher da un server gopher, determina il tipo di localizzatore e lo rende disponibile per `CGopherFileFind`.

[CInternetException](../mfc/reference/cinternetexception-class.md)<br/>
Rappresenta una condizione di eccezione correlata a un'operazione su Internet.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../mfc/class-library-overview.md)
