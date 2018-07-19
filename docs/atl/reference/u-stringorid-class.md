---
title: Classe u_stringorid | Microsoft Docs
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
ms.openlocfilehash: 611fecad210b9297b6c7cd16c83dbd0c6c3e41a8
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37886167"
---
# <a name="ustringorid-class"></a>Classe u_stringorid
Classe dell'adattatore in questo argomento consente di eseguire i nomi delle risorse (LPCTSTRs) o gli ID delle risorse (UINTs) deve essere passato a una funzione senza la necessità di convertire l'ID in una stringa utilizzando la macro MAKEINTRESOURCE al chiamante.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.  
  
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
 Questa classe è progettata per l'implementazione del wrapper per le API di gestione risorse di Windows, ad esempio la [FindResource](http://msdn.microsoft.com/library/windows/desktop/ms648042), [LoadIcon](http://msdn.microsoft.com/library/windows/desktop/ms648072), e [LoadMenu](http://msdn.microsoft.com/library/windows/desktop/ms647990) funzioni che accettano un argomento LPCTSTR che potrebbe essere il nome di una risorsa o al relativo ID.  
  
 La classe definisce due overload del costruttore: uno accetta un argomento LPCTSTR e l'altro accetta un argomento UINT. L'argomento UINT viene convertito in un tipo di risorsa compatibile con le funzioni di gestione risorse di Windows usando la macro MAKEINTRESOURCE e il risultato archiviato nel membro dati della classe, [m_lpstr](#_u_stringorid__m_lpstr). L'argomento del costruttore LPCTSTR verrà archiviato direttamente, senza conversione.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
  
##  <a name="_u_stringorid__m_lpstr"></a>  _U_STRINGorID::m_lpstr  
 La classe contiene il valore passato a uno dei relativi costruttori come un membro di dati LPCTSTR pubblico.  
  
```
LPCTSTR m_lpstr;
```  
  
##  <a name="_u_stringorid___u_stringorid"></a>  _U_STRINGorID::_U_STRINGorID  
 Il costruttore UINT Converte l'argomento in un tipo di risorsa compatibile con le funzioni di gestione risorse di Windows utilizzando la macro MAKEINTRESOURCE e il risultato viene archiviato nel membro dati della classe, [m_lpstr](#_u_stringorid__m_lpstr).  
  
```
_U_STRINGorID(UINT nID);  
_U_STRINGorID(LPCTSTR lpString);
```  
  
### <a name="parameters"></a>Parametri  
 *nID*  
 Un ID risorsa.  
  
 *lpString*  
 Un nome di risorsa.  
  
### <a name="remarks"></a>Note  
 L'argomento del costruttore LPCTSTR verrà archiviato direttamente, senza conversione.  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica della classe](../../atl/atl-class-overview.md)
