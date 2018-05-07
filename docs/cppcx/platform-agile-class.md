---
title: 'Classe platform:: Agile | Documenti Microsoft'
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- AGILE/Platform::Platform
- AGILE/Platform::Platform::Agile::Agile
- AGILE/Platform::Platform::Agile::Get
- AGILE/Platform::Platform::Agile::GetAddressOf
- AGILE/Platform::Platform::Agile::GetAddressOfForInOut
- AGILE/Platform::Platform::Agile::Release
dev_langs:
- C++
helpviewer_keywords:
- Platform::Agile
ms.assetid: e34459a9-c429-4c79-97fd-030c43ca4155
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4d7d2299dd1395e93f4cd88cbeaec6c0b9467308
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="platformagile-class"></a>Classe Platform::Agile
Rappresenta un oggetto con MashalingBehavior=Standard come oggetto Agile, che riduce fortemente le probabilità che si verifichino eccezioni di threading di runtime. `Agile<T>` consente all'oggetto non Agile di chiamare o essere chiamato dallo stesso thread o da un thread differente. Per ulteriori informazioni, vedere [Threading e marshalling](../cppcx/threading-and-marshaling-c-cx.md).  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template <typename T>  
class Agile;  
```  
  
#### <a name="parameters"></a>Parametri  
 T  
 Typename per la classe non Agile.  
  
### <a name="remarks"></a>Note  
 La maggior parte delle classi nel Runtime di Windows sono agile. Un oggetto Agile può chiamare o essere chiamato da un oggetto in-process o out-of-process nello stesso thread o in uno differente. Se un oggetto non è Agile, eseguire il wrapping dell'oggetto non Agile in un oggetto `Agile<T>` , che è Agile. Si può quindi eseguire il marshalling dell'oggetto `Agile<T>` e usare l'oggetto non Agile sottostante.  
  
 La classe `Agile<T>` è una classe C++ standard nativa e richiede `agile.h`. Rappresenta l'oggetto non Agile e il *contesto*dell'oggetto Agile. Il contesto specifica il modello di threading e il comportamento di marshalling di un oggetto Agile. Il sistema operativo usa il contesto per determinare come eseguire il marshalling di un oggetto.  
  
### <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Agile:: Agile](#ctor)|Inizializza una nuova istanza della classe Agile.|  
|[Distruttore Agile::~Agile](#dtor)|Eliminata l'istanza corrente della classe Agile.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Agile::Get](#get)|Restituisce un handle all'oggetto rappresentato dall'oggetto Agile corrente.|  
|[Agile::GetAddressOf](#getaddressof)|Reinizializza l'oggetto Agile corrente e restituisce l'indirizzo di un handle a un oggetto di tipo `T`.|  
|[Agile::GetAddressOfForInOut](#getaddressofforinout)|Restituisce l'indirizzo di un handle all'oggetto rappresentato dall'oggetto Agile corrente.|  
|[Agile::Release](#release)|Rimuove l'oggetto e il contesto sottostanti dell'oggetto Agile corrente.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Agile::operator->](#operator-arrow)|Recupera un handle all'oggetto rappresentato dall'oggetto Agile corrente.|  
|[Agile::operator=](#operator-assign)|Assegna il valore specificato all'oggetto Agile corrente.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `Object`  
  
 `Agile`  
  
### <a name="requirements"></a>Requisiti  
 **Client minimo supportato:** Windows 8  
  
 **Server minimo supportato:** Windows Server 2012  
  
 **Spazio dei nomi:** Platform  
  
 **Intestazione:** agile.h  

## <a name="ctor"></a>  Costruttore Agile:: Agile
Inizializza una nuova istanza della classe Agile.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
  
 Agile();  
  
Agile(T^ object);   
  
Agile(const Agile<T>& object);  
  
Agile(Agile<T>&& object);  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo specificato dal parametro typename del modello.  
  
 `object`  
 Nella seconda versione di questo costruttore, oggetto utilizzato per inizializzare una nuova istanza Agile. Nella terza versione, oggetto copiato nella nuova istanza Agile. Nella quarta versione, oggetto spostato nella nuova istanza Agile.  
  
### <a name="remarks"></a>Note  
 La prima versione di questo costruttore rappresenta il costruttore predefinito. Nella seconda versione viene inizializzata la nuova classe Agile dell'istanza dall'oggetto specificato dal parametro `object`. La terza versione rappresenta il costruttore di copia. La quarta versione rappresenta il costruttore di spostamento. Questo costruttore non può generare eccezioni.  

## <a name="dtor"></a>  Agile:: ~ Agile distruttore
Eliminata l'istanza corrente della classe Agile.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
  
~Agile();  
```  
  
### <a name="remarks"></a>Note  
 Questo distruttore rilascia inoltre l'oggetto rappresentato dall'oggetto Agile corrente.  
  
## <a name="get"></a>   Metodo Agile:: Get
Restituisce un handle all'oggetto rappresentato dall'oggetto Agile corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
  
   T^ Get() const  
;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Handle all'oggetto rappresentato dall'oggetto Agile corrente.  
  
 Il tipo di valore restituito effettivo è un tipo interno riservato. Un modo pratico per contenere il valore restituito consiste nell'assegnarlo a una variabile dichiarata con la **auto** parola chiave di deduzione del tipo. Ad esempio `auto x = myAgileTvariable->Get();`.  
  
## <a name="getaddressof"></a>  Metodo Agile:: getaddressof
Reinizializza l'oggetto Agile corrente e restituisce l'indirizzo di un handle a un oggetto di tipo `T`.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
  
T^* GetAddressOf()   
throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo specificato dal parametro typename del modello.  
  
### <a name="return-value"></a>Valore restituito  
 L'indirizzo di un handle a un oggetto di tipo `T`.  
  
### <a name="remarks"></a>Note  
 Questa operazione rilascia la rappresentazione corrente di un oggetto di tipo `T`, se presente; reinizializza i membri di dati dell'oggetto Agile, acquisisce il contesto di threading corrente e restituisce l'indirizzo di una variabile di handle a un oggetto che può rappresentare un oggetto non agile. Affinché un'istanza della classe Agile rappresentare un oggetto, utilizzare l'operatore di assegnazione ([Agile:: operator =](#operator-assign)) per assegnare l'oggetto per l'istanza della classe Agile.  

## <a name="getaddressofforinout"></a>  Metodo Agile:: getaddressofforinout
Restituisce l'indirizzo di un handle all'oggetto rappresentato dall'oggetto Agile corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
  
T^* GetAddressOfForInOut()  throw();  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo specificato dal parametro typename del modello.  
  
### <a name="return-value"></a>Valore restituito  
 Indirizzo di un handle all'oggetto rappresentato dall'oggetto Agile corrente.  
  
### <a name="remarks"></a>Note  
 Questa operazione acquisisce il contesto di threading corrente e successivamente restituisce l'indirizzo di un handle all'oggetto sottostante.  

## <a name="release"></a>  Metodo Agile:: Release
Rimuove l'oggetto e il contesto sottostanti dell'oggetto Agile corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
  
void Release() throw();  
  
```  
  
### <a name="remarks"></a>Note  
 Se esistono, l'oggetto e il contesto sottostanti dell'oggetto Agile corrente vengono rimossi, quindi il valore dell'oggetto Agile viene impostato su null.  

## <a name="operator-arrow"></a>  Agile:: operator -&gt; (operatore)
Recupera un handle all'oggetto rappresentato dall'oggetto Agile corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
  
T^ operator->()   
const throw();  
```  
  
### <a name="return-value"></a>Valore restituito  
 Handle all'oggetto rappresentato dall'oggetto Agile corrente.  
  
 Questo operatore restituisce un tipo interno riservato. Un modo pratico per contenere il valore restituito consiste nell'assegnarlo a una variabile dichiarata con la **auto** parola chiave di deduzione del tipo.  

## <a name="operator-assign"></a>  Agile:: operator = (operatore)
Assegna l'oggetto specificato all'oggetto Agile corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
  
   Agile<T> operator=(T^ object) throw();  
  
   Agile<T> operator=(  
      const Agile<T>& object  
) throw();  
  
   Agile<T> operator=(  
      Agile<T>&& object  
) throw();  
  
   T^ operator=(  
      IUnknown* lp  
) throw();  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo specificato dal typename del modello.  
  
 `object`  
 Oggetto o handle a un oggetto che viene copiato o spostato nell'oggetto Agile corrente.  
  
 `lp`  
 Puntatore a interfaccia IUnknown di un oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Handle a un oggetto di tipo `T`  
  
### <a name="remarks"></a>Note  
 La prima versione dell'operatore di assegnazione copia un handle a un tipo di riferimento all'oggetto Agile corrente. La seconda versione copia un riferimento a un tipo Agile all'oggetto Agile corrente. La terza versione sposta un tipo Agile all'oggetto Agile corrente. La quarta versione sposta un puntatore a un oggetto COM all'oggetto Agile corrente.  
  
 L'operazione di assegnazione rende automaticamente persistente il contesto dell'oggetto Agile corrente. 
       
## <a name="see-also"></a>Vedere anche  
 [Piattaforma Namespace](platform-namespace-c-cx.md)