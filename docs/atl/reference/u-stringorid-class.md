---
title: Classe _U_STRINGorID
ms.date: 11/04/2016
f1_keywords:
- ATL._U_STRINGorID
- ATL::_U_STRINGorID
- _U_STRINGorID
helpviewer_keywords:
- _U_STRINGorID class
- U_STRINGorID class
ms.assetid: 443cdc00-d265-4b27-8ef3-2feb95f3e5e3
ms.openlocfilehash: 4e46ceec077b8daf8ef2a76110d2fc19dd39ae26
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81325820"
---
# <a name="_u_stringorid-class"></a>Classe _U_STRINGorID

Questa classe di adattatori di argomento consente di passare a una funzione i nomi delle risorse (LPCTST) o gli ID di risorsa a una funzione senza richiedere al chiamante di convertire l'ID in una stringa utilizzando la macro MAKEINTRESOURCE.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

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

## <a name="remarks"></a>Osservazioni

Questa classe è progettata per l'implementazione di wrapper per l'API di gestione delle risorse di Windows, ad esempio le funzioni [FindResource](/windows/win32/api/winbase/nf-winbase-findresourcea), [LoadIcon](/windows/win32/api/winuser/nf-winuser-loadiconw)e [LoadMenu](/windows/win32/api/winuser/nf-winuser-loadmenuw) , che accettano un argomento LPCTSTR che può essere il nome di una risorsa o il relativo ID.

La classe definisce due overload del costruttore: uno accetta un argomento LPCTSTR e l'altro accetta un argomento UINT. L'argomento UINT viene convertito in un tipo di risorsa compatibile con le funzioni di gestione delle risorse di Windows utilizzando la macro MAKEINTRESOURCE e il risultato viene memorizzato nel singolo membro dati della classe, [m_lpstr](#_u_stringorid__m_lpstr). L'argomento per il costruttore LPCTSTR viene archiviato direttamente senza conversione.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin.h

## <a name="_u_stringoridm_lpstr"></a><a name="_u_stringorid__m_lpstr"></a>_U_STRINGorID::m_lpstr

La classe contiene il valore passato a uno dei relativi costruttori come membro dati LPCTSTR pubblico.

```
LPCTSTR m_lpstr;
```

## <a name="_u_stringorid_u_stringorid"></a><a name="_u_stringorid___u_stringorid"></a>_U_STRINGorID::_U_STRINGorID

Il costruttore UINT converte il proprio argomento in un tipo di risorsa compatibile con le funzioni di gestione delle risorse di Windows utilizzando la macro MAKEINTRESOURCE e il risultato viene archiviato nel singolo membro dati della classe, [m_lpstr](#_u_stringorid__m_lpstr).

```
_U_STRINGorID(UINT nID);
_U_STRINGorID(LPCTSTR lpString);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
Un ID risorsa.

*lpStringa*<br/>
Un nome di risorsa.

### <a name="remarks"></a>Osservazioni

L'argomento per il costruttore LPCTSTR viene archiviato direttamente senza conversione.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
