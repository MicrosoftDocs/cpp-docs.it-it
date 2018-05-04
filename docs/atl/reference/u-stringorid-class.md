---
title: Classe _U_STRINGorID | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- ATL._U_STRINGorID
- ATL::_U_STRINGorID
- _U_STRINGorID
dev_langs:
- C++
helpviewer_keywords:
- _U_STRINGorID class
- U_STRINGorID class
ms.assetid: 443cdc00-d265-4b27-8ef3-2feb95f3e5e3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2a601b1c64b28681c13a0b9e8f42156d8820cb4b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="ustringorid-class"></a>Classe _U_STRINGorID
Classe di adattatori di questo argomento consente di entrambi i nomi delle risorse ( `LPCTSTR`s) o l'ID di risorsa ( **UINT**s) deve essere passato a una funzione senza richiedere al chiamante di convertire l'ID di una stringa usando il **MAKEINTRESOURCE** (macro).  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class _U_STRINGorID
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[_U_STRINGorID::_U_STRINGorID](#_u_stringorid___u_stringorid)|Costruttore.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[_U_STRINGorID::m_lpstr](#_u_stringorid__m_lpstr)|Identificatore della risorsa.|  
  
## <a name="remarks"></a>Note  
 Questa classe è progettata per l'implementazione di wrapper per l'API di gestione di risorse Windows, ad esempio il [FindResource](http://msdn.microsoft.com/library/windows/desktop/ms648042), [LoadIcon](http://msdn.microsoft.com/library/windows/desktop/ms648072), e [LoadMenu](http://msdn.microsoft.com/library/windows/desktop/ms647990) funzioni che accettano un `LPCTSTR` argomento che può essere il nome di una risorsa o al relativo ID.  
  
 La classe definisce due overload del costruttore: uno accetta un `LPCTSTR` argomento e l'altro accetta un **UINT** argomento. Il **UINT** argomento sarà convertito in un tipo di risorsa compatibile con le funzioni di gestione delle risorse di Windows utilizzando il **MAKEINTRESOURCE** (macro) e il risultato memorizzato nel membro dati della classe, [m_lpstr](#_u_stringorid__m_lpstr). L'argomento di `LPCTSTR` costruttore verrà archiviato direttamente senza conversione.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
  
##  <a name="_u_stringorid__m_lpstr"></a>  _U_STRINGorID::m_lpstr  
 La classe contiene il valore passato a uno dei suoi costruttori come pubblica `LPCTSTR` (membro dati).  
  
```
LPCTSTR m_lpstr;
```  
  
##  <a name="_u_stringorid___u_stringorid"></a>  _U_STRINGorID::_U_STRINGorID  
 Il **UINT** costruttore converte il relativo argomento a un tipo di risorsa compatibile con le funzioni di gestione delle risorse di Windows utilizzando il **MAKEINTRESOURCE** (macro) e il risultato viene archiviato in unica della classe membro dati [m_lpstr](#_u_stringorid__m_lpstr).  
  
```
_U_STRINGorID(UINT nID);  
_U_STRINGorID(LPCTSTR lpString);
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 Un ID risorsa.  
  
 `lpString`  
 Un nome di risorsa.  
  
### <a name="remarks"></a>Note  
 L'argomento di `LPCTSTR` costruttore verrà archiviato direttamente senza conversione.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
