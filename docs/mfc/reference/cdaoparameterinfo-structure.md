---
title: Struttura CDaoParameterInfo
ms.date: 11/04/2016
f1_keywords:
- CDaoParameterInfo
helpviewer_keywords:
- CDaoParameterInfo structure [MFC]
- DAO (Data Access Objects), Parameters collection
ms.assetid: 45fd53cd-cb84-4e12-b48d-7f2979f898ad
ms.openlocfilehash: 62addd44f8aa8fceafef6a27244994a2ec6b766b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62399785"
---
# <a name="cdaoparameterinfo-structure"></a>Struttura CDaoParameterInfo

Il `CDaoParameterInfo` struttura contiene informazioni su un oggetto di parametro definito per data access Object (DAO).

## <a name="syntax"></a>Sintassi

```
struct CDaoParameterInfo
{
    CString m_strName;       // Primary
    short m_nType;           // Primary
    ColeVariant m_varValue;  // Secondary
};
```

#### <a name="parameters"></a>Parametri

*m_strName*<br/>
Identifica in modo univoco l'oggetto parametro. Per altre informazioni, vedere l'argomento "Proprietà di nome" nella Guida di DAO.

*m_nType*<br/>
Un valore che indica il tipo di dati di un oggetto parametro. Per un elenco dei valori possibili, vedere la *m_nType* membro delle [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) struttura. Per altre informazioni, vedere l'argomento "Proprietà di tipo" nella Guida di DAO.

*m_varValue*<br/>
Il valore del parametro, archiviato una [COleVariant](../../mfc/reference/colevariant-class.md) oggetto.

## <a name="remarks"></a>Note

I riferimenti al database primario e secondario precedente indicano la modalità in cui vengono restituite le informazioni per il [GetParameterInfo](../../mfc/reference/cdaoquerydef-class.md#getparameterinfo) funzione di membro nella classe `CDaoQueryDef`.

MFC non include gli oggetti parametro DAO in una classe. DAO querydef oggetti MFC sottostante `CDaoQueryDef` oggetti archiviano i parametri nella proprie raccolte di parametri. Per accedere agli oggetti parametro in una [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) dell'oggetto, chiamare l'oggetto di querydef `GetParameterInfo` funzione membro per un nome di parametro specifico o un indice nella raccolta di parametri. È possibile usare la [CDaoQueryDef::GetParameterCount](../../mfc/reference/cdaoquerydef-class.md#getparametercount) funzione di membro in combinazione con `GetParameterInfo` a ciclo continuo l'insieme di parametri.

Le informazioni recuperate dal [CDaoQueryDef::GetParameterInfo](../../mfc/reference/cdaoquerydef-class.md#getparameterinfo) le funzioni membro vengono archiviate un `CDaoParameterInfo` struttura. Chiamare `GetParameterInfo` per l'oggetto querydef, in cui raccolta di parametri è archiviato l'oggetto parametro.

> [!NOTE]
>  Se si desidera ottenere o impostare solo il valore di un parametro, usare il [GetParamValue](../../mfc/reference/cdaorecordset-class.md#getparamvalue) e [SetParamValue](../../mfc/reference/cdaorecordset-class.md#setparamvalue) funzioni membro della classe `CDaoRecordset`.

`CDaoParameterInfo` definisce inoltre un `Dump` compila la funzione membro in modalità debug. È possibile usare `Dump` per scaricare il contenuto di un `CDaoParameterInfo` oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdao. h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[Classe CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md)
