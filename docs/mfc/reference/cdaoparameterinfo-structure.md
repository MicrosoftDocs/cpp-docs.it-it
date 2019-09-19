---
title: Struttura CDaoParameterInfo
ms.date: 09/17/2019
f1_keywords:
- CDaoParameterInfo
helpviewer_keywords:
- CDaoParameterInfo structure [MFC]
- DAO (Data Access Objects), Parameters collection
ms.assetid: 45fd53cd-cb84-4e12-b48d-7f2979f898ad
ms.openlocfilehash: 4f0ee7ebe1d5d4eff50194c2d5c5cccf8f373c61
ms.sourcegitcommit: 2f96e2fda591d7b1b28842b2ea24e6297bcc3622
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2019
ms.locfileid: "71096072"
---
# <a name="cdaoparameterinfo-structure"></a>Struttura CDaoParameterInfo

La `CDaoParameterInfo` struttura contiene informazioni su un oggetto Parameter definito per DAO (Data Access Objects).
DAO 3,6 è la versione finale ed è considerata obsoleta.


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
Denomina in modo univoco l'oggetto Parameter. Per ulteriori informazioni, vedere l'argomento relativo alla proprietà Name nella Guida di DAO.

*m_nType*<br/>
Valore che indica il tipo di dati di un oggetto Parameter. Per un elenco dei valori possibili, vedere il membro *m_nType* della struttura [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) . Per ulteriori informazioni, vedere l'argomento relativo alla proprietà Type nella Guida di DAO.

*m_varValue*<br/>
Valore del parametro archiviato in un oggetto [COleVariant](../../mfc/reference/colevariant-class.md) .

## <a name="remarks"></a>Note

I riferimenti a primary e Secondary sopra indicati indicano il modo in cui le informazioni vengono restituite dalla funzione membro `CDaoQueryDef` [GetParameterInfo](../../mfc/reference/cdaoquerydef-class.md#getparameterinfo) nella classe.

MFC non incapsula oggetti parametro DAO in una classe. Gli oggetti QueryDef DAO sottostanti oggetti MFC `CDaoQueryDef` archiviano i parametri nelle raccolte di parametri. Per accedere agli oggetti Parameter in un oggetto [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) , chiamare la funzione `GetParameterInfo` membro dell'oggetto QueryDef per un nome di parametro o un indice specifico nella raccolta Parameters. È possibile usare la funzione membro [CDaoQueryDef:: GetParameterCount](../../mfc/reference/cdaoquerydef-class.md#getparametercount) insieme `GetParameterInfo` a per eseguire un ciclo nella raccolta Parameters.

Le informazioni recuperate dalla funzione membro [CDaoQueryDef:: GetParameterInfo](../../mfc/reference/cdaoquerydef-class.md#getparameterinfo) sono archiviate `CDaoParameterInfo` in una struttura. Chiamare `GetParameterInfo` per l'oggetto QueryDef nella cui raccolta Parameters è archiviato l'oggetto Parameter.

> [!NOTE]
>  Se si desidera ottenere o impostare solo il valore di un parametro, utilizzare le funzioni membro [GetParamValue](../../mfc/reference/cdaorecordset-class.md#getparamvalue) e [SetParamValue](../../mfc/reference/cdaorecordset-class.md#setparamvalue) della classe `CDaoRecordset`.

`CDaoParameterInfo`definisce inoltre una `Dump` funzione membro nelle compilazioni di debug. È possibile utilizzare `Dump` per eseguire il dump del contenuto `CDaoParameterInfo` di un oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[Classe CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md)
