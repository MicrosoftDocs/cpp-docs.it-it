---
title: "Classe codecvt | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "codecvt"
  - "std::codecvt"
  - "std.codecvt"
  - "xlocale/std::codecvt"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "codecvt (classe)"
ms.assetid: 37d3efa1-2b7f-42b6-b04f-7a972c8c2c86
caps.latest.revision: 23
caps.handback.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe codecvt
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Classe modello che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali. Tale classe è in grado di controllare le conversioni tra una sequenza di valori utilizzata per codificare i caratteri all'interno del programma e una sequenza di valori utilizzata per codificare i caratteri all'esterno del programma.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class CharType, class Byte, class StateType>  
class codecvt : public locale::facet, codecvt_base;  
```  
  
#### <a name="parameters"></a>Parametri  
 `CharType`  
 Tipo utilizzato all'interno di un programma per codificare i caratteri.  
  
 `Byte`  
 Tipo utilizzato per codificare i caratteri all'esterno di un programma.  
  
 `StateType`  
 Tipo che può essere utilizzato per rappresentare gli stati intermedi di una conversione tra tipi di rappresentazioni di caratteri interni ed esterni.  
  
## <a name="remarks"></a>Note  
 La classe modello descrive un oggetto che può essere utilizzato come un [facet delle impostazioni locali](../standard-library/locale-class.md#facet_class), per controllare le conversioni tra una sequenza di valori di tipo `CharType` e una sequenza di valori di tipo `Byte`. La classe `StateType` caratterizza la trasformazione e un oggetto della classe `StateType` archivia tutte le informazioni necessarie sullo stato durante una conversione.  
  
 Nella codifica interna viene utilizzata una rappresentazione con un numero fisso di byte per carattere, in genere il tipo `char` o `wchar_t`.  
  
 Come in qualsiasi facet delle impostazioni locali, l'oggetto statico `id` ha un valore archiviato iniziale uguale a zero. Il primo tentativo di accedere a tale valore archiviato archivia un valore positivo univoco in `id`.  
  
 Le versioni dei modelli di [do_in](#codecvt__do_in) e [do_out](#codecvt__do_out) restituiscono sempre `codecvt_base::noconv`.  
  
 Nella libreria C++ standard vengono definite diverse specializzazioni esplicite:  
  
 `template<>`  
  
 `codecvt<wchar_t, char, mbstate_t>`  
  
 Esegue la conversione tra le sequenze `wchar_t` e `char`.  
  
 `template<>`  
  
 `codecvt<char16_t, char, mbstate_t>`  
  
 esegue la conversione tra le sequenze `char16_t` codificate come UTF-16 e le sequenze `char` codificate come UTF-8.  
  
 `template<>`  
  
 `codecvt<char32_t, char, mbstate_t>`  
  
 esegue la conversione tra le sequenze `char32_t` codificate come UTF-32 (UCS-4) e le sequenze `char` codificate come UTF-8.  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[codecvt](#codecvt__codecvt)|Costruttore per gli oggetti della classe `codecvt` utilizzato come facet delle impostazioni locali per gestire le conversioni.|  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[extern_type](#codecvt__extern_type)|Tipo di carattere utilizzato per le rappresentazioni esterne.|  
|[intern_type](#codecvt__intern_type)|Tipo di carattere utilizzato per le rappresentazioni interne.|  
|[state_type](#codecvt__state_type)|Tipo di carattere utilizzato per rappresentare gli stati intermedi durante le conversione tra le rappresentazioni interne ed esterne.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[always_noconv](#codecvt__always_noconv)|Verifica che non sia necessario eseguire alcuna conversione.|  
|[do_always_noconv](#codecvt__do_always_noconv)|Funzione virtuale chiamata per verificare che non sia necessario eseguire alcuna conversione.|  
|[do_encoding](#codecvt__do_encoding)|Funzione virtuale che consente di verificare se la codifica del flusso `Byte` è dipendente dallo stato, se il rapporto tra i `Byte` utilizzati e i `CharType` generati è costante e, in caso affermativo, determina il valore di tale rapporto.|  
|[do_in](#codecvt__do_in)|Funzione virtuale chiamata per convertire una sequenza di `Byte` interni in una sequenza di `CharType` esterni.|  
|[do_length](#codecvt__do_length)|Funzione virtuale che determina il numero di `Byte` di una sequenza specificata di `Byte` esterni che produce non più di un numero specificato di `CharType` interni e che restituisce tale numero di `Byte`.|  
|[do_max_length](#codecvt__do_max_length)|Funzione virtuale che restituisce il numero massimo di byte esterni necessari per produrre un `CharType` interno.|  
|[do_out](#codecvt__do_out)|Funzione virtuale chiamata per convertire una sequenza di `CharType` interni in una sequenza di byte esterni.|  
|[do_unshift](#codecvt__do_unshift)|Funzione virtuale chiamata per fornire i `Byte` necessari in una conversione dipendente dallo stato per completare l'ultimo carattere di una sequenza di `Byte`.|  
|[codifica](#codecvt__encoding)|Verifica se la codifica del flusso `Byte` è dipendente dallo stato, se il rapporto tra i `Byte` utilizzati e i `CharType` generati è costante e, in caso affermativo, determina il valore di tale rapporto.|  
|[in](#codecvt__in)|Converte una rappresentazione esterna di una sequenza di `Byte` in una rappresentazione interna di una sequenza di `CharType`.|  
|[lunghezza](#codecvt__length)|Determina il numero di `Byte` di una sequenza specificata di `Byte` esterni che produce non più di un numero specificato di `CharType` interni e restituisce tale numero di `Byte`.|  
|[max_length](#codecvt__max_length)|Restituisce il numero massimo di `Byte` esterni necessari per produrre un `CharType` interno.|  
|[out](#codecvt__out)|Converte una sequenza di `CharType` interni in una sequenza di `Byte` esterni.|  
|[unshift](#codecvt__unshift)|Fornisce il `Byte` esterno necessario in una conversione dipendente dallo stato per completare l'ultimo carattere della sequenza di `Byte`.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \< impostazioni locali>  
  
 **Spazio dei nomi:** std  
  
##  <a name="a-namecodecvtalwaysnoconva-codecvtalwaysnoconv"></a><a name="codecvt__always_noconv"></a>  codecvt:: always_noconv  
 Verifica che non sia necessario eseguire alcuna conversione.  
  
```  
bool always_noconv() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore booleano che è **true** se è necessario eseguire alcuna conversione; **false** è almeno uno deve essere eseguita.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [do_always_noconv](#codecvt__do_always_noconv).  
  
### <a name="example"></a>Esempio  
  
```  
// codecvt_always_noconv.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
using namespace std;  
  
int main( )     
{  
   locale loc ( "German_Germany" );  
   bool result1 = use_facet<codecvt<char, char, mbstate_t> >   
      ( loc ).always_noconv( );  
  
   if ( result1 )  
      cout << "No conversion is needed." << endl;  
   else  
      cout << "At least one conversion is required." << endl;  
  
   bool result2 = use_facet<codecvt<wchar_t, char, mbstate_t> >   
      ( loc ).always_noconv( );  
  
   if ( result2 )  
      cout << "No conversion is needed." << endl;  
   else  
      cout << "At least one conversion is required." << endl;  
}  
```  
  
```Output  
No conversion is needed.  
At least one conversion is required.  
```  
  
##  <a name="a-namecodecvtcodecvta-codecvtcodecvt"></a><a name="codecvt__codecvt"></a>  codecvt:: codecvt  
 Il costruttore per gli oggetti della classe codecvt che viene utilizzato come facet delle impostazioni locali per gestire le conversioni.  
  
```  
explicit codecvt(size_t _Refs = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `_Refs`  
 Valore integer utilizzato per specificare il tipo di gestione della memoria per l'oggetto.  
  
### <a name="remarks"></a>Note  
 I valori possibili per il `_Refs` parametro e il loro significato sono:  
  
-   0: la durata dell'oggetto è gestita da impostazioni locali che contengono.  
  
-   1: la durata dell'oggetto deve essere gestita manualmente.  
  
-   \> 0: questi valori non definiti.  
  
 Il costruttore inizializza la `locale::facet` oggetto di base con **delle impostazioni locali::**[facet](../standard-library/locale-class.md#facet_class)( `_Refs`) *.*  
  
##  <a name="a-namecodecvtdoalwaysnoconva-codecvtdoalwaysnoconv"></a><a name="codecvt__do_always_noconv"></a>  codecvt:: do_always_noconv  
 Funzione virtuale chiamata per verificare che non sia necessario eseguire alcuna conversione.  
  
```  
virtual bool do_always_noconv() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 La funzione membro virtuale protetta restituisce **true** soltanto se ogni chiamata a [do_in](#codecvt__do_in) o [do_out](#codecvt__do_out) restituisce **noconv**.  
  
 Restituisce sempre la versione del modello **true**.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [always_noconv](#codecvt__always_noconv), che chiama `do_always_noconv`.  
  
##  <a name="a-namecodecvtdoencodinga-codecvtdoencoding"></a><a name="codecvt__do_encoding"></a>  codecvt:: do_encoding  
 Una funzione virtuale che verifica se la codifica del **Byte** flusso è dipendente dallo stato, se il rapporto tra il **Byte**utilizzati e **CharType**generati è costante e, in caso affermativo, determina il valore di tale rapporto.  
  
```  
virtual int do_encoding() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 La funzione membro virtuale protetta restituisce:  
  
-   – 1, se la codifica delle sequenze di tipo `extern_type` è stato dipendente.  
  
-   0 se la codifica implica le sequenze di lunghezza variabile.  
  
- *N*, se la codifica riguarda solo le sequenze di lunghezza *N*  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [codifica](#codecvt__encoding), che chiama `do_encoding`.  
  
##  <a name="a-namecodecvtdoina-codecvtdoin"></a><a name="codecvt__do_in"></a>  codecvt:: do_in  
 Una funzione virtuale chiamata per convertire una sequenza di esterni **Byte**in una sequenza di interni **CharType**s.  
  
```  
virtual result do_in(
    StateType& _State,  
    const Byte* first1,   
    const Byte* last1,   
    const Byte*& next1,  
    CharType* first2,  
    CharType* last2,  
    CharType*& next2,) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_State`  
 Lo stato di conversione che viene mantenuto tra le chiamate alla funzione membro.  
  
 ` first1`  
 Puntatore all'inizio della sequenza da convertire.  
  
 ` last1`  
 Puntatore alla fine della sequenza da convertire.  
  
 ` next1`  
 Puntatore oltre la fine della sequenza convertita, al primo carattere non convertito.  
  
 ` first2`  
 Puntatore all'inizio della sequenza convertita.  
  
 ` last2`  
 Puntatore alla fine della sequenza convertita.  
  
 ` next2`  
 Puntatore al **CharType** fornito dopo l'ultima conversione **CharType**, al primo carattere nella sequenza di destinazione non modificato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituito che indica l'esito positivo, esito positivo parziale o negativo dell'operazione. La funzione restituisce:  
  
- **codecvt_base::Error** Se la sequenza di origine è modo corretto.  
  
- `codecvt_base::noconv` Se la funzione non esegue conversioni.  
  
- **codecvt_base::OK** Se la conversione ha esito positivo.  
  
- **codecvt_base::partial** Se l'origine è insufficiente o se la destinazione non è abbastanza grande per consentire la conversione.  
  
### <a name="remarks"></a>Note  
 `_State` deve rappresentare lo stato di conversione iniziale all'inizio di una nuova sequenza di origine. La funzione modifica il valore archiviato in base alle necessità per riflettere lo stato corrente di una corretta conversione. In caso contrario, il valore archiviato è specificato.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [in](#codecvt__in), che chiama `do_in`.  
  
##  <a name="a-namecodecvtdolengtha-codecvtdolength"></a><a name="codecvt__do_length"></a>  codecvt:: do_length  
 Una funzione virtuale che determina quanti **Byte**s da una sequenza specificata di esterno **Byte**produce non più di un determinato numero di interno **CharType**s e restituisce tale numero di **Byte**s.  
  
```  
virtual int do_length(
    const StateType& _State,  
    const Byte* first1,   
    const Byte* last1,  
    size_t _Len2) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_State`  
 Lo stato di conversione che viene mantenuto tra le chiamate alla funzione membro.  
  
 ` first1`  
 Puntatore all'inizio della sequenza esterna.  
  
 ` last1`  
 Puntatore alla fine della sequenza esterna.  
  
 `_Len2`  
 Il numero massimo di **Byte**che può essere restituito dalla funzione membro.  
  
### <a name="return-value"></a>Valore restituito  
 Valore intero che rappresenta il numero massimo di conversioni, non è maggiore `_Len2`, definito dalla sequenza di origine esterna in [ ` first1`, ` last1`).  
  
### <a name="remarks"></a>Note  
 La funzione membro virtuale protetta chiama in modo efficace `do_in`( `_State`, ` first1`, ` last1`, ` next1`, `_Buf`, `_Buf` + `_Len2`, ` next2`) per `_State` (una copia dello stato), alcuni buffer `_Buf`, e i puntatori ` next1`e ` next2`.  
  
 Restituisce quindi ` next2` - **buf**. In questo modo, viene contato il numero massimo di conversioni, non è maggiore `_Len2`, definito dalla sequenza di origine in [ ` first1`, ` last1`).  
  
 La versione del modello restituisce sempre il valore minore di ` last1` – ` first1` e `_Len2`.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [lunghezza](#codecvt__length), che chiama **do_length**.  
  
##  <a name="a-namecodecvtdomaxlengtha-codecvtdomaxlength"></a><a name="codecvt__do_max_length"></a>  codecvt:: do_max_length  
 Una funzione virtuale che restituisce il numero massimo di esterni **Byte**necessari per produrre una interna **CharType**.  
  
```  
virtual int do_max_length() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero massimo di **Byte**necessari per produrre uno **CharType**.  
  
### <a name="remarks"></a>Note  
 La funzione membro virtuale protetta restituisce il valore più grande consentito che può essere restituito da [do_length](#codecvt__do_length)( ` first1`, ` last1`, 1) per i valori validi arbitrari di ` first1` e ` last1`.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [max_length](#codecvt__max_length), che chiama `do_max_length`.  
  
##  <a name="a-namecodecvtdoouta-codecvtdoout"></a><a name="codecvt__do_out"></a>  codecvt:: do_out  
 Una funzione virtuale chiamata per convertire una sequenza di interna **CharType**in una sequenza di esterni **Byte**s.  
  
```  
virtual result do_out(
    StateType& _State,  
    const CharType* first1,   
    const CharType* last1,  
    const CharType*& next1,  
    Byte* first2,   
    Byte* last2,   
    Byte*& next2) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_State`  
 Lo stato di conversione che viene mantenuto tra le chiamate alla funzione membro.  
  
 ` first1`  
 Puntatore all'inizio della sequenza da convertire.  
  
 ` last1`  
 Puntatore alla fine della sequenza da convertire.  
  
 ` next1`  
 Riferimento a un puntatore al primo non convertiti **CharType**, dopo l'ultimo **CharType** convertito.  
  
 ` first2`  
 Puntatore all'inizio della sequenza convertita.  
  
 ` last2`  
 Puntatore alla fine della sequenza convertita.  
  
 ` next2`  
 Riferimento a un puntatore al primo non convertiti **Byte**, dopo l'ultimo **Byte** convertito.  
  
### <a name="return-value"></a>Valore restituito  
 La funzione restituisce:  
  
- **codecvt_base::Error** Se la sequenza di origine è modo corretto.  
  
- `codecvt_base::noconv` Se la funzione non esegue conversioni.  
  
- **codecvt_base::OK** Se la conversione ha esito positivo.  
  
- **codecvt_base::partial** Se l'origine è insufficiente o se la destinazione non è sufficiente per consentire la conversione.  
  
### <a name="remarks"></a>Note  
 `_State` deve rappresentare lo stato di conversione iniziale all'inizio di una nuova sequenza di origine. La funzione modifica il valore archiviato in base alle necessità per riflettere lo stato corrente di una corretta conversione. In caso contrario, il valore archiviato è specificato.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [out](#codecvt__out), che chiama `do_out`.  
  
##  <a name="a-namecodecvtdounshifta-codecvtdounshift"></a><a name="codecvt__do_unshift"></a>  codecvt:: do_unshift  
 Una funzione virtuale chiamata per fornire il **Byte**necessari in una conversione dipendente dallo stato per completare l'ultimo carattere in una sequenza di **Byte**s.  
  
```  
virtual result do_unshift(
    StateType& _State,  
    Byte* first2,   
    Byte* last2,   
    Byte*& next2) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_State`  
 Lo stato di conversione che viene mantenuto tra le chiamate alla funzione membro.  
  
 ` first2`  
 Puntatore alla prima posizione nell'intervallo di destinazione.  
  
 ` last2`  
 Puntatore all'ultima posizione dell'intervallo di destinazione.  
  
 ` next2`  
 Puntatore al primo elemento nella sequenza di destinazione non modificato.  
  
### <a name="return-value"></a>Valore restituito  
 La funzione restituisce:  
  
- **codecvt_base::Error** se _ *stato* rappresenta uno stato non valido  
  
- `codecvt_base::noconv` Se la funzione viene eseguita alcuna conversione  
  
- **codecvt_base::OK** Se la conversione ha esito positivo  
  
- **codecvt_base::partial** Se la destinazione non è sufficiente per consentire la conversione  
  
### <a name="remarks"></a>Note  
 La funzione membro virtuale protetta prova a convertire l'elemento di origine **CharType**(0) in una sequenza di destinazione che archivia in [ ` first2`, ` last2`), ad eccezione dell'elemento di terminazione **Byte**(0). Archivia sempre in ` next2` un puntatore al primo elemento nella sequenza di destinazione non modificato.  
  
 _ *Stato* deve rappresentare lo stato di conversione iniziale all'inizio di una nuova sequenza di origine. La funzione modifica il valore archiviato in base alle necessità per riflettere lo stato corrente di una corretta conversione. Conversione in genere, l'elemento di origine **CharType**(0), lo stato corrente nello stato conversione iniziale.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [unshift](#codecvt__unshift), che chiama `do_unshift`.  
  
##  <a name="a-namecodecvtencodinga-codecvtencoding"></a><a name="codecvt__encoding"></a>  codecvt:: Encoding  
 Verifica se la codifica del **Byte** flusso è dipendente dallo stato, se il rapporto tra il **Byte**utilizzati e **CharType**generati è costante e, in caso affermativo, determina il valore di tale rapporto.  
  
```  
int encoding() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il valore restituito è positivo, tale valore è il numero costante di **Byte** caratteri necessari per produrre il **CharType** caratteri.  
  
 La funzione membro virtuale protetta restituisce:  
  
-   – 1, se la codifica delle sequenze di tipo `extern_type` è stato dipendente.  
  
-   0 se la codifica implica le sequenze di lunghezza variabile.  
  
- *N*, se la codifica riguarda solo le sequenze di lunghezza *N.*  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [do_encoding](#codecvt__do_encoding).  
  
### <a name="example"></a>Esempio  
  
```  
// codecvt_encoding.cpp  
// compile with: /EHsc  
#include <locale>  
#include <iostream>  
using namespace std;  
  
int main( )     
{  
   locale loc ( "German_Germany" );  
   int result1 = use_facet<codecvt<char, char, mbstate_t> > ( loc ).encoding ( );  
   cout << result1 << endl;  
   result1 = use_facet<codecvt<wchar_t, char, mbstate_t> > ( loc ).encoding( );  
   cout << result1 << endl;  
   result1 = use_facet<codecvt<char, wchar_t, mbstate_t> > ( loc ).encoding( );  
   cout << result1 << endl;  
}  
```  
  
```Output  
1  
1  
1  
```  
  
##  <a name="a-namecodecvtexterntypea-codecvtexterntype"></a><a name="codecvt__extern_type"></a>  codecvt:: extern_type  
 Tipo di carattere utilizzato per le rappresentazioni esterne.  
  
```  
typedef Byte extern_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello **Byte**.  
  
##  <a name="a-namecodecvtina-codecvtin"></a><a name="codecvt__in"></a>  codecvt:: in  
 Converte una rappresentazione esterna di una sequenza di **Byte**in una rappresentazione interna di una sequenza di **CharType**s.  
  
```  
result in(
    StateType& _State,  
    const Byte* first1,   
    const Byte* last1,   
    const Byte*& next1,  
    CharType* first2,  
    CharType* last2,  
    CharType*& next2,) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_State`  
 Lo stato di conversione che viene mantenuto tra le chiamate alla funzione membro.  
  
 ` first1`  
 Puntatore all'inizio della sequenza da convertire.  
  
 ` last1`  
 Puntatore alla fine della sequenza da convertire.  
  
 ` next1`  
 Puntatore oltre la fine della sequenza convertita il primo carattere non convertito.  
  
 ` first2`  
 Puntatore all'inizio della sequenza convertita.  
  
 ` last2`  
 Puntatore alla fine della sequenza convertita.  
  
 ` next2`  
 Puntatore al **CharType** fornito dopo l'ultima conversione **Chartype** al primo carattere nella sequenza di destinazione non modificato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituito che indica l'esito positivo, esito positivo parziale o negativo dell'operazione. La funzione restituisce:  
  
- **codecvt_base::Error** Se la sequenza di origine è modo corretto.  
  
- `codecvt_base::noconv` Se la funzione non esegue conversioni.  
  
- **codecvt_base::OK** Se la conversione ha esito positivo.  
  
- **codecvt_base::partial** Se l'origine è insufficiente o se la destinazione non è sufficiente per consentire la conversione.  
  
### <a name="remarks"></a>Note  
 `_State` deve rappresentare lo stato di conversione iniziale all'inizio di una nuova sequenza di origine. La funzione modifica il valore archiviato in base alle esigenze, in modo da riflettere lo stato corrente di una corretta conversione. Dopo una conversione parziale, `_State` deve essere impostata in modo da consentire la conversione riprendere quando arrivano nuovi caratteri.  
  
 La funzione membro restituisce [do_in](#codecvt__do_in)( `_State`, _ *First1, last1, next1, First2, _Llast2, next2*).  
  
### <a name="example"></a>Esempio  
  
```  
// codecvt_in.cpp  
// compile with: /EHsc  
#define _INTL  
#include <locale>  
#include <iostream>  
using namespace std;  
#define LEN 90  
int main( )     
{  
   char* pszExt = "This is the string to be converted!";  
   wchar_t pwszInt [LEN+1];  
   memset(&pwszInt[0], 0, (sizeof(wchar_t))*(LEN+1));  
   const char* pszNext;  
   wchar_t* pwszNext;  
   mbstate_t state = {0};  
   locale loc("C");//English_Britain");//German_Germany  
   int res = use_facet<codecvt<wchar_t, char, mbstate_t> >  
     ( loc ).in( state,  
          pszExt, &pszExt[strlen(pszExt)], pszNext,  
          pwszInt, &pwszInt[strlen(pszExt)], pwszNext );  
   pwszInt[strlen(pszExt)] = 0;  
   wcout << ( (res!=codecvt_base::error)  L"It worked! " : L"It didn't work! " )  
   << L"The converted string is:\n ["  
   << &pwszInt[0]  
   << L"]" << endl;  
   exit(-1);  
}  
```  
  
```Output  
It worked! The converted string is:  
 [This is the string to be converted!]  
```  
  
##  <a name="a-namecodecvtinterntypea-codecvtinterntype"></a><a name="codecvt__intern_type"></a>  codecvt:: intern_type  
 Tipo di carattere utilizzato per le rappresentazioni interne.  
  
```  
typedef CharType intern_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello **CharType**.  
  
##  <a name="a-namecodecvtlengtha-codecvtlength"></a><a name="codecvt__length"></a>  codecvt:: Length  
 Determina quanti **Byte**s da una sequenza specificata di esterno **Byte**produce non più di un determinato numero di interno **CharType**s e restituisce tale numero di **Byte**s.  
  
```  
int length(
    const StateType& _State,  
    const Byte* first1,   
    const Byte* last1,  
    size_t _Len2) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_State`  
 Lo stato di conversione che viene mantenuto tra le chiamate alla funzione membro.  
  
 ` first1`  
 Puntatore all'inizio della sequenza esterna.  
  
 ` last1`  
 Puntatore alla fine della sequenza esterna.  
  
 `_Len2`  
 Numero massimo di byte che possono essere restituiti dalla funzione membro.  
  
### <a name="return-value"></a>Valore restituito  
 Valore intero che rappresenta il numero massimo di conversioni, non è maggiore `_Len2`, definito dalla sequenza di origine esterna in [ ` first1`, ` last1`).  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [do_length](#codecvt__do_length)( *state, first1*, ` last1`, `_Len2`).  
  
### <a name="example"></a>Esempio  
  
```  
// codecvt_length.cpp  
// compile with: /EHsc  
#define _INTL  
#include <locale>  
#include <iostream>  
using namespace std;  
#define LEN 90  
int main( )     
{  
   char* pszExt = "This is the string whose length is to be measured!";  
   mbstate_t state = {0};  
   locale loc("C");//English_Britain");//German_Germany  
   int res = use_facet<codecvt<wchar_t, char, mbstate_t> >  
     ( loc ).length( state,  
          pszExt, &pszExt[strlen(pszExt)], LEN );  
   cout << "The length of the string is: ";  
   wcout << res;  
   cout << "." << endl;  
   exit(-1);  
}  
```  
  
```Output  
The length of the string is: 50.  
```  
  
##  <a name="a-namecodecvtmaxlengtha-codecvtmaxlength"></a><a name="codecvt__max_length"></a>  codecvt:: max_length  
 Restituisce il numero massimo di esterni **Byte**necessari per produrre una interna **CharType**.  
  
```  
int max_length() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero massimo di **Byte**necessari per produrre uno **CharType**.  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce [do_max_length](#codecvt__do_max_length).  
  
### <a name="example"></a>Esempio  
  
```  
// codecvt_max_length.cpp  
// compile with: /EHsc  
#define _INTL  
#include <locale>  
#include <iostream>  
using namespace std;  
  
int main( )     
{  
   locale loc( "C");//English_Britain" );//German_Germany  
   int res = use_facet<codecvt<char, char, mbstate_t> >  
     ( loc ).max_length( );  
   wcout << res << endl;  
}  
```  
  
```Output  
1  
```  
  
##  <a name="a-namecodecvtouta-codecvtout"></a><a name="codecvt__out"></a>  codecvt:: out  
 Converte una sequenza di interna **CharType**in una sequenza di esterni **Byte**s.  
  
```  
result out(
    StateType& _State,  
    const CharType* first1,   
    const CharType* last1,  
    const CharType*& next1,  
    Byte* first2,   
    Byte* last2,   
    Byte*& next2) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_State`  
 Lo stato di conversione che viene mantenuto tra le chiamate alla funzione membro.  
  
 ` first1`  
 Puntatore all'inizio della sequenza da convertire.  
  
 ` last1`  
 Puntatore alla fine della sequenza da convertire.  
  
 ` next1`  
 Riferimento a un puntatore al primo non convertiti **CharType** dopo l'ultimo **CharType** convertito.  
  
 ` first2`  
 Puntatore all'inizio della sequenza convertita.  
  
 ` last2`  
 Puntatore alla fine della sequenza convertita.  
  
 ` next2`  
 Riferimento a un puntatore al primo non convertiti **Byte** dopo l'ultima conversione **Byte**.  
  
### <a name="return-value"></a>Valore restituito  
 La funzione membro restituisce [do_out](#codecvt__do_out)( `_State`, ` first1`, ` last1`, ` next1`, ` first2`, ` last2`, ` next2`).  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [codecvt:: do_out](#codecvt__do_out).  
  
### <a name="example"></a>Esempio  
  
```  
// codecvt_out.cpp  
// compile with: /EHsc  
#define _INTL  
#include <locale>  
#include <iostream>  
#include <wchar.h>  
using namespace std;  
#define LEN 90  
int main( )     
{  
   char pszExt[LEN+1];  
   wchar_t *pwszInt = L"This is the wchar_t string to be converted.";  
   memset( &pszExt[0], 0, ( sizeof( char ) )*( LEN+1 ) );  
   char* pszNext;  
   const wchar_t* pwszNext;  
   mbstate_t state;  
   locale loc("C");//English_Britain");//German_Germany  
   int res = use_facet<codecvt<wchar_t, char, mbstate_t> >  
      ( loc ).out( state,  
      pwszInt, &pwszInt[wcslen( pwszInt )], pwszNext ,  
      pszExt, &pszExt[wcslen( pwszInt )], pszNext );  
   pszExt[wcslen( pwszInt )] = 0;  
   cout << ( ( res!=codecvt_base::error )  "It worked: " : "It didn't work: " )  
   << "The converted string is:\n ["  
   << &pszExt[0]  
   << "]" << endl;  
}  
```  
  
```Output  
It worked: The converted string is:  
 [This is the wchar_t string to be converted.]  
```  
  
##  <a name="a-namecodecvtstatetypea-codecvtstatetype"></a><a name="codecvt__state_type"></a>  codecvt:: state_type  
 Tipo di carattere utilizzato per rappresentare gli stati intermedi durante le conversione tra le rappresentazioni interne ed esterne.  
  
```  
typedef StateType state_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello **StateType**.  
  
##  <a name="a-namecodecvtunshifta-codecvtunshift"></a><a name="codecvt__unshift"></a>  codecvt:: unshift  
 Fornisce la **Byte**necessari in una conversione dipendente dallo stato per completare l'ultimo carattere in una sequenza di **Byte**s.  
  
```  
result unshift(
    StateType& _State,  
    Byte* first2,   
    Byte* last2,   
    Byte*& next2) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_State`  
 Lo stato di conversione che viene mantenuto tra le chiamate alla funzione membro.  
  
 ` first2`  
 Puntatore alla prima posizione nell'intervallo di destinazione.  
  
 ` last2`  
 Puntatore all'ultima posizione dell'intervallo di destinazione.  
  
 ` next2`  
 Puntatore al primo elemento nella sequenza di destinazione non modificato.  
  
### <a name="return-value"></a>Valore restituito  
 La funzione restituisce:  
  
- **codecvt_base::Error** Se lo stato rappresenta uno stato non valido.  
  
- `codecvt_base::noconv` Se la funzione non esegue conversioni.  
  
- **codecvt_base::OK** Se la conversione ha esito positivo.  
  
- **codecvt_base::partial** Se la destinazione non è sufficiente per consentire la conversione.  
  
### <a name="remarks"></a>Note  
 La funzione membro virtuale protetta prova a convertire l'elemento di origine **CharType**(0) in una sequenza di destinazione che archivia in [ ` first2`, ` last2`), ad eccezione dell'elemento di terminazione **Byte**(0). Archivia sempre in ` next2` un puntatore al primo elemento nella sequenza di destinazione non modificato.  
  
 `_State` deve rappresentare lo stato di conversione iniziale all'inizio di una nuova sequenza di origine. La funzione modifica il valore archiviato in base alle esigenze, in modo da riflettere lo stato corrente di una corretta conversione. Conversione in genere, l'elemento di origine **CharType**(0), lo stato corrente nello stato conversione iniziale.  
  
 La funzione membro restituisce [do_unshift](#codecvt__do_unshift)( `_State`, ` first2`, ` last2`, ` next2` ).  
  
## <a name="see-also"></a>Vedere anche  
 [\< impostazioni locali>](../standard-library/locale.md)   
 [Tabelle codici](../c-runtime-library/code-pages.md)   
 [Nomi delle impostazioni locali, lingue e stringhe paese/area geografica](../c-runtime-library/locale-names-languages-and-country-region-strings.md)   
 [Sicurezza dei thread nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)

