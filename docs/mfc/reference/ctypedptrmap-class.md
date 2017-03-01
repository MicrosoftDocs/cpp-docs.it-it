---
title: CTypedPtrMap (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CTypedPtrMap
dev_langs:
- C++
helpviewer_keywords:
- type-safe collections
- template classes, CTypedPtrMap class
- maps
- CTypedPtrMap class
- pointer maps
ms.assetid: 9f377385-c6e9-4471-8b40-8fe220c50164
caps.latest.revision: 23
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 919d751c6ffe4b10ffad047f1b6be832bf49a1af
ms.lasthandoff: 02/24/2017

---
# <a name="ctypedptrmap-class"></a>Classe CTypedPtrMap
Fornisce un "wrapper" indipendente dai tipi per gli oggetti delle classi mappa di puntatori `CMapPtrToPtr`, `CMapPtrToWord`, `CMapWordToPtr`e `CMapStringToPtr`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class BASE_CLASS, class KEY, class VALUE>  
class CTypedPtrMap : public BASE_CLASS  
```  
  
#### <a name="parameters"></a>Parametri  
 `BASE_CLASS`  
 Classe di base della classe map puntatori; deve essere una classe di mappa del puntatore ( `CMapPtrToPtr`, `CMapPtrToWord`, `CMapWordToPtr`, o `CMapStringToPtr`).  
  
 `KEY`  
 Classe dell'oggetto utilizzato come chiave per la mappa.  
  
 `VALUE`  
 Classe dell'oggetto archiviato nella mappa.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTypedPtrMap::GetNextAssoc](#getnextassoc)|Ottiene l'elemento successivo per l'iterazione.|  
|[CTypedPtrMap::Lookup](#lookup)|Restituisce un `KEY` basato su un `VALUE`.|  
|[CTypedPtrMap::RemoveKey](#removekey)|Rimuove un elemento specificato da una chiave.|  
|[CTypedPtrMap::SetAt](#setat)|Inserisce un elemento nella mappa. sostituisce un elemento esistente se viene trovata una chiave corrispondente.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[[CTypedPtrMap::operator]](#operator_at)|Inserisce un elemento nella mappa.|  
  
## <a name="remarks"></a>Note  
 Quando si utilizza `CTypedPtrMap`, la funzionalità di controllo dei tipi C++ consente di eliminare gli errori causati da tipi di puntatore non corrispondenti.  
  
 Poiché tutti `CTypedPtrMap` funzioni inline, utilizzo di questo modello non influire in modo significativo la dimensione o velocità del codice.  
  
 Per ulteriori informazioni sull'utilizzo di `CTypedPtrMap`, vedere gli articoli [raccolte](../../mfc/collections.md) e [classi basate su modello](../../mfc/template-based-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `BASE_CLASS`  
  
 `CTypedPtrMap`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxtempl.h  
  
##  <a name="a-namegetnextassoca--ctypedptrmapgetnextassoc"></a><a name="getnextassoc"></a>CTypedPtrMap::GetNextAssoc  
 Recupera l'elemento della mappa in `rNextPosition`, quindi Aggiorna `rNextPosition` per fare riferimento all'elemento successivo nella mappa.  
  
```  
void GetNextAssoc(
    POSITION& rPosition,
    KEY& rKey,
    VALUE& rValue) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `rPosition`  
 Specifica un riferimento a un **posizione** valore restituito da una precedente `GetNextAssoc` o `BASE_CLASS` **:: GetStartPosition** chiamare.  
  
 *CHIAVE*  
 Parametro di modello che specifica il tipo delle chiavi della mappa.  
  
 `rKey`  
 Specifica la chiave dell'elemento recuperato restituita.  
  
 *VALORE*  
 Parametro di modello che specifica il tipo dei valori della mappa.  
  
 `rValue`  
 Specifica il valore restituito dell'elemento recuperato.  
  
### <a name="remarks"></a>Note  
 Questa funzione è particolarmente utile per scorrere tutti gli elementi nella mappa. Si noti che la sequenza di posizione non è necessariamente uguale sequenza il valore della chiave.  
  
 Se l'elemento recuperato è l'ultimo nella mappa, quindi il nuovo valore di `rNextPosition` è impostato su **NULL**.  
  
 Questa funzione inline chiama `BASE_CLASS` **:: GetNextAssoc**.  
  
##  <a name="a-namelookupa--ctypedptrmaplookup"></a><a name="lookup"></a>CTypedPtrMap::Lookup  
 `Lookup`utilizza un algoritmo di hash per trovare rapidamente l'elemento della mappa con una chiave che corrispondono esattamente.  
  
```  
BOOL Lookup(BASE_CLASS ::BASE_ARG_KEY key, VALUE& rValue) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `BASE_CLASS`  
 Parametro di modello che specifica la classe di base della classe della mappa.  
  
 `key`  
 La chiave dell'elemento da cercare.  
  
 *VALORE*  
 Parametro di modello che specifica il tipo dei valori archiviati nella mappa.  
  
 `rValue`  
 Specifica il valore restituito dell'elemento recuperato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'elemento è stato trovato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione inline chiama `BASE_CLASS` **:: ricerca**.  
  
##  <a name="a-nameoperatorata--ctypedptrmapoperator--"></a><a name="operator_at"></a>[CTypedPtrMap::operator]  
 Questo operatore può essere utilizzato solo sul lato sinistro di un'istruzione di assegnazione (un l-value).  
  
```  
VALUE& operator[ ](base_class ::base_arg_key key);
```  
  
### <a name="parameters"></a>Parametri  
 *VALORE*  
 Parametro di modello che specifica il tipo dei valori archiviati nella mappa.  
  
 `BASE_CLASS`  
 Parametro di modello che specifica la classe di base della classe della mappa.  
  
 `key`  
 La chiave dell'elemento da cercare o creare nella mappa.  
  
### <a name="remarks"></a>Note  
 Se non esiste nessun elemento della mappa con la chiave specificata, viene creato un nuovo elemento. Non esiste alcun "destra" (r) equivalente all'operatore perché vi è la possibilità che una chiave potrebbe non essere trovata nella mappa. Utilizzare il `Lookup` una funzione membro per il recupero di elemento.  
  
##  <a name="a-nameremovekeya--ctypedptrmapremovekey"></a><a name="removekey"></a>CTypedPtrMap::RemoveKey  
 Chiama questa funzione membro `BASE_CLASS` **:: RemoveKey**.  
  
```  
BOOL RemoveKey(KEY key);
```  
  
### <a name="parameters"></a>Parametri  
 *CHIAVE*  
 Parametro di modello che specifica il tipo delle chiavi della mappa.  
  
 `key`  
 Chiave dell'elemento da rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la voce è stata trovata e rimosso correttamente; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Per ulteriori osservazioni, vedere [CMapStringToOb::RemoveKey](../../mfc/reference/cmapstringtoob-class.md#removekey).  
  
##  <a name="a-namesetata--ctypedptrmapsetat"></a><a name="setat"></a>CTypedPtrMap::SetAt  
 Chiama questa funzione membro `BASE_CLASS` **:: SetAt**.  
  
```  
void SetAt(KEY key, VALUE newValue);
```  
  
### <a name="parameters"></a>Parametri  
 *CHIAVE*  
 Parametro di modello che specifica il tipo delle chiavi della mappa.  
  
 `key`  
 Specifica il valore della chiave di newValue.  
  
 `newValue`  
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

