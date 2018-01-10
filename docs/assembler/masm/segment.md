---
title: SEGMENTO | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: SEGMENT
dev_langs: C++
helpviewer_keywords: SEGMENT directive
ms.assetid: e6f68367-6714-4f06-a79c-edfa88014430
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ce18933c27a62b1a89551320f75df7e25a67ef03
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="segment"></a>SEGMENT
Definisce un segmento di programma chiamato *nome* la presenza di attributi di segmento  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
   name SEGMENT [[READONLY]] [[align]] [[combine]] [[use]] [[characteristics]] ALIAS(string) [['class']]  
statements  
name ENDS  
```  
  
#### <a name="parameters"></a>Parametri  
 *align*  
 L'intervallo di indirizzi di memoria da cui è possibile selezionare un indirizzo iniziale per il segmento. Il tipo di allineamento può essere una delle operazioni seguenti:  
  
|Allineare il testo|Indirizzo iniziale|  
|----------------|----------------------|  
|**BYTE**|Indirizzo byte disponibile successivo.|  
|**WORD**|Indirizzo successivo disponibile word (2 byte per word).|  
|**DWORD**|Indirizzo successivo disponibile parola doppia (4 byte per ogni parola doppia).|  
|**PARA**|Indirizzo successivo disponibile paragrafo (16 byte per ogni paragrafo).|  
|**PAGE**|Indirizzo pagina disponibile successiva (256 byte per pagina).|  
|**ALLINEA**(*n*)|Successivo disponibile  *n* indirizzo byte th. Per ulteriori informazioni vedere la sezione Osservazioni.|  
  
 Se questo parametro viene omesso, **PARA** viene utilizzato per impostazione predefinita.  
  
 *combine*  
 **Pubblica**, **STACK**, **comuni**, **memoria**, **in***indirizzo*, **Privato**  
  
 *Utilizzare*  
 **USE16**, **USE32**, **FLAT**  
  
 `characteristics`  
 **INFO**, **leggere**, **scrivere**, **EXECUTE**, **SHARED**, **NOPAGE**, **NOCACHE**, e **annullare**  
  
 Questi sono supportati solo per COFF e corrispondono alle caratteristiche di un nome simile sezione COFF (ad esempio, **SHARED** corrisponde a IMAGE_SCN_MEM_SHARED). LETTURA imposta il flag IMAGE_SCN_MEM_READ. Il flag di sola lettura obsoleto ha causato la sezione cancellare il flag IMG_SCN_MEM_WRITE. Se qualsiasi `characteristics` sono impostati, non vengono utilizzate le caratteristiche predefinite e solo i flag specificati dal programmatore sono in vigore.  
  
 `ALIAS(` `string` `)`  
 Questa stringa viene utilizzata come nome della sezione nell'oggetto COFF generato.  Crea più sezioni con lo stesso nome esterno, con nomi di segmento MASM distinti.  
  
 Non supportato con **/omf**.  
  
 `class`  
 Indica come devono essere combinati e ordinati nel file assemblato segmenti. I valori tipici sono, `'DATA'`, `'CODE'`, `'CONST'` e`'STACK'`  
  
## <a name="remarks"></a>Note  
 Per `ALIGN(n)`, `n` può essere qualsiasi potenza di 2 da 1 a 8192; non è supportata con **/omf**.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)