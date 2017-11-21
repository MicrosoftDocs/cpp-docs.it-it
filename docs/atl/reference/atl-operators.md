---
title: Operatori ATL | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: 'index-page '
dev_langs: C++
helpviewer_keywords: operators [ATL]
ms.assetid: 58ccd252-2869-45ee-8a5c-3ca40ee7f8a2
caps.latest.revision: "16"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 46bc674a65e2ffc946a4806ce1440fec6e14c355
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="atl-operators"></a>Operatori ATL
In questa sezione contiene gli argomenti di riferimento per gli operatori globali ATL.  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|[operatore = =](#operator_eq_eq)|Confronta due `CSid` oggetti o `SID` strutture per verificarne l'uguaglianza.|  
|[operatore! =](#operator_neq)|Confronta due `CSid` oggetti o `SID` strutture per stabilirne la disuguaglianza.|  
|[operatore <](#operator_lt)|Verifica se il `CSid` oggetto o `SID` struttura sul lato sinistro dell'operatore è minore di `CSid` oggetto o `SID` struttura sul lato destro (per la compatibilità della libreria Standard C++).|  
|[operatore >](#operator_gt)|Verifica se il `CSid` oggetto o `SID` struttura sul lato sinistro dell'operatore è maggiore di `CSid` oggetto o `SID` struttura sul lato destro (per la compatibilità della libreria Standard C++).|  
|[operatore < =](#operator_lt__eq)|Verifica se il `CSid` oggetto o `SID` struttura sul lato sinistro dell'operatore è minore o uguale al `CSid` oggetto o `SID` struttura sul lato destro (per la compatibilità della libreria Standard C++).|  
|[operatore > =](#operator_gt__eq)|Verifica se il `CSid` oggetto o `SID` struttura sul lato sinistro dell'operatore è maggiore o uguale al `CSid` oggetto o `SID` struttura sul lato destro (per la compatibilità della libreria Standard C++).|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLSecurity. h.  
  
##  <a name="operator_eq_eq"></a>operatore = =  
 Confronta `CSid` oggetti o `SID` strutture (SID) per verificarne l'uguaglianza.  
  
```   
bool operator==(const CSid& lhs, const CSid& rhs) throw(); 
```  
  
### <a name="parameters"></a>Parametri  
 `lhs`  
 Il primo `CSid` oggetto o `SID` struttura da confrontare.  
  
 `rhs`  
 Il secondo `CSid` oggetto o `SID` struttura da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se gli oggetti sono uguali, **false** se non sono uguali.  
  
##  <a name="operator_neq"></a>operatore! =  
 Confronta `CSid` oggetti o `SID` strutture (SID) per verificare la disuguaglianza.  
  
```   
bool operator==(const CSid& lhs, const CSid& rhs) throw(); 
```  
  
### <a name="parameters"></a>Parametri  
 `lhs`  
 Il primo `CSid` oggetto o `SID` struttura da confrontare.  
  
 `rhs`  
 Il secondo `CSid` oggetto o `SID` struttura da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se gli oggetti non sono uguali, **false** se sono uguali.  
  
##  <a name="operator_lt"></a>operatore <  
 Verifica se il `CSid` oggetto o `SID` struttura sul lato sinistro dell'operatore è minore di `CSid` oggetto o `SID` struttura sul lato destro (per la compatibilità della libreria Standard C++).  
  
```   
bool operator<(const CSid& lhs, const CSid& rhs) throw(); 
```  
  
### <a name="parameters"></a>Parametri  
 `lhs`  
 Il primo `CSid` oggetto o `SID` struttura da confrontare.  
  
 `rhs`  
 Il secondo `CSid` oggetto o `SID` struttura da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se l'indirizzo del `lhs` oggetto è minore dell'indirizzo del `rhs` oggetto **false** in caso contrario.  
  
### <a name="remarks"></a>Note  
 Questo operatore agisce sull'indirizzo del `CSid` oggetto o `SID` struttura ed è implementato per garantire la compatibilità con le classi di raccolta della libreria Standard C++.  
  
##  <a name="operator_gt"></a>operatore >  
 Verifica se il `CSid` oggetto o `SID` struttura sul lato sinistro dell'operatore è maggiore di `CSid` oggetto o `SID` struttura sul lato destro (per la compatibilità della libreria Standard C++).  
  
```   
bool operator<(const CSid& lhs, const CSid& rhs) throw(); 
```  
  
### <a name="parameters"></a>Parametri  
 `lhs`  
 Il primo `CSid` oggetto o `SID` struttura da confrontare.  
  
 `rhs`  
 Il secondo `CSid` oggetto o `SID` struttura da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se l'indirizzo del `lhs` è maggiore dell'indirizzo del `rhs`, **false** in caso contrario.  
  
### <a name="remarks"></a>Note  
 Questo operatore agisce sull'indirizzo del `CSid` oggetto o `SID` struttura ed è implementato per garantire la compatibilità con le classi di raccolta della libreria Standard C++.  
  
##  <a name="operator_lt__eq"></a>operatore < =  
 Verifica se il `CSid` oggetto o `SID` struttura sul lato sinistro dell'operatore è minore o uguale al `CSid` oggetto o `SID` struttura sul lato destro (per la compatibilità della libreria Standard C++).  
  
```   
bool operator<(const CSid& lhs, const CSid& rhs) throw(); 
```  
  
### <a name="parameters"></a>Parametri  
 `lhs`  
 Il primo `CSid` oggetto o `SID` struttura da confrontare.  
  
 `rhs`  
 Il secondo `CSid` oggetto o `SID` struttura da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se l'indirizzo del `lhs` è minore o uguale all'indirizzo del `rhs`, **false** in caso contrario.  
  
### <a name="remarks"></a>Note  
 Questo operatore agisce sull'indirizzo del `CSid` oggetto o `SID` struttura ed è implementato per garantire la compatibilità con le classi di raccolta della libreria Standard C++.  
  
##  <a name="operator_gt__eq"></a>operatore > =  
 Verifica se il `CSid` oggetto o `SID` struttura sul lato sinistro dell'operatore è maggiore o uguale al `CSid` oggetto o `SID` struttura sul lato destro (per la compatibilità della libreria Standard C++).  
  
```   
bool operator<(const CSid& lhs, const CSid& rhs) throw(); 
```  
  
### <a name="parameters"></a>Parametri  
 `lhs`  
 Il primo `CSid` oggetto o `SID` struttura da confrontare.  
  
 `rhs`  
 Il secondo `CSid` oggetto o `SID` struttura da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se l'indirizzo del `lhs` è maggiore o uguale all'indirizzo del `rhs`, **false** in caso contrario.  
  
### <a name="remarks"></a>Note  
 Questo operatore agisce sull'indirizzo del `CSid` oggetto o `SID` struttura ed è implementato per garantire la compatibilità con le classi di raccolta della libreria Standard C++.



