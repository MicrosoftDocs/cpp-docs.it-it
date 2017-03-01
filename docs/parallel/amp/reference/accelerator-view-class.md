---
title: Classe accelerator_view | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- amprt/Concurrency::accelerator_view
dev_langs:
- C++
helpviewer_keywords:
- accelerator_view class
ms.assetid: 9f298c21-bf62-46e0-88b8-01c5c78ef144
caps.latest.revision: 18
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: fc190feb08d9b221cd1cc21a9c91ad567c86c848
ms.openlocfilehash: 78569f1ff21af3ed05cb908a851f0fe05d5d271a
ms.lasthandoff: 02/24/2017

---
# <a name="acceleratorview-class"></a>Classe accelerator_view
Rappresenta un'astrazione di periferica virtuale su un acceleratore di dati in parallelo di C++ AMP.  
  
### <a name="syntax"></a>Sintassi  
  
```  
class accelerator_view;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore accelerator_view](#ctor)|Inizializza una nuova istanza della classe `accelerator_view`.|  
|[~ accelerator_view distruttore](#dtor)|Elimina il `accelerator_view` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[create_marker (metodo)](#create_marker)|Restituisce un futuro per registrare il completamento di tutti i comandi inviati finora a questo `accelerator_view` oggetto.|  
|[Flush (metodo)](#flush)|Invia tutti i comandi in sospeso in coda per il `accelerator_view` oggetto per il tasto di scelta rapida per l'esecuzione.|  
|[get_accelerator (metodo)](#get_accelerator)|Restituisce l'oggetto `accelerator` per l'oggetto `accelerator_view`.|  
|[get_is_auto_selection (metodo)](#get_is_auto_selection)|Restituisce un valore booleano che indica se il runtime verrà selezionato automaticamente un tasto di scelta rapida appropriato quando il `accelerator_view` oggetto viene passato a un [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each).|  
|[get_is_debug (metodo)](#get_is_debug)|Restituisce un valore booleano che indica se il `accelerator_view` oggetto dispone del livello DEBUG abilitato per la segnalazione errori estesa.|  
|[get_queuing_mode (metodo)](#get_queuing_mode)|Restituisce la modalità di Accodamento per il `accelerator_view` oggetto.|  
|[get_version (metodo)](#get_version)|Restituisce la versione di `accelerator_view`.|  
|[Wait (metodo)](#wait)|Attende che tutti i comandi inviati per il `accelerator_view` oggetto alla fine.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operatore! = (operatore)](#operator_neq)|Confronta questa `accelerator_view` oggetto con un altro e restituisce `false` se sono uguali; in caso contrario, restituisce `true`.|  
|[operatore = (operatore)](#operator_eq)|Copia il contenuto dell'oggetto specificato `accelerator_view` specificato in questo oggetto.|  
|[operatore Operator = =](#operator_eq_eq)|Confronta questa `accelerator_view` oggetto con un altro e restituisce `true` se sono uguali; in caso contrario, restituisce `false`.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[tasti di scelta rapida (membro dati)](#accelerator)|Ottiene l'oggetto `accelerator` per l'oggetto `accelerator_view`.|  
|[is_auto_selection (membro dati)](#is_auto_selection)|Ottiene un valore booleano che indica se il runtime verrà selezionato automaticamente un tasto di scelta rapida appropriato quando il `accelerator_view` oggetto viene passato a un [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each).|  
|[is_debug (membro dati)](#is_debug)|Ottiene un valore booleano che indica se il `accelerator_view` oggetto dispone del livello DEBUG abilitato per la segnalazione errori estesa.|  
|[queuing_mode (membro dati)](#queuing_mode)|Ottiene la modalità di Accodamento per il `accelerator_view` oggetto.|  
|[versione (membro dati)](#version)|Ottiene la versione del tasto di scelta rapida.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `accelerator_view`  
  
### <a name="remarks"></a>Note  
 Un `accelerator_view` oggetto rappresenta una visualizzazione logica, isolata di un tasto di scelta rapida. Un dispositivo solo computer fisico può avere molti logico e isolato `accelerator_view` oggetti. Ogni acceleratore predefinito è `accelerator_view` oggetto. Ulteriori `accelerator_view` possono essere creati.  
  
 Dispositivi fisici possono essere condivisi tra molti thread client. Thread di client in modo cooperativo possono utilizzare lo stesso `accelerator_view` oggetto di un tasto di scelta rapida o di ciascun client può comunicare con un dispositivo di calcolo tramite indipendente `accelerator_view` oggetto per l'isolamento dagli altri thread client.  
  
 Un `accelerator_view` oggetto può avere uno dei due [enumerazione queuing_mode](concurrency-namespace-enums-amp.md#queuing_mode) stati. Se la modalità di accodamento è `immediate`, comandi come `copy` e `parallel_for_each` vengono inviati al dispositivo di tasti di scelta rapida corrispondente come restituiscono al chiamante. Se la modalità di accodamento è `deferred`, tali comandi vengono messi in coda in una coda di comandi corrispondente per il `accelerator_view` oggetto. I comandi non vengono effettivamente inviati al dispositivo fino a quando `flush()` viene chiamato.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amprt.h  
  
 **Spazio dei nomi:** Concurrency  

## <a name="a-nameacceleratora-accelerator"></a><a name="accelerator"></a>tasti di scelta rapida 

Ottiene l'oggetto di tasti di scelta rapida per l'oggetto accelerator_view.  
  
### <a name="syntax"></a>Sintassi  
  
```  
__declspec(property(get= get_accelerator)) Concurrency::accelerator accelerator;  
```  
  
## <a name="a-namectora-acceleratorview"></a><a name="ctor"></a>accelerator_view 

Inizializza una nuova istanza della classe accelerator_view copiando un oggetto esistente `accelerator_view` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
accelerator_view( const accelerator_view & _Other );  
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `accelerator_view` oggetto da copiare.  
  
## <a name="a-nameacceleratorviewcreatemarkera-createmarker"></a><a name="accelerator_view__create_marker"></a>create_marker 

Restituisce un futuro per registrare il completamento di tutti i comandi inviati finora a questo `accelerator_view` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
concurrency::completion_future create_marker();  
```  
  
### <a name="return-value"></a>Valore restituito  
 Una future tenga traccia del completamento di tutti i comandi inviati finora a questo `accelerator_view` oggetto.  
  
## <a name="a-nameflusha-flush"></a><a name="flush"></a>scaricamento 

Invia che tutti i comandi in sospeso in coda all'oggetto accelerator_view tasto di scelta rapida per l'esecuzione.  
  
### <a name="syntax"></a>Sintassi  
  
```  
void flush();  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `void`.  

## <a name="a-nameacceleratorviewgetacceleratora-getaccelerator"></a><a name="accelerator_view__get_accelerator"></a>get_accelerator 

Restituisce l'oggetto di tasti di scelta rapida per l'oggetto accelerator_view.
### <a name="syntax"></a>Sintassi
```
accelerator get_accelerator() const;
```
### <a name="return-value"></a>Valore restituito
L'oggetto di tasti di scelta rapida per l'oggetto accelerator_view.

## <a name="a-nameacceleratorviewgetisautoselectiona-getisautoselection"></a><a name="accelerator_view__get_is_auto_selection"></a>get_is_auto_selection 

Restituisce un valore booleano che indica se il runtime verrà selezionato automaticamente un tasto di scelta rapida appropriato quando il accelerator_view viene passato a un [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each).  
  
### <a name="syntax"></a>Sintassi  
  
```  
bool get_is_auto_selection() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il runtime verrà selezionato automaticamente un acceleratore appropriato; in caso contrario, `false`.  
  
## <a name="a-nameacceleratorviewgetisdebuga-getisdebug"></a><a name="accelerator_view__get_is_debug"></a>get_is_debug 

Restituisce un valore booleano che indica se l'oggetto accelerator_view dispone del livello DEBUG abilitato per la segnalazione errori estesa.  
  
### <a name="syntax"></a>Sintassi  
  
```  
bool get_is_debug() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore booleano che indica se il `accelerator_view` oggetto dispone del livello DEBUG abilitato per la segnalazione errori estesa.  

## <a name="a-nameacceleratorviewgetqueuingmodea-getqueuingmode"></a><a name="accelerator_view__get_queuing_mode"></a>get_queuing_mode 

Restituisce la modalità di Accodamento per l'oggetto accelerator_view.  
  
### <a name="syntax"></a>Sintassi  
  
```  
queuing_mode get_queuing_mode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La modalità di Accodamento per il `accelerator_view` oggetto.  
  
## <a name="a-nameacceleratorviewgetversiona-getversion"></a><a name="accelerator_view__get_version"></a>get_version 

Restituisce la versione di accelerator_view.  
  
### <a name="syntax"></a>Sintassi  
  
```  
unsigned int get_version() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La versione di `accelerator_view`.  
  
## <a name="a-nameacceleratorviewisautoselectiona-isautoselection"></a><a name="accelerator_view__is_auto_selection"></a>is_auto_selection 

Ottiene un valore booleano che indica se il runtime verrà selezionato automaticamente un tasto di scelta rapida appropriato quando il accelerator_view viene passato a un [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each).  
  
### <a name="syntax"></a>Sintassi  
  
```  
__declspec(property(get= get_is_auto_selection)) bool is_auto_selection;  
```  
  
## <a name="a-nameacceleratorviewisdebuga-isdebug"></a><a name="accelerator_view__is_debug"></a>is_debug 

Ottiene un valore booleano che indica se l'oggetto accelerator_view dispone del livello DEBUG abilitato per la segnalazione errori estesa.  
  
### <a name="syntax"></a>Sintassi  
  
```  
__declspec(property(get= get_is_debug)) bool is_debug;  
```  
  
## <a name="a-nameacceleratorviewoperatorneqa-operator"></a><a name="accelerator_view__operator_neq"></a>operatore! = 

Confronta questo oggetto accelerator_view con un altro e restituisce `false` se sono uguali; in caso contrario, restituisce `true`.  
  
### <a name="syntax"></a>Sintassi  
  
```  
bool operator!= (    const accelerator_view & _Other ) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `accelerator_view` oggetto da confrontare con questo.  
  
### <a name="return-value"></a>Valore restituito  
 `false` se i due oggetti sono uguali; in caso contrario, `true`.  
  
## <a name="a-nameacceleratorviewoperatoreqa-operator"></a><a name="accelerator_view__operator_eq"></a>operatore = 

Copia il contenuto dell'oggetto accelerator_view specificato in questo profilo.  
  
### <a name="syntax"></a>Sintassi  
  
```  
accelerator_view & operator= (    const accelerator_view & _Other );  
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `accelerator_view` oggetto da copiare.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a modificati `accelerator_view` oggetto.  
  
## <a name="a-nameacceleratorviewoperatoreqeqa-operator"></a><a name="accelerator_view__operator_eq_eq"></a>operatore = = 

Confronta questo oggetto accelerator_view con un altro e restituisce `true` se sono uguali; in caso contrario, restituisce `false`.  
  
### <a name="syntax"></a>Sintassi  
  
```  
bool operator= = (    const accelerator_view & _Other ) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `accelerator_view` oggetto da confrontare con questo.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se i due oggetti sono uguali; in caso contrario, `false`.  
  
## <a name="a-nameacceleratorviewqueuingmodea-queuingmode"></a><a name="accelerator_view__queuing_mode"></a>queuing_mode 

Ottiene la modalità di Accodamento per l'oggetto accelerator_view.  
  
### <a name="syntax"></a>Sintassi  
  
```  
__declspec(property(get= get_queuing_mode)) Concurrency::queuing_mode queuing_mode;  
```  
  
## <a name="a-nameacceleratorviewversiona-version"></a><a name="accelerator_view__version"></a>Versione 

Ottiene la versione di accelerator_view.  
  
### <a name="syntax"></a>Sintassi  
  
```  
__declspec(property(get= get_version)) unsigned int version;  
```  
  
## <a name="a-nameacceleratorviewwaita-wait"></a><a name="accelerator_view__wait"></a>attesa 

Attende il completamento di tutti i comandi inviati all'oggetto accelerator_view.  
  
### <a name="syntax"></a>Sintassi  
  
```  
void wait();  
```  
  
#### <a name="return-value"></a>Valore restituito  
 Restituisce `void`.  
  
#### <a name="remarks"></a>Note  
 Se il [queuing_mode](concurrency-namespace-enums-amp.md#queuing_mode) è `immediate`, questo metodo restituisce immediatamente senza bloccare.  
  
##  <a name="a-namedtora-acceleratorview"></a><a name="dtor"></a>~ accelerator_view 

 Elimina l'oggetto accelerator_view.  
  
#### <a name="syntax"></a>Sintassi  
  
```  
~accelerator_view();  
```  
  
### <a name="return-value"></a>Valore restituito  
  
 
## <a name="see-also"></a>Vedere anche  
 [Concorrenza Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)

