---
title: SET_PARAM_TYPE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- SET_PARAM_TYPE
dev_langs:
- C++
helpviewer_keywords:
- SET_PARAM_TYPE macro
ms.assetid: 85979070-2d55-4c67-94b1-9b9058babc59
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 9ab4884032425f13c2cc506d6e66c955eb439f7d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="setparamtype"></a>SET_PARAM_TYPE
Specifica le macro `COLUMN_ENTRY` che seguono la macro `SET_PARAM_TYPE` input, output o input/output.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
SET_PARAM_TYPE(type)  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `type`  
 [in] Tipo da impostare per il parametro.  
  
## <a name="remarks"></a>Note  
 I provider supportano solo i tipi di parametro input/output supportati dall'origine dati sottostante. Il tipo è una combinazione di uno o più valori **DBPARAMIO** . Vedere [Strutture DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx) in *OLE DB Programmer's Reference*(Guida di riferimento per programmatori OLE DB):  
  
-   **DBPARAMIO_NOTPARAM** La funzione di accesso non dispone di parametri. In genere si imposta **eParamIO** su questo valore nelle funzioni di accesso alla riga, per ricordare all'utente che i parametri vengono ignorati.  
  
-   **DBPARAMIO_INPUT** Parametro di input.  
  
-   **DBPARAMIO_OUTPUT** Parametro di output.  
  
-   **DBPARAMIO_INPUT &#124; DBPARAMIO_OUTPUT** il parametro è sia un parametro di input e output.  
  
## <a name="example"></a>Esempio  
```
cpp  
class CArtistsProperty
{
public:
   short m_nReturn;
   short m_nAge;
   TCHAR m_szFirstName[21];
   TCHAR m_szLastName[31];

BEGIN_PARAM_MAP(CArtistsProperty)
   SET_PARAM_TYPE(DBPARAMIO_OUTPUT)
   COLUMN_ENTRY(1, m_nReturn)
   SET_PARAM_TYPE(DBPARAMIO_INPUT)
   COLUMN_ENTRY(2, m_nAge)
END_PARAM_MAP()

BEGIN_COLUMN_MAP(CArtistsProperty)
   COLUMN_ENTRY(1, m_szFirstName)
   COLUMN_ENTRY(2, m_szLastName)
END_COLUMN_MAP()

   HRESULT OpenDataSource()
   {
      CDataSource _db;
      _db.Open();
      return m_session.Open(_db);
   }

   void CloseDataSource()
   {
      m_session.Close();
   }

   CSession m_session;

   DEFINE_COMMAND_EX(CArtistsProperty, L" \
      { ? = SELECT Age FROM Artists WHERE Age < ? }")
};
``` 
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)