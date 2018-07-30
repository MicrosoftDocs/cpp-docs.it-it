---
title: Classe CDataConnection | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL::CDataConnection
- ATL.CDataConnection
- CDataConnection
- CDataConnection.CDataConnection
- ATL.CDataConnection.CDataConnection
- CDataConnection::CDataConnection
- ATL::CDataConnection::CDataConnection
- CDataConnection.Copy
- ATL.CDataConnection.Copy
- ATL::CDataConnection::Copy
- CDataConnection::Copy
- CDataConnection.Open
- ATL.CDataConnection.Open
- CDataConnection::Open
- ATL::CDataConnection::Open
- CDataConnection.OpenNewSession
- ATL.CDataConnection.OpenNewSession
- ATL::CDataConnection::OpenNewSession
- OpenNewSession
- CDataConnection::OpenNewSession
- CDataConnection::operatorBOOL
- ATL::CDataConnection::operatorBOOL
- CDataConnection.operatorBOOL
- ATL.CDataConnection.operatorBOOL
- CDataConnection::operatorBOOL
- ATL::CDataConnection::operatorBOOL
- CDataConnection.operatorBOOL
- ATL.CDataConnection.operatorBOOL
- CDataSource&
- CDataConnection.operatorCDataSource&
- operatorCDataSource&
- CDataConnection::operatorCDataSource&
- CDataSource*
- CDataConnection::operatorCDataSource*
- CDataConnection.operatorCDataSource*
- operatorCDataSource*
- CSession&
- CDataConnection::operatorCSession&
- CDataConnection.operatorCSession&
- operatorCSession&
- CDataConnection.operatorCSession*
- CDataConnection::operatorCSession*
- operatorCSession*
- CSession*
dev_langs:
- C++
helpviewer_keywords:
- CDataConnection class
- CDataConnection class, constructor
- Copy method
- Open method
- OpenNewSession method
- BOOL operator
- operator bool
- BOOL operator
- operator bool
- CDataSource& operator
- operator & (CDataSource)
- CDataSource* operator
- operator * (CDataSource)
- operator CSession&
- CSession& operator
- operator CSession*
- CSession* operator
ms.assetid: 77432d85-4e20-49ec-a0b0-142137828471
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 64e7973c1a818b51173fd4f44458266c10053710
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39338259"
---
# <a name="cdataconnection-class"></a>Classe CDataConnection
Gestisce la connessione con l'origine dati.  
  
## <a name="syntax"></a>Sintassi

```cpp
class CDataConnection  
```  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h 

## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[CDataConnection](#cdataconnection)|Costruttore. Crea e Inizializza un `CDataConnection` oggetto.|  
|[Copia](#copy)|Crea una copia di una connessione dati esistente.|  
|[Apri](#open)|Apre una connessione a un'origine dati tramite una stringa di inizializzazione.|  
|[OpenNewSession](#opennewsession)|Apre una nuova sessione nella connessione corrente.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator BOOL](#op_bool)|Determina se la sessione corrente è open o No.|  
|[operator bool](#op_bool_ole)|Determina se la sessione corrente è open o No.|  
|[operator CDataSource &](#op_cdata_amp)|Restituisce un riferimento all'oggetto contenuto `CDataSource` oggetto.|  
|[operator CDataSource *](#op_cdata_star)|Restituisce un puntatore all'oggetto `CDataSource` contenuto.|  
|[operatore CSession &](#op_csession_amp)|Restituisce un riferimento all'oggetto contenuto `CSession` oggetto.|  
|[operatore CSession *](#op_csession_star)|Restituisce un puntatore all'oggetto `CSession` contenuto.|  
  
## <a name="remarks"></a>Note  
 `CDataConnection` è una classe utile per la creazione di client perché incapsula gli oggetti necessari (origine dati e sessione) e alcune operazioni da eseguire quando ci si connette a un'origine dati  
  
 Senza `CDataConnection`, è necessario creare un `CDataSource` dell'oggetto, chiamare relativo [OpenFromInitializationString](../../data/oledb/cdatasource-openfrominitializationstring.md) metodo, quindi creare un'istanza di un [CSession](../../data/oledb/csession-class.md) dell'oggetto, chiamare relativo [ Aprire](../../data/oledb/csession-open.md) metodo, quindi creare un [CCommand](../../data/oledb/ccommand-class.md) oggetto e chiamare relativo `Open`* metodi.  
  
 Con `CDataConnection`, è sufficiente creare un oggetto di connessione, passare una stringa di inizializzazione, quindi usare tale connessione per aprire i comandi. Se si prevede di usare più volte la connessione al database, è consigliabile tenere aperta, la connessione e `CDataConnection` fornisce un modo pratico per eseguire questa operazione.  
  
> [!NOTE]
>  Se si sta creando un'applicazione di database che deve gestire più sessioni, è necessario usare [OpenNewSession](../../data/oledb/cdataconnection-opennewsession.md).  

## <a name="#cdataconnection"></a> CDataConnection:: CDataConnection
Crea e Inizializza un `CDataConnection` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
CDataConnection();   
CDataConnection(const CDataConnection &ds);  
```  
  
#### <a name="parameters"></a>Parametri  
 *dominio Active Directory*  
 [in] Un riferimento a una connessione dati esistente.  
  
### <a name="remarks"></a>Note  
 Il primo override crea un nuovo `CDataConnection` oggetto con le impostazioni predefinite.  
  
 Il secondo override crea un nuovo `CDataConnection` oggetto con le impostazioni equivalenti all'oggetto connessione dati è specificato. 

## <a name="#copy"></a> CDataConnection:: Copy
Crea una copia di una connessione dati esistente.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
CDataConnection& Copy(const CDataConnection & ds) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 *dominio Active Directory*  
 [in] Un riferimento a una connessione dati esistente da copiare. 

## <a name="#open"></a> CDataConnection:: Open
Apre una connessione a un'origine dati tramite una stringa di inizializzazione.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT Open(LPCOLESTR szInitString) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 *szInitString*  
 [in] Stringa di inizializzazione per l'origine dati.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  

## <a name="#opennewsession"></a> CDataConnection:: Opennewsession
Apre una nuova sessione con l'origine dati dell'oggetto connessione corrente.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT OpenNewSession(CSession & session) throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 *Sessione*  
 [in/out] Un riferimento all'oggetto nuova sessione.  
  
### <a name="remarks"></a>Note  
 La nuova sessione utilizza l'oggetto origine dati in essi contenuti dell'oggetto connessione corrente come elemento padre e possa accedere a tutte le stesse informazioni di origine dati.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  

## <a name="op_bool"></a> CDataConnection:: operator BOOL
Determina se la sessione corrente è open o No.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
operator BOOL() throw();  
```  
  
### <a name="remarks"></a>Note  
 Restituisce **BOOL** valore (typedef MFC). **TRUE** significa che la sessione corrente è aperta; **FALSE** significa che la sessione corrente è chiusa. 

## <a name="op_bool_ole"></a> CDataConnection:: operator bool (OLE DB)
Determina se la sessione corrente è open o No.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
operator bool() throw();  
```  
  
### <a name="remarks"></a>Note  
 Restituisce un **bool** valore (tipo di dati C++). **true** significa che la sessione corrente è aperta; **false** significa che la sessione corrente è chiusa.  

## <a name="op_cdata_amp"></a> CDataConnection:: operator CDataSource&amp;
Restituisce un riferimento all'oggetto contenuto `CDataSource` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
operator const CDataSource&() throw();  
```  
  
### <a name="remarks"></a>Note  
 Questo operatore restituisce un riferimento all'oggetto contenuto `CDataSource` oggetti, che consente di passare un `CDataConnection` oggetto in cui un `CDataSource` riferimento è previsto.  
  
### <a name="example"></a>Esempio  
 Se si dispone di una funzione (ad esempio `func` sotto) che accetta una `CDataSource` riferimento, è possibile usare `CDataSource&` per passare un `CDataConnection` invece dell'oggetto.  
  
 [!code-cpp[NVC_OLEDB_Consumer#3](../../data/oledb/codesnippet/cpp/cdataconnection-operator-cdatasource-amp_1.cpp)]  
  
 [!code-cpp[NVC_OLEDB_Consumer#4](../../data/oledb/codesnippet/cpp/cdataconnection-operator-cdatasource-amp_2.cpp)] 

## <a name="op_cdata_star"></a> CDataConnection:: operator CDataSource *
Restituisce un puntatore all'oggetto `CDataSource` contenuto.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
operator const CDataSource*() throw();  
```  
  
### <a name="remarks"></a>Note  
 Questo operatore restituisce un puntatore all'oggetto `CDataSource` contenuto, consentendo di passare un oggetto `CDataConnection` dove è previsto un puntatore `CDataSource`.  
  
 Visualizzare [operator CDataSource &](../../data/oledb/cdataconnection-operator-cdatasource-amp.md) per un esempio di utilizzo.  

## <a name="op_csession_amp"></a> CDataConnection:: operator CSession&amp;
Restituisce un riferimento all'oggetto contenuto `CSession` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
operator const CSession&();  
```  
  
### <a name="remarks"></a>Note  
 Questo operatore restituisce un riferimento all'oggetto contenuto `CSession` oggetti, che consente di passare un `CDataConnection` oggetto in cui un `CSession` riferimento è previsto.  
  
### <a name="example"></a>Esempio  
 Se si dispone di una funzione (ad esempio `func` sotto) che accetta una `CSession` riferimento, è possibile usare `CSession&` per passare un `CDataConnection` invece dell'oggetto.  
  
 [!code-cpp[NVC_OLEDB_Consumer#5](../../data/oledb/codesnippet/cpp/cdataconnection-operator-csession-amp_1.cpp)]  
  
 [!code-cpp[NVC_OLEDB_Consumer#6](../../data/oledb/codesnippet/cpp/cdataconnection-operator-csession-amp_2.cpp)]  

## <a name="op_csession_star"></a> CDataConnection:: operator CSession *
Restituisce un puntatore all'oggetto `CSession` contenuto.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
operator const CSession*() throw();  
```  
  
### <a name="remarks"></a>Note  
 Questo operatore restituisce un puntatore all'oggetto `CSession` contenuto, consentendo di passare un oggetto `CDataConnection` dove è previsto un puntatore `CSession`.  
  
### <a name="example"></a>Esempio  
 Visualizzare [operatore CSession &](../../data/oledb/cdataconnection-operator-csession-amp.md) per un esempio di utilizzo.  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)