---
title: 'Classe platform:: Exception | Microsoft Docs'
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Exception::Exception
- VCCORLIB/Platform::Exception::CreateException
- VCCORLIB/Platform::Exception::HResult
- VCCORLIB/Platform::Exception::Message
dev_langs:
- C++
helpviewer_keywords:
- Platform::Exception Class
ms.assetid: ca1d5a67-3a5a-48fe-8099-f9c38a2d2dce
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6774aa0d90e9903798cd2a77a480782b669fdc57
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43758768"
---
# <a name="platformexception-class"></a>Platform::Exception (classe)
Rappresenta gli errori che si verificano durante l'esecuzione dell'applicazione. Le classi di eccezione personalizzate non possono essere derivate da `Platform::Exception`. Se devi utilizzare un'eccezione personalizzata, puoi utilizzare `Platform::COMException` e specificare un valore HRESULT specifico dell'applicazione.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
public ref class Exception : Object,    IException,    IPrintable,    IEquatable  
```  
  
### <a name="members"></a>Membri  
 La classe `Exception` eredita dalla classe `Object` e dalle interfacce `IException`, `IPrintable`e `IEquatable` .  
  
 La classe `Exception` dispone dei seguenti generi di membri.  
  
### <a name="constructors"></a>Costruttori  
  
|Membro|Descrizione|  
|------------|-----------------|  
|[Exception:: Exception](#ctor)|Inizializza una nuova istanza della classe `Exception`.|  
  
### <a name="methods"></a>Metodi  
 La classe `Exception` eredita i metodi `Equals()`, `Finalize()`,`GetHashCode()`,`GetType()`,`MemberwiseClose()`e `ToString()` da [Platform::Object Class](../cppcx/platform-object-class.md). La classe `Exception` include anche il metodo seguente.  
  
|Member|Descrizione|  
|------------|-----------------|  
|[Exception:: CreateException](#createexception)|Crea un'eccezione che rappresenta il valore HRESULT specificato.|  
  
### <a name="properties"></a>Proprietà  
 La classe Exception presenta inoltre le proprietà seguenti.  
  
|Member|Descrizione|  
|------------|-----------------|  
|[Exception:: HRESULT](#hresult)|Valore HRESULT corrispondente all'eccezione.|  
|[Exception:: Message](#message)|Messaggio in cui viene descritta l'eccezione. Questo valore è di sola lettura e non può essere modificato una volta costruito `Exception` .|  
  
### <a name="requirements"></a>Requisiti  
 **Client minimo supportato:** Windows 8  
  
 **Server minimo supportato:** Windows Server 2012  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  

## <a name="createexception"></a> Metodo Exception:: CreateException
Crea Platform::Exception^ da un valore HRESULT specificato.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
Exception^ CreateException(int32 hr)  
Exception^ CreateException(int32 hr, Platform::String^ message)  
```  
  
### <a name="parameters"></a>Parametri  
 hr  
 Valore HRESULT che in genere si ottiene da una chiamata a un metodo COM. Se il valore è 0, che è uguale a S_OK, questo metodo genera un'eccezione [platform:: InvalidArgumentException](../cppcx/platform-invalidargumentexception-class.md) perché i metodi COM con esito positivo non devono generare eccezioni.  
  
 messaggio  
 Stringa che descrive l'errore.  
  
### <a name="return-value"></a>Valore restituito  
 Eccezione che rappresenta il valore HRESULT dell'errore.  
  
### <a name="remarks"></a>Note  
 Utilizza questo metodo per creare un'eccezione da un valore HRESULT restituito, ad esempio, da una chiamata a un metodo di un'interfaccia COM. Puoi utilizzare l'overload che accetta un parametro String^ per fornire un messaggio personalizzato.  
  
 È fortemente consigliabile utilizzare CreateException per creare un'eccezione fortemente tipizzata, anziché creare un [platform:: COMException](../cppcx/platform-comexception-class.md) che contiene solo il valore HRESULT.  
  


## <a name="ctor"></a>  Costruttore Exception:: Exception
Inizializza una nuova istanza della classe Exception.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
  
Exception(int32 hresult)  
Exception(int32 hresult, ::Platform::String^ message)  
```  
  
### <a name="parameters"></a>Parametri  
 `hresult`  
 Errore HRESULT rappresentato dall'eccezione.  
  
 `message`  
 Messaggio specifico dell'utente, ad esempio del testo prescrittivo, associato all'eccezione. In genere dovresti preferire il secondo overload per fornire un messaggio descrittivo che sia il più possibile specifico su come e perché si è verificato l'errore.  
  


## <a name="hresult"></a>  Proprietà Exception:: HRESULT
Valore HRESULT corrispondente all'eccezione.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
public:property int HResult {    int get();}  
```  
  
## <a name="property-value"></a>Valore proprietà  
 Valore HRESULT.  
  
### <a name="remarks"></a>Note  
 La maggior parte delle eccezioni inizia come errori COM, che vengono restituiti come valori HRESULT. C++/CX converte questi valori in oggetti Platform::Exception^ e la proprietà archivia il valore del codice di errore originale.  
  


## <a name="message"></a> Proprietà Exception:: Message
Messaggio in cui viene descritto l'errore.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
public:property String^ Message;  
```  
  
## <a name="property-value"></a>Valore proprietà  
 Nelle eccezioni originate da Windows Runtime, si tratta di una descrizione dell'errore fornita dal sistema.  
  
### <a name="remarks"></a>Note  
 In Windows 8, questa proprietà è di sola lettura poiché le eccezioni in tale versione di Windows Runtime vengono trasportate tramite ABI solo come HRESULT. In Windows 8.1 e versioni successive le informazioni sull'eccezione più dettagliate viene trasportate tramite ABI ed puoi fornire un messaggio personalizzato a cui altri componenti possono accedere a livello di codice. Per altre informazioni, vedere [eccezioni (C + c++ /CX)](../cppcx/exceptions-c-cx.md).  
  

  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)