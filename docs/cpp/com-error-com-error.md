---
title: "_com_error::_com_error | Microsoft Docs"
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
  - "_com_error._com_error"
  - "_com_error::_com_error"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_com_error (metodo)"
ms.assetid: 0a69e46c-caab-49ef-b091-eee401253ce6
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_error::_com_error
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Costruisce un oggetto `_com_error`.  
  
## Sintassi  
  
```  
  
      _com_error(  
   HRESULT hr,  
   IErrorInfo* perrinfo = NULL,  
   bool fAddRef=false  
) throw( );  
_com_error(  
   const _com_error& that   
) throw( );  
```  
  
#### Parametri  
 `hr`  
 Informazioni `HRESULT`.  
  
 `perrinfo`  
 Oggetto **IErrorInfo**.  
  
 **bool fAddRef\=false**  
 Indica al costruttore di chiamare AddRef su un'interfaccia **IErrorInfo** non null.  Ciò consente un conteggio corretto dei riferimenti nel caso comune in cui la proprietà dell'interfaccia venga passata all'oggetto `_com_error`, ad esempio:  
  
```  
throw _com_error(hr, perrinfo);  
```  
  
 Se non si desidera che il codice trasferisca la proprietà all'oggetto `_com_error` e se `AddRef` è necessario per compensare **Release** nel distruttore `_com_error`, costruire un oggetto nel modo seguente:  
  
```  
_com_error err(hr, perrinfo, true);  
```  
  
 `that`  
 Oggetto `_com_error` esistente.  
  
## Note  
 Il primo costruttore crea un nuovo oggetto, dati un oggetto `HRESULT` e un oggetto facoltativo **IErrorInfo**.  Il secondo crea una copia di un oggetto `_com_error` esistente.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Classe \_com\_error](../cpp/com-error-class.md)