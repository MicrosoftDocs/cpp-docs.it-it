---
title: 'Classe di valori platform:: GUID | Documenti Microsoft'
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- VCCORLIB/Platform::Guid
dev_langs:
- C++
helpviewer_keywords:
- Platform::Guid Struct
ms.assetid: 25c0bfb2-7f93-44d8-bdf4-ef4fbac3424a
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c295138d6239ce516b4f322fb5fc479e2235a6be
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="platformguid-value-class"></a>Classe di valori Platform::Guid
Rappresenta un tipo [GUID](http://msdn.microsoft.com/library/windows/desktop/aa373931\(v=vs.85\).aspx) nel sistema di tipi di Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
public value struct Guid  
```  
  
### <a name="members"></a>Membri  
 Il GUID dispone dei metodi Equals(), GetHashCode() e ToString() derivati dalla [Platform::Object Class](../cppcx/platform-object-class.md)e del metodo GetTypeCode() derivato dalla [Platform::Type Class](../cppcx/platform-type-class.md). Il GUID dispone inoltre dei membri seguenti.  
  
|Member|Descrizione|  
|------------|-----------------|  
|[Guid](#ctor)|Inizializza una nuova istanza dello struct Guid.|  
|[operator==](#operator-equality)|Operatore di uguaglianza.|  
|[operator!=](#operator-not-equal)|Operatore di disuguaglianza.|  
|[operator()](#operator-call)|Converte Guid in GUID.|  
  
### <a name="remarks"></a>Note  
 Per un esempio di come generare un nuovo oggetto Platform::Guid tramite la funzione [CoCreateGuid](http://msdn.microsoft.com/library/windows/desktop/ms688568\(v=vs.85\).aspx)di Windows, vedere il post di blog relativo a [come generare un GUID per il componente WinRT](http://blogs.msdn.com/b/eternalcoding/archive/2013/03/25/winrt-component-how-to-generate-a-guid.aspx)  
  
### <a name="requirements"></a>Requisiti  
 **Client minimo supportato:** Windows 8  
  
 **Server minimo supportato:** Windows Server 2012  
  
 **Spazio dei nomi:** Platform  
  
 **Metadati:** platform.winmd  

 
## <a name="ctor"></a> Costruttori GUID:: GUID
Inizializza una nuova istanza di uno struct Guid.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
  
    Guid(  
        unsigned int a,   
        unsigned short b,   
        unsigned short c,   
        unsigned char d,   
        unsigned char e,   
        unsigned char f,   
        unsigned char g,   
        unsigned char h,   
        unsigned char i,   
        unsigned char j,   
        unsigned char k  );  
  
    Guid(GUID m);  
  
    Guid(  
        unsigned int a,   
        unsigned short b,   
        unsigned short c,   
        Array<unsigned char>^ n );  
```  
  
### <a name="parameters"></a>Parametri  
 `a`  
 Primi 4 byte del GUID.  
  
 `b`  
 I 2 byte successivi del GUID.  
  
 `c`  
 I 2 byte successivi del GUID.  
  
 `d`  
 Byte successivo del GUID.  
  
 `e`  
 Byte successivo del GUID.  
  
 `f`  
 Byte successivo del GUID.  
  
 `g`  
 Byte successivo del GUID.  
  
 `h`  
 Byte successivo del GUID.  
  
 `i`  
 Byte successivo del GUID.  
  
 `j`  
 Byte successivo del GUID.  
  
 `k`  
 Byte successivo del GUID.  
  
 `m`  
 GUID come definito.  
  
 `n`  
 Gli 8 byte rimanenti del GUID.  
  

## <a name="operator-equality"></a> GUID::operator = = (operatore)
Confronta due GUID.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
Platform::Guid::operator==  
```  
  
### <a name="return-value"></a>Valore restituito  
 True se due GUID sono uguali.

## <a name="operator-inequality"></a> GUID::operator! = (operatore)
Confronta due GUID.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
Platform::Guid::operator!=  
```  
  
### <a name="return-value"></a>Valore restituito  
 True se due GUID non sono uguali.



## <a name="operator-call"></a> Operatore GUID
Converte in modo implicito un [struttura GUID](http://msdn.microsoft.com/library/windows/desktop/aa373931\(v=vs.85\).aspx)GUID da un platform:: GUID.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
Platform::Guid operator()  
```  
  
### <a name="return-value"></a>Valore restituito  
 Struct Guid.  
  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)