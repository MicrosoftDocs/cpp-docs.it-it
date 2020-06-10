---
title: Classi MFC per la creazione di applicazioni client Internet
ms.date: 11/04/2016
helpviewer_keywords:
- MFC, WinInet classes
- WinInet classes [MFC], classes
- classes [MFC], MFC
- Internet client applications [MFC], MFC
- Internet applications [MFC], MFC
ms.assetid: 67d34117-9839-4f4b-8bb8-0e4a9471c606
ms.openlocfilehash: d65a2e8b373f26fe928e4c3e7c0193aec4edf2d6
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84618044"
---
# <a name="mfc-classes-for-creating-internet-client-applications"></a>Classi MFC per la creazione di applicazioni client Internet

MFC fornisce le classi e le funzioni globali seguenti per la scrittura di applicazioni client Internet. Il rientro indica che una classe è derivata dalla classe non rientrata. `CGopherFile`e `CHttpFile` derivano da `CInternetFile` , ad esempio. Queste classi e funzioni globali sono dichiarate in AFXINET. H, eccetto `CFileFind` , dichiarato in AFX. H.

## <a name="classes"></a>Classi

- [CInternetSession](reference/cinternetsession-class.md)

- [CInternetConnection](reference/cinternetconnection-class.md)

  - [CFtpConnection](reference/cftpconnection-class.md)

  - [CGopherConnection](reference/cgopherconnection-class.md)

  - [CHttpConnection](reference/chttpconnection-class.md)

- [CInternetFile](reference/cinternetfile-class.md)

  - [CGopherFile](reference/cgopherfile-class.md)

  - [CHttpFile](reference/chttpfile-class.md)

- [CFileFind](reference/cfilefind-class.md)

  - [CFtpFileFind](reference/cftpfilefind-class.md)

  - [CGopherFileFind](reference/cgopherfilefind-class.md)

- [CGopherLocator](reference/cgopherlocator-class.md)

- [CInternetException](reference/cinternetexception-class.md)

## <a name="global-functions"></a>Funzioni globali

- [AfxParseURL](reference/internet-url-parsing-globals.md#afxparseurl)

- [AfxGetInternetHandleType](reference/internet-url-parsing-globals.md#afxgetinternethandletype)

- [AfxThrowInternetException](reference/internet-url-parsing-globals.md#afxthrowinternetexception)

## <a name="see-also"></a>Vedere anche

[Estensioni Internet Win32 (WinInet)](win32-internet-extensions-wininet.md)<br/>
[Prerequisiti per le classi client Internet](prerequisites-for-internet-client-classes.md)<br/>
[Scrittura di un'applicazione client Internet con classi WinInet MFC](writing-an-internet-client-application-using-mfc-wininet-classes.md)
