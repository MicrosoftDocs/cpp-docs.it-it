---
title: Struttura CDaoParameterInfo
ms.date: 09/17/2019
f1_keywords:
- CDaoParameterInfo
helpviewer_keywords:
- CDaoParameterInfo structure [MFC]
- DAO (Data Access Objects), Parameters collection
ms.assetid: 45fd53cd-cb84-4e12-b48d-7f2979f898ad
ms.openlocfilehash: 6d594bbeec34e400eb074c136e3467e78b35c4ee
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368972"
---
# <a name="cdaoparameterinfo-structure"></a>Struttura CDaoParameterInfo

La `CDaoParameterInfo` struttura contiene informazioni su un oggetto parametro definito per gli oggetti DAO (Data Access Objects). DAO 3.6 è la versione finale ed è considerata obsoleta.

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
Assegna un nome univoco all'oggetto parametro. Per ulteriori informazioni, vedere l'argomento "Proprietà Name" nella Guida in linea di DAO.

*m_nType*<br/>
Valore che indica il tipo di dati di un oggetto parametro. Per un elenco dei valori possibili, vedere il *m_nType* membro del [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) struttura. Per ulteriori informazioni, vedere l'argomento "Proprietà Type" nella Guida in linea di DAO.

*m_varValue*<br/>
Valore del parametro, archiviato in un [COleVariant](../../mfc/reference/colevariant-class.md) oggetto.

## <a name="remarks"></a>Osservazioni

I riferimenti a Primary e Secondary precedente indicano come le informazioni `CDaoQueryDef`vengono restituite dalla funzione membro [GetParameterInfo](../../mfc/reference/cdaoquerydef-class.md#getparameterinfo) nella classe .

MFC non incapsula oggetti parametro DAO in una classe. Gli oggetti DOO `CDaoQueryDef` querydef sottostanti oggetti MFC archiviano i parametri nei relativi oggetti. Per accedere agli oggetti parametro in un [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) `GetParameterInfo` oggetto, chiamare la funzione membro dell'oggetto querydef per un particolare nome di parametro o un indice nel Parameters insieme. È possibile utilizzare la funzione membro [CDaoQueryDef::GetParameterCount](../../mfc/reference/cdaoquerydef-class.md#getparametercount) in combinazione con `GetParameterInfo` per scorrere l'insieme Parameters.

Le informazioni recuperate dalla funzione membro [CDaoQueryDef::GetParameterInfo](../../mfc/reference/cdaoquerydef-class.md#getparameterinfo) vengono archiviate in una `CDaoParameterInfo` struttura. Chiamare `GetParameterInfo` per l'oggetto querydef nella raccolta Parameters dell'oggetto parametro.

> [!NOTE]
> Se si desidera ottenere o impostare solo il valore di un parametro, `CDaoRecordset`utilizzare le funzioni membro [GetParamValue](../../mfc/reference/cdaorecordset-class.md#getparamvalue) e [SetParamValue](../../mfc/reference/cdaorecordset-class.md#setparamvalue) della classe .

`CDaoParameterInfo`definisce anche `Dump` una funzione membro nelle build di debug. È possibile `Dump` utilizzare per eseguire `CDaoParameterInfo` il dump del contenuto di un oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdao.h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[Classe CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md)
