---
title: Classe wstring_convert | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- wstring/stdext::cvt::wstring_convert
- locale/std::wstring_convert::byte_string
- locale/std::wstring_convert::wide_string
- locale/std::wstring_convert::state_type
- locale/std::wstring_convert::int_type
- locale/std::wstring_convert::from_bytes
- locale/std::wstring_convert::to_bytes
- locale/std::wstring_convert::converted
- locale/std::wstring_convert::state
dev_langs: C++
helpviewer_keywords:
- stdext::cvt [C++], wstring_convert
- std::wstring_convert [C++], byte_string
- std::wstring_convert [C++], wide_string
- std::wstring_convert [C++], state_type
- std::wstring_convert [C++], int_type
- std::wstring_convert [C++], from_bytes
- std::wstring_convert [C++], to_bytes
- std::wstring_convert [C++], converted
- std::wstring_convert [C++], state
ms.assetid: e34f5b65-d572-4bdc-ac69-20778712e376
caps.latest.revision: "25"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7753e2be6699bc789417d8afe9e9f49e55af7010
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="wstringconvert-class"></a>Classe wstring_convert
La classe modello `wstring_convert` esegue le conversioni tra una stringa di caratteri "wide" e una stringa di byte.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Codecvt, class Elem = wchar_t>
class wstring_convert
```  
  
#### <a name="parameters"></a>Parametri  
 Codecvt  
 Facet delle [impostazioni locali](../standard-library/locale-class.md) che rappresenta l'oggetto di conversione.  
  
 Elem  
 Tipo di elemento a caratteri "wide".  
  
## <a name="remarks"></a>Note  
 La classe modello descrive un oggetto che controlla le conversioni tra gli oggetti stringa di caratteri estesi della classe `std::basic_string<Elem>` e gli oggetti stringa di byte della classe `std::basic_string<char>` (nota anche come `std::string`). La classe modello definisce i tipi `wide_string` e `byte_string` come sinonimi per questi due tipi. La conversione tra una sequenza di valori `Elem` (archiviati in un oggetto `wide_string`) e sequenze multibyte (archiviate in un oggetto `byte_string`) viene eseguita da un oggetto della classe `Codecvt<Elem, char, std::mbstate_t>`, che soddisfa i requisiti del facet standard di conversione del codice `std::codecvt<Elem, char, std::mbstate_t>`.  
  
 Un oggetto di questa classe modello archivia:  
  
-   Una stringa di byte da visualizzare in caso di errori  
  
-   Una stringa di caratteri "wide" da visualizzare in caso di errori  
  
-   Un puntatore all'oggetto di conversione allocato (che viene liberato quando viene eliminato definitivamente l'oggetto wbuffer_convert)  
  
-   Un oggetto conversion state di tipo [state_type](#state_type)  
  
-   Un conteggio delle conversioni  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[wstring_convert](#wstring_convert)|Costruisce un oggetto di tipo `wstring_convert`.|  
  
### <a name="typedefs"></a>Definizioni typedef  
  
|||  
|-|-|  
|[byte_string](#byte_string)|Tipo che rappresenta una stringa di tipo byte.|  
|[wide_string](#wide_string)|Tipo che rappresenta una stringa di tipo wide.|  
|[state_type](#state_type)|Tipo che rappresenta lo stato della conversione.|  
|[int_type](#int_type)|Tipo che rappresenta un Integer.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[from_bytes](#from_bytes)|Converte una stringa di byte in una stringa di caratteri "wide".|  
|[to_bytes](#to_bytes)|Converte una stringa di caratteri "wide" in una stringa di byte.|  
|[converted](#converted)|Restituisce il numero di conversioni riuscite.|  
|[state](#state)|Restituisce un oggetto che rappresenta lo stato della conversione.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<locale>  
  
 **Spazio dei nomi:** std  
  
##  <a name="byte_string"></a>  wstring_convert::byte_string  
 Tipo che rappresenta una stringa di tipo byte.  
  
```
typedef std::basic_string<char> byte_string;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è sinonimo di `std::basic_string<char>`.  
  
##  <a name="converted"></a>  wstring_convert::converted  
 Restituisce il numero di conversioni riuscite.  
  
```
size_t converted() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di conversioni riuscite.  
  
### <a name="remarks"></a>Note  
 Il numero di conversioni riuscite viene archiviato nell'oggetto del conteggio di conversione.  
  
##  <a name="from_bytes"></a>  wstring_convert::from_bytes  
 Converte una stringa di byte in una stringa di caratteri "wide".  
  
```
wide_string from_bytes(char Byte);
wide_string from_bytes(const char* ptr);
wide_string from_bytes(const byte_string& Bstr);
wide_string from_bytes(const char* first, const char* last);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Byte`|Sequenza di byte a elemento singolo da convertire.|  
|`ptr`|Sequenza di caratteri con terminazione Null di tipo C da convertire.|  
|`Bstr`|Oggetto [byte_string](#byte_string) da convertire.|  
|`first`|Il primo carattere in un intervallo di caratteri da convertire.|  
|`last`|L'ultimo carattere in un intervallo di caratteri da convertire.|  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto stringa di caratteri "wide" risultante dalla conversione.  
  
### <a name="remarks"></a>Note  
 Se l'oggetto [conversion state](../standard-library/wstring-convert-class.md) non è stato costruito con un valore esplicito, viene impostato sul valore predefinito (lo stato iniziale della conversione) prima dell'inizio della conversione. In caso contrario, verrà lasciato invariato.  
  
 Il numero di elementi di input convertiti correttamente viene archiviato nell'oggetto conteggio di conversione. Se non si verificano errori di conversione, la funzione membro restituisce la stringa di caratteri "wide" convertita. In caso contrario, se l'oggetto è stato costruito con un inizializzatore per il messaggio di errore con stringa di caratteri "wide", la funzione membro restituisce l'oggetto messaggio di errore con stringa di caratteri "wide". In caso contrario, la funzione membro genera un oggetto della classe [range_error](../standard-library/range-error-class.md).  
  
##  <a name="int_type"></a>  wstring_convert::int_type  
 Tipo che rappresenta un Integer.  
  
```
typedef typename wide_string::traits_type::int_type int_type;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è sinonimo di `wide_string::traits_type::int_type`.  
  
##  <a name="state"></a>  wstring_convert::state  
 Restituisce un oggetto che rappresenta lo stato della conversione.  
  
```
state_type state() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [conversion state](../standard-library/wstring-convert-class.md) che rappresenta lo stato della conversione.  
  
### <a name="remarks"></a>Note  
  
##  <a name="state_type"></a>  wstring_convert::state_type  
 Tipo che rappresenta lo stato della conversione.  
  
```
typedef typename Codecvt::state_type state_type;
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un oggetto che può rappresentare uno stato di conversione. Il tipo è sinonimo di `Codecvt::state_type`.  
  
##  <a name="to_bytes"></a>  wstring_convert::to_bytes  
 Converte una stringa di caratteri "wide" in una stringa di byte.  
  
```
byte_string to_bytes(Elem Char);
byte_string to_bytes(const Elem* Wptr);
byte_string to_bytes(const wide_string& Wstr);
byte_string to_bytes(const Elem* first, const Elem* last);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Char`|Carattere wide da convertire.|  
|`Wptr`|Sequenza con terminazione Null di tipo C, che inizia da `wptr`, da convertire.|  
|`Wstr`|Oggetto [wide_string](#wide_string) da convertire.|  
|`first`|Primo elemento nell'intervallo di elementi da convertire.|  
|`last`|Ultimo elemento nell'intervallo di elementi da convertire.|  
  
### <a name="remarks"></a>Note  
 Se l'oggetto [conversion state](../standard-library/wstring-convert-class.md) non è stato costruito con un valore esplicito, viene impostato sul valore predefinito (lo stato iniziale della conversione) prima dell'inizio della conversione. In caso contrario, verrà lasciato invariato.  
  
 Il numero di elementi di input convertiti correttamente viene archiviato nell'oggetto conteggio di conversione. Se non si verificano errori di conversione, la funzione membro restituisce la stringa di byte convertita. In caso contrario, se l'oggetto è stato costruito con un inizializzatore per il messaggio di errore con stringa di byte, la funzione membro restituisce l'oggetto messaggio di errore con stringa di byte. In caso contrario, la funzione membro genera un oggetto della classe [range_error](../standard-library/range-error-class.md).  
  
##  <a name="wide_string"></a>  wstring_convert::wide_string  
 Tipo che rappresenta una stringa di tipo wide.  
  
```
typedef std::basic_string<Elem> wide_string;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è sinonimo di `std::basic_string<Elem>`.  
  
##  <a name="wstring_convert"></a>  wstring_convert::wstring_convert  
 Costruisce un oggetto di tipo `wstring_convert`.  
  
```
wstring_convert(Codecvt *Pcvt = new Codecvt);
wstring_convert(Codecvt *Pcvt, state_type _State);
wstring_convert(const byte_string& _Berr, const wide_string& Werr = wide_string());
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`*Pcvt`|Oggetto di tipo `Codecvt` per eseguire la conversione.|  
|`_State`|Oggetto di tipo [state_type](#state_type) che rappresenta lo stato della conversione.|  
|`_Berr`|L'oggetto [byte_string](#byte_string) da visualizzare in caso di errori.|  
|`Werr`|L'oggetto [wide_string](#wide_string) da visualizzare in caso di errori.|  
  
### <a name="remarks"></a>Note  
 Il primo costruttore archivia *Pcvt_arg* nell'[oggetto di conversione](../standard-library/wstring-convert-class.md)
