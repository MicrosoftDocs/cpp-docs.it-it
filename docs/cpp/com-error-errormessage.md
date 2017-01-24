---
title: "_com_error::ErrorMessage | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_com_error::ErrorMessage"
  - "_com_error.ErrorMessage"
  - "ErrorMessage"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ErrorMessage (metodo)"
ms.assetid: e47335b6-01af-4975-a841-121597479eb7
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_error::ErrorMessage
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Recupera il messaggio stringa per `HRESULT` archiviato nell'oggetto `_com_error`.  
  
## Sintassi  
  
```  
  
const TCHAR * ErrorMessage( ) const throw( );  
  
```  
  
## Valore restituito  
 Restituisce il messaggio stringa per `HRESULT` registrato nell'oggetto `_com_error`.  Se `HRESULT` è un [wCode](../cpp/com-error-wcode.md) mappato a 16 bit, viene restituito un messaggio generico "`IDispatch error #<wCode>`".  Se non viene trovato nessun messaggio, viene restituito un messaggio generico "`Unknown error #<hresult>`".  La stringa restituita è una stringa Unicode o multibyte, a seconda dello stato della macro **\_UNICODE**.  
  
## Note  
 Recupera il testo del messaggio di sistema appropriato per `HRESULT` registrato nell'oggetto `_com_error`.  Il testo del messaggio di sistema viene ottenuto chiamando la funzione Win32 [FormatMessage](http://msdn.microsoft.com/library/windows/desktop/ms679351).  La stringa restituita è allocata da `FormatMessage` API e viene rilasciata quando l'oggetto `_com_error` viene eliminato.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Classe \_com\_error](../cpp/com-error-class.md)