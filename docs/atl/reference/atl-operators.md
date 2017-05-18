---
title: Gli operatori ATL | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: 'index-page '
dev_langs:
- C++
helpviewer_keywords:
- operators [ATL]
ms.assetid: 58ccd252-2869-45ee-8a5c-3ca40ee7f8a2
caps.latest.revision: 16
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f69f0c3176d2fbe19e11ce08c071691a72d858d
ms.openlocfilehash: 87aadf7aacc31ded165a8e1380823cb20e614fb1
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="atl-operators"></a>Operatori ATL
In questa sezione contiene argomenti di riferimento per gli operatori globali ATL.  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|[operatore = =](#operator_eq_eq)|Confronta due `CSid` oggetti o `SID` strutture per verificarne l'uguaglianza.|  
|[operatore! =](#operator_neq)|Confronta due `CSid` oggetti o `SID` strutture per stabilirne la disuguaglianza.|  
|[(operatore)](#operator_lt)|Verifica se il `CSid` oggetto o `SID` struttura sul lato sinistro dell'operatore è minore di `CSid` oggetto o `SID` struttura sul lato destro (per la compatibilità della libreria Standard C++).|  
|[operatore >](#operator_gt)|Verifica se il `CSid` oggetto o `SID` struttura sul lato sinistro dell'operatore è maggiore di `CSid` oggetto o `SID` struttura sul lato destro (per la compatibilità della libreria Standard C++).|  
|[(operatore)<>](#operator_lt__eq)|Verifica se il `CSid` oggetto o `SID` struttura sul lato sinistro dell'operatore è minore o uguale al `CSid` oggetto o `SID` struttura sul lato destro (per la compatibilità della libreria Standard C++).|  
|[operatore > =](#operator_gt__eq)|Verifica se il `CSid` oggetto o `SID` struttura sul lato sinistro dell'operatore è maggiore o uguale al `CSid` oggetto o `SID` struttura sul lato destro (per la compatibilità della libreria Standard C++).|  
  
 Questi operatori sono tutti definiti in ATLSecurity. h il file.  
  
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
 Confronta `CSid` oggetti o `SID` disuguaglianza nelle strutture (SID).  
  
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
  
##  <a name="operator_lt"></a>(operatore)  
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
 Restituisce **true** se l'indirizzo del `lhs` oggetto è minore rispetto all'indirizzo di `rhs` oggetto **false** in caso contrario.  
  
### <a name="remarks"></a>Note  
 Questo operatore viene utilizzato l'indirizzo di `CSid` oggetto o `SID` struttura ed è implementato per garantire la compatibilità con le classi di raccolta della libreria Standard C++.  
  
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
 Restituisce **true** se l'indirizzo del `lhs` è maggiore dell'indirizzo di `rhs`, **false** in caso contrario.  
  
### <a name="remarks"></a>Note  
 Questo operatore viene utilizzato l'indirizzo di `CSid` oggetto o `SID` struttura ed è implementato per garantire la compatibilità con le classi di raccolta della libreria Standard C++.  
  
##  <a name="operator_lt__eq"></a>(operatore)<=></=>  
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
 Restituisce **true** se l'indirizzo del `lhs` è minore o uguale all'indirizzo di `rhs`, **false** in caso contrario.  
  
### <a name="remarks"></a>Note  
 Questo operatore viene utilizzato l'indirizzo di `CSid` oggetto o `SID` struttura ed è implementato per garantire la compatibilità con le classi di raccolta della libreria Standard C++.  
  
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
 Restituisce **true** se l'indirizzo del `lhs` è maggiore o uguale all'indirizzo di `rhs`, **false** in caso contrario.  
  
### <a name="remarks"></a>Note  
 Questo operatore viene utilizzato l'indirizzo di `CSid` oggetto o `SID` struttura ed è implementato per garantire la compatibilità con le classi di raccolta della libreria Standard C++.




