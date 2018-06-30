---
title: CTypedPtrMap (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CTypedPtrMap
- AFXTEMPL/CTypedPtrMap
- AFXTEMPL/CTypedPtrMap::GetNextAssoc
- AFXTEMPL/CTypedPtrMap::Lookup
- AFXTEMPL/CTypedPtrMap::RemoveKey
- AFXTEMPL/CTypedPtrMap::SetAt
dev_langs:
- C++
helpviewer_keywords:
- CTypedPtrMap [MFC], GetNextAssoc
- CTypedPtrMap [MFC], Lookup
- CTypedPtrMap [MFC], RemoveKey
- CTypedPtrMap [MFC], SetAt
ms.assetid: 9f377385-c6e9-4471-8b40-8fe220c50164
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2f312d7e829657f2cc9c7c41c65afad8d8f8b343
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37121864"
---
# <a name="ctypedptrmap-class"></a>Classe CTypedPtrMap
Fornisce un "wrapper" indipendente dai tipi per gli oggetti delle classi mappa di puntatori `CMapPtrToPtr`, `CMapPtrToWord`, `CMapWordToPtr`e `CMapStringToPtr`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class BASE_CLASS, class KEY, class VALUE>  
class CTypedPtrMap : public BASE_CLASS  
```  
  
#### <a name="parameters"></a>Parametri  
 *BASE_CLASS*  
 Classe di base della classe map puntatore tipizzato; deve essere una classe della mappa di puntatore ( `CMapPtrToPtr`, `CMapPtrToWord`, `CMapWordToPtr`, o `CMapStringToPtr`).  
  
 *KEY*  
 Classe dell'oggetto utilizzato come chiave per la mappa.  
  
 *VALORE*  
 Classe dell'oggetto archiviato nella mappa.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTypedPtrMap::GetNextAssoc](#getnextassoc)|Ottiene l'elemento successivo per eseguire l'iterazione.|  
|[CTypedPtrMap::Lookup](#lookup)|Restituisce un `KEY` in base a un `VALUE`.|  
|[CTypedPtrMap::RemoveKey](#removekey)|Rimuove un elemento specificato da una chiave.|  
|[CTypedPtrMap::SetAt](#setat)|Inserisce un elemento nella mappa. sostituisce un elemento esistente se viene trovata una chiave corrispondente.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[[] CTypedPtrMap::operator](#operator_at)|Inserisce un elemento nella mappa.|  
  
## <a name="remarks"></a>Note  
 Quando si utilizza `CTypedPtrMap`, la funzionalità di controllo dei tipi C++ consente di eliminare gli errori causati da tipi di puntatore non corrispondenti.  
  
 Poiché tutti i `CTypedPtrMap` funzioni inline, utilizzo del modello non in modo significativo la dimensione o velocità del codice.  
  
 Per ulteriori informazioni sull'utilizzo `CTypedPtrMap`, vedere gli articoli [raccolte](../../mfc/collections.md) e [classi basate su modello](../../mfc/template-based-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `BASE_CLASS`  
  
 `CTypedPtrMap`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxtempl.h  
  
##  <a name="getnextassoc"></a>  CTypedPtrMap::GetNextAssoc  
 Recupera l'elemento della mappa in corrispondenza `rNextPosition`, quindi Aggiorna `rNextPosition` per fare riferimento all'elemento successivo nella mappa.  
  
```  
void GetNextAssoc(
    POSITION& rPosition,
    KEY& rKey,
    VALUE& rValue) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *rPosition.*  
 Specifica un riferimento a un valore di posizione restituito da una precedente `GetNextAssoc` oppure `BASE_CLASS` **:: GetStartPosition** chiamare.  
  
 *KEY*  
 Parametro di modello che specifica il tipo delle chiavi della mappa.  
  
 *rKey*  
 Specifica la chiave restituita dell'elemento recuperato.  
  
 *VALORE*  
 Parametro di modello che specifica il tipo dei valori della mappa.  
  
 *rValue*  
 Specifica il valore restituito dell'elemento recuperato.  
  
### <a name="remarks"></a>Note  
 Questa funzione è particolarmente utile per l'iterazione di tutti gli elementi nella mappa. Si noti che la sequenza di posizione non è necessariamente lo stesso come sequenza di valore della chiave.  
  
 Se l'elemento recuperato è l'ultimo nella mappa, quindi il nuovo valore di `rNextPosition` è impostato su NULL.  
  
 Questa funzione inline chiama `BASE_CLASS` **:: GetNextAssoc**.  
  
##  <a name="lookup"></a>  CTypedPtrMap::Lookup  
 `Lookup` utilizza un algoritmo hash per trovare rapidamente l'elemento della mappa con una chiave che corrisponde esattamente.  
  
```  
BOOL Lookup(BASE_CLASS ::BASE_ARG_KEY key, VALUE& rValue) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *BASE_CLASS*  
 Parametro modello che specifica la classe di base della classe della mappa.  
  
 *key*  
 La chiave dell'elemento da ricercare.  
  
 *VALORE*  
 Parametro di modello che specifica il tipo di valori archiviati in questa mappa.  
  
 *rValue*  
 Specifica il valore restituito dell'elemento recuperato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'elemento è stato trovato. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione inline chiama `BASE_CLASS` **:: Lookup**.  
  
##  <a name="operator_at"></a>  [] CTypedPtrMap::operator  
 Questo operatore può essere utilizzato solo sul lato sinistro di un'istruzione di assegnazione (un l-value).  
  
```  
VALUE& operator[ ](base_class ::base_arg_key key);
```  
  
### <a name="parameters"></a>Parametri  
 *VALORE*  
 Parametro di modello che specifica il tipo di valori archiviati in questa mappa.  
  
 *BASE_CLASS*  
 Parametro modello che specifica la classe di base della classe della mappa.  
  
 *key*  
 La chiave dell'elemento da cercare o creare nella mappa.  
  
### <a name="remarks"></a>Note  
 Se non è disponibile alcun elemento della mappa con la chiave specificata, viene creato un nuovo elemento. Non c'è nessun "destra" (r-value) equivalente all'operatore perché vi sono possibilità che una chiave non può essere trovata nella mappa. Utilizzare il `Lookup` funzione membro per il recupero dell'elemento.  
  
##  <a name="removekey"></a>  CTypedPtrMap::RemoveKey  
 Questa funzione membro chiama `BASE_CLASS` **:: RemoveKey**.  
  
```  
BOOL RemoveKey(KEY key);
```  
  
### <a name="parameters"></a>Parametri  
 *KEY*  
 Parametro di modello che specifica il tipo delle chiavi della mappa.  
  
 *key*  
 Chiave dell'elemento da rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la voce è stata trovata e rimosso correttamente; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per ulteriori osservazioni, vedere [CMapStringToOb::RemoveKey](../../mfc/reference/cmapstringtoob-class.md#removekey).  
  
##  <a name="setat"></a>  CTypedPtrMap::SetAt  
 Questa funzione membro chiama `BASE_CLASS` **:: SetAt**.  
  
```  
void SetAt(KEY key, VALUE newValue);
```  
  
### <a name="parameters"></a>Parametri  
 *KEY*  
 Parametro di modello che specifica il tipo delle chiavi della mappa.  
  
 *key*  
 Specifica il valore della chiave del newValue.  
  
 *newValue*  
 Specifica il puntatore all'oggetto che rappresenta il valore del nuovo elemento.  
  
### <a name="remarks"></a>Note  
 Per ulteriori osservazioni, vedere [CMapStringToOb::SetAt](../../mfc/reference/cmapstringtoob-class.md#setat).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC COLLECT](../../visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)   
 [Classe CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)   
 [Classe CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)   
 [Classe CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)
