---
title: Classe u_stringorid
ms.date: 11/04/2016
f1_keywords:
- ATL._U_STRINGorID
- ATL::_U_STRINGorID
- _U_STRINGorID
helpviewer_keywords:
- _U_STRINGorID class
- U_STRINGorID class
ms.assetid: 443cdc00-d265-4b27-8ef3-2feb95f3e5e3
ms.openlocfilehash: 4e6c086f9d2ff4061c6404444a3b4c61dd91fe1c
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57298997"
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

Questa classe è progettata per l'implementazione del wrapper per le API di gestione risorse di Windows, ad esempio la [FindResource](/windows/desktop/api/winbase/nf-winbase-findresourcea), [LoadIcon](/windows/desktop/api/winuser/nf-winuser-loadicona), e [LoadMenu](/windows/desktop/api/winuser/nf-winuser-loadmenua) funzioni che accettano un argomento LPCTSTR che potrebbe essere il nome di una risorsa o al relativo ID.

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

*nID*<br/>
Un ID risorsa.

*lpString*<br/>
Un nome di risorsa.

### <a name="remarks"></a>Note

L'argomento del costruttore LPCTSTR verrà archiviato direttamente, senza conversione.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
