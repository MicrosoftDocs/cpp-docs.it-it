---
title: MFC Classes for Creating Internet Client Applications | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- MFC, WinInet classes
- WinInet classes [MFC], classes
- classes [MFC], MFC
- Internet client applications [MFC], MFC
- Internet applications [MFC], MFC
ms.assetid: 67d34117-9839-4f4b-8bb8-0e4a9471c606
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 4e0027c345e4d414e28e8232f9e9ced2b73f0add
ms.openlocfilehash: 4d1bf2c587c8a80547ee6793433f83a94945937e
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="mfc-classes-for-creating-internet-client-applications"></a>MFC Classes for Creating Internet Client Applications
MFC provides the following classes and global functions for writing Internet client applications. Indentation indicates a class is derived from the unindented class above it. `CGopherFile` and `CHttpFile` derive from `CInternetFile`, for example. These classes and global functions are declared in AFXINET.H, except `CFileFind`, which is declared in AFX.H.  
  
## <a name="classes"></a>Classes  
  
-   [CInternetSession](../mfc/reference/cinternetsession-class.md)  
  
-   [CInternetConnection](../mfc/reference/cinternetconnection-class.md)  
  
    -   [CFtpConnection](../mfc/reference/cftpconnection-class.md)  
  
    -   [CGopherConnection](../mfc/reference/cgopherconnection-class.md)  
  
    -   [CHttpConnection](../mfc/reference/chttpconnection-class.md)  
  
-   [CInternetFile](../mfc/reference/cinternetfile-class.md)  
  
    -   [CGopherFile](../mfc/reference/cgopherfile-class.md)  
  
    -   [CHttpFile](../mfc/reference/chttpfile-class.md)  
  
-   [CFileFind](../mfc/reference/cfilefind-class.md)  
  
    -   [CFtpFileFind](../mfc/reference/cftpfilefind-class.md)  
  
    -   [CGopherFileFind](../mfc/reference/cgopherfilefind-class.md)  
  
-   [CGopherLocator](../mfc/reference/cgopherlocator-class.md)  
  
-   [CInternetException](../mfc/reference/cinternetexception-class.md)  
  
## <a name="global-functions"></a>Global Functions  
  
-   [AfxParseURL](reference/internet-url-parsing-globals.md#afxparseurl)  
  
-   [AfxGetInternetHandleType](reference/internet-url-parsing-globals.md#afxgetinternethandletype)  
  
-   [AfxThrowInternetException](reference/internet-url-parsing-globals.md#afxthrowinternetexception)  
  
## <a name="see-also"></a>See Also  
 [Win32 Internet Extensions (WinInet)](../mfc/win32-internet-extensions-wininet.md)   
 [Prerequisites for Internet Client Classes](../mfc/prerequisites-for-internet-client-classes.md)   
 [Writing an Internet Client Application Using MFC WinInet Classes](../mfc/writing-an-internet-client-application-using-mfc-wininet-classes.md)

