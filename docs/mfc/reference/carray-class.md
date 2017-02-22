---
title: "CArray Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "matrici [C++], classi"
  - "CArray class"
  - "classi di raccolte, template-based"
  - "modelli, classi di raccolte"
ms.assetid: fead8b00-4cfd-4625-ad0e-251df62ba92f
caps.latest.revision: 33
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 34
---
# CArray Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Supporta le matrici che sono le matrici c, ma può ridurre e crescere dinamicamente in base alle esigenze.  
  
## Sintassi  
  
```  
template < class TYPE, class ARG_TYPE = const TYPE& >   
class CArray :   
   public CObject  
```  
  
#### Parametri  
 `TYPE`  
 Il parametro di modello che specifica il tipo di oggetti archiviare nella matrice.  `TYPE` è un parametro restituito da `CArray`.  
  
 `ARG` *\_* `TYPE`  
 Il parametro di modello che specifica il tipo di argomento utilizzato per accedere agli oggetti archiviare nella matrice.  Spesso un riferimento a `TYPE`.  `ARG_TYPE` è un parametro passato a `CArray`.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CArray::CArray](../Topic/CArray::CArray.md)|Crea una matrice vuota.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CArray::Add](../Topic/CArray::Add.md)|Aggiungere un elemento alla fine della matrice, ingrandito la matrice se necessario.|  
|[CArray::Append](../Topic/CArray::Append.md)|Aggiunge un'altra matrice alla matrice, ingrandito la matrice quando necessario|  
|[CArray::Copy](../Topic/CArray::Copy.md)|Copia un'altra matrice alla matrice, ingrandito la matrice se necessario.|  
|[CArray::ElementAt](../Topic/CArray::ElementAt.md)|Restituisce un riferimento temporaneo al puntatore dell'elemento nella matrice.|  
|[CArray::FreeExtra](../Topic/CArray::FreeExtra.md)|Libera la memoria inutilizzata sul limite superiore corrente.|  
|[CArray::GetAt](../Topic/CArray::GetAt.md)|Restituisce il valore a un indice specificato.|  
|[CArray::GetCount](../Topic/CArray::GetCount.md)|Ottiene il numero di elementi nella matrice.|  
|[CArray::GetData](../Topic/CArray::GetData.md)|Consente l'accesso a elementi nella matrice.  Può essere **NULL**.|  
|[CArray::GetSize](../Topic/CArray::GetSize.md)|Ottiene il numero di elementi nella matrice.|  
|[CArray::GetUpperBound](../Topic/CArray::GetUpperBound.md)|Restituisce il maggiore indice valido.|  
|[CArray::InsertAt](../Topic/CArray::InsertAt.md)|Inserire un elemento \(o tutti gli elementi in un'altra matrice\) a un indice specificato.|  
|[CArray::IsEmpty](../Topic/CArray::IsEmpty.md)|Determina se la matrice è vuota.|  
|[CArray::RemoveAll](../Topic/CArray::RemoveAll.md)|Rimuove tutti gli elementi della matrice.|  
|[CArray::RemoveAt](../Topic/CArray::RemoveAt.md)|Rimuove un elemento a un valore specifico.|  
|[CArray::SetAt](../Topic/CArray::SetAt.md)|Imposta il valore di indice specificato; matrice non consentita per lo sviluppo.|  
|[CArray::SetAtGrow](../Topic/CArray::SetAtGrow.md)|Imposta il valore di indice specificato; ingrandito la matrice se necessario.|  
|[CArray::SetSize](../Topic/CArray::SetSize.md)|Imposta il numero di elementi da includere nella matrice.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CArray::operator](../Topic/CArray::operator.md)|Imposta o ottiene l'elemento all'indice specificato.|  
  
## Note  
 Gli indici di matrice iniziano sempre nella posizione 0.  È possibile decidere se correggere il limite superiore o abilitare la matrice per espandere quando si aggiungono elementi al limite corrente.  Viene allocata memoria in modo contiguo al limite superiore, anche se alcuni elementi sono null.  
  
> [!NOTE]
>  La maggior parte dei metodi che ridimensiona un oggetto `CArray` o aggiungono elementi a utilizzare [memcpy\_s](../../c-runtime-library/reference/memcpy-s-wmemcpy-s.md) agli elementi di spostamento.  Si tratta di un problema perché `memcpy_s` non è compatibile con alcuni oggetti che richiedono al costruttore di essere chiamati.  Se gli elementi in `CArray` non sono compatibili con `memcpy_s`, è necessario creare un nuovo `CArray` di dimensioni corrette.  È quindi possibile utilizzare [CArray::Copy](../Topic/CArray::Copy.md) e [CArray::SetAt](../Topic/CArray::SetAt.md) per popolare la nuova matrice poiché questi metodi utilizzando un operatore di assegnazione `memcpy_s`.  
  
 Come matrice di tipo c, il tempo di accesso per un elemento indicizzato `CArray` è costante e è indipendente dalla dimensione della matrice.  
  
> [!TIP]
>  Prima di utilizzo di una matrice, utilizzare [SetSize](../Topic/CArray::SetSize.md) per stabilire le dimensioni e per allocare memoria per.  Se non si utilizza `SetSize`, aggiungere elementi alla matrice in modo che venga ridistribuito e alla copia di frequente.  Il frequente riallocazione e copiare sono inefficaci e possono frammentare la memoria.  
  
 Se è necessario un dump dei singoli elementi di una matrice, è necessario impostare la profondità dell'oggetto [CDumpContext](../../mfc/reference/cdumpcontext-class.md) a 1 o maggiore.  
  
 Alcune funzioni membro della classe chiamano funzioni di supporto globali che devono essere personalizzate per la maggior parte di utilizzare la classe `CArray`.  Vedere l'argomento [Supporto della classe di raccolta](../../mfc/reference/collection-class-helpers.md) nella sezione Globals e di macro MFC.  
  
 La derivazione della classe di matrice è simile alla derivazione dell'elenco.  
  
 Per ulteriori informazioni su come utilizzare `CArray`, vedere l'articolo [Raccolte](../../mfc/collections.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CArray`  
  
## Requisiti  
 `Header:` afxtempl.h  
  
## Vedere anche  
 [L'esempio MFC SI RACCOGLIE](../../top/visual-cpp-samples.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CObArray Class](../../mfc/reference/cobarray-class.md)   
 [Supporti delle classi di raccolte](../../mfc/reference/collection-class-helpers.md)