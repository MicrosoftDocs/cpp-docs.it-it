---
title: CDC (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDC
dev_langs:
- C++
helpviewer_keywords:
- Windows [C++], device contexts
- Windows 95 [C++], screen coordinates
- device contexts [C++], CDC class
- screen coordinates in device contexts
- coordinates in Windows 95/98 [C++]
- Windows 98 [C++], screen coordinates
- CDC class
ms.assetid: 715b3334-cb2b-4c9c-8067-02eb7c66c8b2
caps.latest.revision: 21
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
ms.openlocfilehash: 80ccd3f8bed6bd74e22d4db5e176ee50528d3187
ms.lasthandoff: 02/24/2017

---
# <a name="cdc-class"></a>CDC (classe)
Definisce una classe di oggetti di un contesto di dispositivo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDC : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDC::CDC](#cdc)|Costruisce un oggetto `CDC`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDC::AbortDoc](#abortdoc)|Termina il processo di stampa corrente, tutto ciò che l'applicazione è scritta per il dispositivo dall'ultima chiamata di cancellazione di `StartDoc` funzione membro.|  
|[CDC::AbortPath](#abortpath)|Chiude ed Elimina tutti i percorsi nel contesto di dispositivo.|  
|[CDC::AddMetaFileComment](#addmetafilecomment)|Copia il commento da un buffer in un metafile in formato avanzato specificato.|  
|[CDC::AlphaBlend](#alphablend)|Visualizza le bitmap con pixel trasparente o semitrasparente.|  
|[CDC::AngleArc](#anglearc)|Disegna un segmento di linea e un arco e sposta la posizione corrente per il punto finale dell'arco.|  
|[CDC::ARC](#arc)|Disegna un arco ellittico.|  
|[CDC::ArcTo](#arcto)|Disegna un arco ellittico. Questa funzione è simile a `Arc`, ad eccezione del fatto che la posizione corrente viene aggiornata.|  
|[CDC::Attach](#attach)|Associa un contesto di dispositivo Windows a questo `CDC` oggetto.|  
|[CDC:: BeginPath](#beginpath)|Verrà visualizzata una parentesi di percorso nel contesto di dispositivo.|  
|[CDC::BitBlt](#bitblt)|Copia una bitmap da un contesto di dispositivo specificato.|  
|[CDC::Chord](#chord)|Crea una corda (una figura chiusa delimitata dall'intersezione di un'ellisse e un segmento di linea).|  
|[CDC::CloseFigure](#closefigure)|Chiude una figura aperta in un percorso.|  
|[CDC::CreateCompatibleDC](#createcompatibledc)|Crea un contesto di dispositivo di memoria che è compatibile con un altro contesto di dispositivo. Consente di preparare le immagini in memoria.|  
|[CDC::CreateDC](#createdc)|Crea un contesto di dispositivo per un dispositivo specifico.|  
|[CDC::CreateIC](#createic)|Crea un contesto di informazioni per un dispositivo specifico. Questo fornisce un modo rapido per ottenere informazioni sul dispositivo senza creare un contesto di dispositivo.|  
|[CDC::DeleteDC](#deletedc)|Elimina il contesto di dispositivo Windows associato a questo `CDC` oggetto.|  
|[CDC::DeleteTempMap](#deletetempmap)|Chiamato dal `CWinApp` gestore tempo di inattività per eliminare qualsiasi temporaneo `CDC` oggetto creato da `FromHandle`. Rimuoverà inoltre il contesto di dispositivo.|  
|[CDC::Detach](#detach)|Disconnette il contesto di dispositivo Windows da questo `CDC` oggetto.|  
|[CDC::DPtoHIMETRIC](#dptohimetric)|Converte l'unità della periferica in **HIMETRIC** unità.|  
|[CDC::DPtoLP](#dptolp)|Converte l'unità di dispositivo in unità logiche.|  
|[CDC::Draw3dRect](#draw3drect)|Disegna un rettangolo tridimensionale.|  
|[CDC::DrawDragRect](#drawdragrect)|Cancella e ridisegna un rettangolo come viene trascinato.|  
|[CDC::DrawEdge](#drawedge)|Consente di disegnare i bordi di un rettangolo.|  
|[CDC::DrawEscape](#drawescape)|Accessi alla funzionalità di un video che non sono direttamente disponibili tramite la graphics device interface (GDI) di disegno.|  
|[CDC::DrawFocusRect](#drawfocusrect)|Disegna un rettangolo con lo stile utilizzato per indicare lo stato attivo.|  
|[CDC::DrawFrameControl](#drawframecontrol)|Disegnare un controllo frame.|  
|[CDC::DrawIcon](#drawicon)|Disegna un'icona.|  
|[CDC::DrawState](#drawstate)|Visualizza un'immagine e si applica un effetto visivo per indicare lo stato.|  
|[CDC](#drawtext)|Disegna il testo nel rettangolo specificato formattato.|  
|[CDC::DrawTextEx](#drawtextex)|Disegna il testo nel rettangolo specificato utilizzando i formati aggiuntivi formattato.|  
|[CDC::Ellipse](#ellipse)|Disegna un ellisse.|  
|[CDC::EndDoc](#enddoc)|Termina un processo di stampa tramito il `StartDoc` funzione membro.|  
|[CDC::EndPage](#endpage)|Informa il driver di dispositivo che sta terminando una pagina.|  
|[CDC::EndPath](#endpath)|Chiude una parentesi di percorso e seleziona il percorso definito parentesi nel contesto di dispositivo.|  
|[CDC:: EnumObjects](#enumobjects)|Enumera le penne e pennelli disponibili in un contesto di dispositivo.|  
|[CDC::escape](#escape)|Consente alle applicazioni di accedere alle funzionalità che non sono direttamente disponibili da un dispositivo specifico tramite GDI. Consente inoltre l'accesso alle funzioni di escape di Windows. Escape chiamate effettuate da un'applicazione vengono convertite e inviate al driver di dispositivo.|  
|[CDC::ExcludeClipRect](#excludecliprect)|Crea una nuova area di ritaglio costituito l'area di visualizzazione esistente meno il rettangolo specificato.|  
|[CDC::ExcludeUpdateRgn](#excludeupdatergn)|Impedisce la creazione all'interno di aree non valide di una finestra escludendo un'area nella finestra aggiornata da un'area di ritaglio.|  
|[CDC::ExtFloodFill](#extfloodfill)|Riempie un'area con il pennello corrente. Fornisce maggiore flessibilità di [CDC::FloodFill](#floodfill) funzione membro.|  
|[CDC::ExtTextOut](#exttextout)|Scrive una stringa di caratteri all'interno di un'area rettangolare utilizzando il tipo di carattere attualmente selezionato.|  
|[CDC::FillPath](#fillpath)|Chiude qualsiasi figure aperte nel percorso corrente e riempie l'area interna del percorso utilizzando il pennello corrente e la modalità di riempimento del poligono.|  
|[CDC::FillRect](#fillrect)|Inserisce un rettangolo specificato utilizzando un pennello specifico.|  
|[CDC::FillRgn](#fillrgn)|Riempie un'area specifica con il pennello specificato.|  
|[CDC::FillSolidRect](#fillsolidrect)|Riempie un rettangolo con un colore a tinta unita.|  
|[CDC::FlattenPath](#flattenpath)|Trasforma le curve nel percorso selezionato nel contesto di dispositivo corrente e trasforma ogni curva in una sequenza di righe.|  
|[CDC::FloodFill](#floodfill)|Riempie un'area con il pennello corrente.|  
|[CDC:: frameRect](#framerect)|Disegna un bordo intorno a un rettangolo.|  
|[CDC::FrameRgn](#framergn)|Disegna un bordo intorno a un'area specifica utilizzando un pennello.|  
|[CDC::FromHandle](#fromhandle)|Restituisce un puntatore a un `CDC` oggetto quando viene specificato un handle per un contesto di dispositivo. Se all'handle non è collegato un oggetto `CDC`, viene creato e collegato un oggetto `CDC` temporaneo.|  
|[CDC::GetArcDirection](#getarcdirection)|Restituisce la direzione di arco corrente per il contesto di dispositivo.|  
|[CDC::GetAspectRatioFilter](#getaspectratiofilter)|Recupera l'impostazione per il filtro corrente le proporzioni.|  
|[CDC::GetBkColor](#getbkcolor)|Recupera il colore di sfondo corrente.|  
|[CDC::GetBkMode](#getbkmode)|Recupera la modalità in background.|  
|[CDC::GetBoundsRect](#getboundsrect)|Restituisce il rettangolo di delimitazione accumulato corrente per il contesto di dispositivo specificato.|  
|[CDC::GetBrushOrg](#getbrushorg)|Recupera l'origine del pennello corrente.|  
|[CDC::GetCharABCWidths](#getcharabcwidths)|Recupera le larghezze, in unità logiche, di caratteri consecutivi in un intervallo specificato dal tipo di carattere corrente.|  
|[CDC::GetCharABCWidthsI](#getcharabcwidthsi)|Recupera le larghezze, in unità logiche di indici di glifi consecutivi in un intervallo specificato dal tipo di carattere TrueType corrente.|  
|[CDC::GetCharacterPlacement](#getcharacterplacement)|Recupero di vari tipi di informazioni su una stringa di caratteri.|  
|[CDC::GetCharWidth](#getcharwidth)|Recupera la larghezza delle frazioni di caratteri consecutivi in un intervallo specificato dal tipo di carattere corrente.|  
|[CDC::GetCharWidthI](#getcharwidthi)|Recupera le larghezze, in coordinate logiche, di indici di glifi consecutivi in un intervallo specificato dal tipo di carattere corrente.|  
|[CDC::GetClipBox](#getclipbox)|Recupera le dimensioni del rettangolo di delimitazione tightest intorno al limite di ritaglio corrente.|  
|[CDC::GetColorAdjustment](#getcoloradjustment)|Recupera i valori di regolazione del colore per il contesto di dispositivo.|  
|[CDC::GetCurrentBitmap](#getcurrentbitmap)|Restituisce un puntatore all'oggetto attualmente selezionato `CBitmap` oggetto.|  
|[CDC::GetCurrentBrush](#getcurrentbrush)|Restituisce un puntatore all'oggetto attualmente selezionato `CBrush` oggetto.|  
|[CDC::GetCurrentFont](#getcurrentfont)|Restituisce un puntatore all'oggetto attualmente selezionato `CFont` oggetto.|  
|[CDC::GetCurrentPalette](#getcurrentpalette)|Restituisce un puntatore all'oggetto attualmente selezionato `CPalette` oggetto.|  
|[CDC::GetCurrentPen](#getcurrentpen)|Restituisce un puntatore all'oggetto attualmente selezionato `CPen` oggetto.|  
|[CDC::GetCurrentPosition](#getcurrentposition)|Recupera la posizione corrente della penna (nelle coordinate logiche).|  
|[CDC::GetDCBrushColor](#getdcbrushcolor)|Recupera il colore corrente del pennello.|  
|[CDC::GetDCPenColor](#getdcpencolor)|Recupera il colore corrente della penna.|  
|[CDC:: GetDeviceCaps](#getdevicecaps)|Recupera un tipo specificato di informazioni specifiche del dispositivo sulle funzionalità di un dispositivo di visualizzazione specificata.|  
|[CDC::GetFontData](#getfontdata)|Recupera informazioni sulle metriche di carattere da un file ridimensionabili. Le informazioni da recuperare sono identificate specificando un offset nel file con tipo di carattere e la lunghezza delle informazioni da restituire.|  
|[CDC::GetFontLanguageInfo](#getfontlanguageinfo)|Restituisce informazioni sul tipo di carattere selezionato per il contesto di visualizzazione specificata.|  
|[CDC::GetGlyphOutline](#getglyphoutline)|Recupera la curva di struttura o una mappa di bit per carattere struttura nel tipo di carattere corrente.|  
|[CDC::GetGraphicsMode](#getgraphicsmode)|Recupera la modalità grafica corrente per il contesto di dispositivo specificato.|  
|[CDC::GetHalftoneBrush](#gethalftonebrush)|Recupera un pennello dei mezzitoni.|  
|[CDC::GetKerningPairs](#getkerningpairs)|Recupera il carattere crenatura coppie per il tipo di carattere attualmente selezionato nel contesto di dispositivo specificato.|  
|[CDC::getLayout](#getlayout)|Recupera il layout di un contesto di dispositivo (DC). Il layout può essere da sinistra verso destra (impostazione predefinita) o da destra a sinistra (con mirroring).|  
|[CDC::GetMapMode](#getmapmode)|Recupera la modalità di mapping corrente.|  
|[CDC::GetMiterLimit](#getmiterlimit)|Restituisce il limite per il contesto di dispositivo.|  
|[CDC::GetNearestColor](#getnearestcolor)|Recupera il colore logico più vicino al colore logico specificato che può rappresentare il dispositivo specificato.|  
|[CDC::GetOutlineTextMetrics](#getoutlinetextmetrics)|Recupera informazioni sulle metriche di carattere per tipi di carattere TrueType.|  
|[CDC::GetOutputCharWidth](#getoutputcharwidth)|Recupera le larghezze dei singoli caratteri in un gruppo di caratteri consecutivo dal tipo di carattere corrente utilizzando il contesto di dispositivo di output.|  
|[CDC::GetOutputTabbedTextExtent](#getoutputtabbedtextextent)|Calcola la larghezza e altezza di una stringa di caratteri nel contesto del dispositivo di output.|  
|[CDC::GetOutputTextExtent](#getoutputtextextent)|Calcola la larghezza e altezza di una riga di testo nel contesto del dispositivo di output usando il tipo di carattere corrente per determinare le dimensioni.|  
|[CDC::GetOutputTextMetrics](#getoutputtextmetrics)|Recupera le metriche per il carattere corrente dal contesto del dispositivo di output.|  
|[CDC::getPath](#getpath)|Recupera le coordinate che definiscono gli endpoint delle righe e i punti di controllo di curve trovate nel percorso selezionato nel contesto di dispositivo.|  
|[CDC::getPixel](#getpixel)|Recupera il valore di colore RGB del pixel nel punto specificato.|  
|[CDC::GetPolyFillMode](#getpolyfillmode)|Recupera la modalità di riempimento del poligono.|  
|[CDC::GetROP2](#getrop2)|Recupera la modalità di disegno corrente.|  
|[CDC::GetSafeHdc](#getsafehdc)|Restituisce [CDC::m_hDC](#m_hdc), il contesto di dispositivo di output.|  
|[CDC::GetStretchBltMode](#getstretchbltmode)|Recupera la modalità di adattamento bitmap corrente.|  
|[CDC::GetTabbedTextExtent](#gettabbedtextextent)|Calcola la larghezza e altezza di una stringa di caratteri nel contesto del dispositivo di attributo.|  
|[CDC::GetTextAlign](#gettextalign)|Recupera i flag di allineamento del testo.|  
|[CDC::GetTextCharacterExtra](#gettextcharacterextra)|Recupera l'impostazione corrente per la quantità di spaziatura tra caratteri relativamente.|  
|[CDC::GetTextColor](#gettextcolor)|Recupera il colore del testo corrente.|  
|[CDC::GetTextExtent](#gettextextent)|Calcola la larghezza e altezza di una riga di testo nel contesto del dispositivo attributo usando il tipo di carattere corrente per determinare le dimensioni.|  
|[CDC::GetTextExtentExPointI](#gettextextentexpointi)|Recupera il numero di caratteri in una stringa specificata che rientra in uno spazio specificato e riempie una matrice con l'estensione di testo per ognuno di tali caratteri.|  
|[CDC::GetTextExtentPointI](#gettextextentpointi)|Recupera la larghezza e l'altezza della matrice specificata di indici di glifi.|  
|[CDC::GetTextFace](#gettextface)|Copia il nome del tipo di carattere corrente in un buffer come una stringa con terminazione null.|  
|[CDC::GetTextMetrics](#gettextmetrics)|Recupera le metriche per il carattere corrente dal contesto del dispositivo di attributo.|  
|[CDC::GetViewportExt](#getviewportext)|Recupera gli extent x e y del riquadro di visualizzazione.|  
|[CDC::GetViewportOrg](#getviewportorg)|Recupera le coordinate x e y dell'origine del riquadro di visualizzazione.|  
|[CDC::GetWindow](#getwindow)|Restituisce la finestra associata al contesto di dispositivo di visualizzazione.|  
|[CDC::GetWindowExt](#getwindowext)|Recupera gli extent x e y della finestra associata.|  
|[CDC::GetWindowOrg](#getwindoworg)|Recupera le coordinate x e y dell'origine della finestra associata.|  
|[CDC::GetWorldTransform](#getworldtransform)|Recupera lo spazio mondo corrente alla trasformazione di spazio di paging.|  
|[CDC::GradientFill](#gradientfill)|Riempie strutture rettangolo e triangolo con un colore gradating.|  
|[CDC:: graystring](#graystring)|Consente di disegnare testo (grigio) nella posizione specificata in grigio.|  
|[CDC::HIMETRICtoDP](#himetrictodp)|Converte **HIMETRIC** unità in unità di dispositivo.|  
|[CDC::HIMETRICtoLP](#himetrictolp)|Converte **HIMETRIC** unità in unità logiche.|  
|[CDC::IntersectClipRect](#intersectcliprect)|Crea una nuova area di ritaglio che costituiscono l'intersezione tra l'area corrente e un rettangolo.|  
|[CDC::InvertRect](#invertrect)|Inverte il contenuto di un rettangolo.|  
|[CDC::InvertRgn](#invertrgn)|Inverte i colori in un'area.|  
|[CDC::IsPrinting](#isprinting)|Determina se il contesto di dispositivo viene utilizzato per la stampa.|  
|[CDC::LineTo](#lineto)|Disegna una linea dalla posizione corrente fino a ma non inclusi, un punto.|  
|[CDC::LPtoDP](#lptodp)|Converte le unità logiche in unità di dispositivo.|  
|[CDC::LPtoHIMETRIC](#lptohimetric)|Converte le unità logiche in **HIMETRIC** unità.|  
|[CDC::MaskBlt](#maskblt)|Combina i dati di colore per le bitmap di origine e di destinazione mediante la maschera specificata e l'operazione raster.|  
|[CDC::ModifyWorldTransform](#modifyworldtransform)|Modifica la trasformazione globale per un contesto di dispositivo utilizzando la modalità specificata.|  
|[CDC::MoveTo](#moveto)|Sposta la posizione corrente.|  
|[CDC::OffsetClipRgn](#offsetcliprgn)|Sposta l'area di visualizzazione del dispositivo specificato.|  
|[CDC::OffsetViewportOrg](#offsetviewportorg)|Modifica l'origine del riquadro di visualizzazione rispetto alle coordinate dell'origine del riquadro di visualizzazione corrente.|  
|[CDC::OffsetWindowOrg](#offsetwindoworg)|Modifica l'origine della finestra rispetto alle coordinate dell'origine della finestra corrente.|  
|[CDC::PaintRgn](#paintrgn)|Inserisce un'area del pennello selezionato.|  
|[CDC::PatBlt](#patblt)|Crea un modello di bit.|  
|[CDC::Pie](#pie)|Disegna una forma a torta spicchio.|  
|[CDC::PlayMetaFile](#playmetafile)|Consente di riprodurre il contenuto del metafile specificato sul dispositivo specificato. La versione migliorata del `PlayMetaFile` Visualizza l'immagine memorizzata nel metafile in formato avanzato specificato. Metafile può essere riprodotti qualsiasi numero di volte.|  
|[CDC::PlgBlt](#plgblt)|Esegue un trasferimento a blocchi di bit dei bit di dati relativi al colore dal rettangolo specificato nel contesto di dispositivo di origine al parallelogramma specificato nel contesto di dispositivo specificato.|  
|[CDC::PolyBezier](#polybezier)|Disegna una spline di Bzier uno o più. La posizione corrente non viene utilizzata né aggiornata.|  
|[CDC::PolyBezierTo](#polybezierto)|Disegna una spline di Bzier uno o più e sposta la posizione corrente per il punto finale della spline Bzier ultimo.|  
|[CDC::PolyDraw](#polydraw)|Disegna una serie di segmenti di linea e Bzier spline. Questa funzione Aggiorna la posizione corrente.|  
|[CDC::Polygon](#polygon)|Disegna un poligono composta da due o più punti (vertici) uniti da linee.|  
|[CDC::Polyline](#polyline)|Disegna una serie di segmenti lineari che connettono i punti specificati.|  
|[CDC::PolylineTo](#polylineto)|Disegna una o più linee rette e sposta la posizione corrente per il punto finale dell'ultima riga.|  
|[CDC::PolyPolygon](#polypolygon)|Crea due o più poligoni che vengono compilati utilizzando la modalità di riempimento del poligono. I poligoni sia indipendenti o si sovrappongano.|  
|[CDC::PolyPolyline](#polypolyline)|Consente di disegnare più serie di segmenti di linea collegati. La posizione corrente non viene utilizzata né aggiornata da questa funzione.|  
|[CDC::PtVisible](#ptvisible)|Specifica se il punto specificato si trova all'interno dell'area di ritaglio.|  
|[CDC::RealizePalette](#realizepalette)|Esegue il mapping di voci della tavolozza nella tavolozza dei logica corrente per la tavolozza di sistema.|  
|[CDC::Rectangle](#rectangle)|Disegna un rettangolo utilizzando la penna corrente e la riempie con il pennello corrente.|  
|[CDC::RectVisible](#rectvisible)|Determina se qualsiasi parte del rettangolo specificato si trova all'interno dell'area di ritaglio.|  
|[CDC::ReleaseAttribDC](#releaseattribdc)|Versioni `m_hAttribDC`, il contesto di dispositivo di attributo.|  
|[CDC::ReleaseOutputDC](#releaseoutputdc)|Versioni `m_hDC`, il contesto di dispositivo di output.|  
|[CDC::ResetDC](#resetdc)|Gli aggiornamenti di `m_hAttribDC` contesto di dispositivo.|  
|[CDC::RestoreDC](#restoredc)|Ripristina il contesto di dispositivo a uno stato precedente salvato con `SaveDC`.|  
|[CDC::RoundRect](#roundrect)|Disegna un rettangolo con angoli arrotondati utilizzando la penna corrente e compilato utilizzando il pennello corrente.|  
|[CDC::SaveDC](#savedc)|Salva lo stato corrente del contesto del dispositivo.|  
|[CDC::ScaleViewportExt](#scaleviewportext)|Modifica l'estensione viewport relativi valori correnti.|  
|[CDC::ScaleWindowExt](#scalewindowext)|Modifica gli extent finestra relativi valori correnti.|  
|[CDC::ScrollDC](#scrolldc)|Scorre un rettangolo di bit orizzontalmente e verticalmente.|  
|[CDC::SelectClipPath](#selectclippath)|Seleziona il percorso corrente come un'area di visualizzazione per il contesto di dispositivo, combinando la nuova area con un'area di ritaglio esistente utilizzando la modalità specificata.|  
|[CDC::SelectClipRgn](#selectcliprgn)|Combina l'area specificata con l'area di ritaglio corrente utilizzando la modalità specificata.|  
|[CDC::SelectObject](#selectobject)|Seleziona un oggetto di disegno, ad esempio una penna GDI.|  
|[CDC::SelectPalette](#selectpalette)|Seleziona la tavolozza logica.|  
|[CDC::SelectStockObject](#selectstockobject)|Seleziona uno dei predefiniti azionarie penne, pennelli o tipi di carattere forniti da Windows.|  
|[CDC:: SETABORTPROC](#setabortproc)|Imposta una funzione di callback fornito dal programmatore che Windows chiama se un processo di stampa deve essere interrotta.|  
|[CDC::SetArcDirection](#setarcdirection)|Imposta la direzione di disegno da utilizzare per le funzioni arco e il rettangolo.|  
|[CDC::SetAttribDC](#setattribdc)|Set `m_hAttribDC`, il contesto di dispositivo di attributo.|  
|[CDC::SetBkColor](#setbkcolor)|Imposta il colore di sfondo corrente.|  
|[CDC::SetBkMode](#setbkmode)|Imposta la modalità in background.|  
|[CDC::SetBoundsRect](#setboundsrect)|Controlla l'accumulo di informazioni rettangolo di delimitazione per il contesto di dispositivo specificato.|  
|[CDC::SetBrushOrg](#setbrushorg)|Specifica l'origine per il successivo pennello selezionato in un contesto di dispositivo.|  
|[CDC::SetColorAdjustment](#setcoloradjustment)|Imposta i valori di regolazione del colore per il contesto di dispositivo utilizzando i valori specificati.|  
|[CDC::SetDCBrushColor](#setdcbrushcolor)|Imposta il colore corrente del pennello.|  
|[CDC::SetDCPenColor](#setdcpencolor)|Imposta il colore corrente della penna.|  
|[CDC::SetGraphicsMode](#setgraphicsmode)|Imposta la modalità grafica corrente per il contesto di dispositivo specificato.|  
|[CDC::setLayout](#setlayout)|Modifica il layout di un contesto di dispositivo (DC).|  
|[CDC::SetMapMode](#setmapmode)|Imposta la modalità di mapping corrente.|  
|[CDC::SetMapperFlags](#setmapperflags)|Modifica l'algoritmo il mapper del tipo di carattere utilizzato quando viene eseguito il mapping di tipi di carattere logici per i tipi di carattere fisici.|  
|[CDC::SetMiterLimit](#setmiterlimit)|Imposta il limite per la lunghezza di join di giunzione per il contesto di dispositivo.|  
|[CDC::SetOutputDC](#setoutputdc)|Set `m_hDC`, il contesto di dispositivo di output.|  
|[CDC::SetPixel](#setpixel)|Imposta i pixel nel punto specificato per la migliore approssimazione del colore specificato.|  
|[CDC::SetPixelV](#setpixelv)|Imposta i pixel delle coordinate specificate per la migliore approssimazione del colore specificato. `SetPixelV`è più veloce `SetPixel` perché non è necessario restituire il valore di colore del punto di disegnare effettivamente.|  
|[CDC::SetPolyFillMode](#setpolyfillmode)|Imposta la modalità di riempimento del poligono.|  
|[CDC::SetROP2](#setrop2)|Imposta la modalità di disegno corrente.|  
|[CDC::SetStretchBltMode](#setstretchbltmode)|Imposta la modalità di adattamento bitmap.|  
|[CDC::setTextAlign](#settextalign)|Imposta i flag di allineamento del testo.|  
|[CDC::SetTextCharacterExtra](#settextcharacterextra)|Imposta la quantità di spaziatura tra caratteri relativamente.|  
|[CDC::SetTextColor](#settextcolor)|Imposta il colore del testo.|  
|[CDC::SetTextJustification](#settextjustification)|Aggiunge uno spazio per i caratteri di interruzione in una stringa.|  
|[CDC::SetViewportExt](#setviewportext)|Imposta gli extent x e y del riquadro di visualizzazione.|  
|[CDC::SetViewportOrg](#setviewportorg)|Imposta l'origine del viewport.|  
|[CDC::SetWindowExt](#setwindowext)|Imposta gli extent x e y della finestra associata.|  
|[CDC::SetWindowOrg](#setwindoworg)|Imposta l'origine della finestra del contesto del dispositivo.|  
|[CDC::SetWorldTransform](#setworldtransform)|Imposta lo spazio mondo corrente alla trasformazione di spazio di paging.|  
|[CDC::StartDoc](#startdoc)|Informa il driver di dispositivo avviato un nuovo processo di stampa.|  
|[CDC::StartPage](#startpage)|Informa il driver di dispositivo che viene avviata una nuova pagina.|  
|[CDC::StretchBlt](#stretchblt)|Sposta una bitmap da un rettangolo di origine e un dispositivo in un rettangolo di destinazione, allungando o comprimendo la bitmap se necessario per adattarla alle dimensioni del rettangolo di destinazione.|  
|[CDC::StrokeAndFillPath](#strokeandfillpath)|Chiude figure aperte in un percorso, colpisce la struttura del percorso utilizzando la penna corrente e viene compilato interna utilizzando il pennello corrente.|  
|[CDC::StrokePath](#strokepath)|Esegue il rendering nel percorso specificato utilizzando la penna corrente.|  
|[CDC::TabbedTextOut](#tabbedtextout)|Scrive una stringa di caratteri in una posizione specificata, l'espansione di schede per i valori specificati in una matrice di posizioni di tabulazione.|  
|[CDC:: TextOut](#textout)|Scrive una stringa di caratteri in una posizione specificata utilizzando il tipo di carattere attualmente selezionato.|  
|[CDC::TransparentBlt](#transparentblt)|Trasferisce un blocco di bit di dati relativi al colore dal contesto del dispositivo di origine specificato in un contesto di dispositivo di destinazione, il rendering di un determinato colore trasparente nel trasferimento.|  
|[CDC::UpdateColors](#updatecolors)|Gli aggiornamenti dell'area client di contesto di dispositivo abbinando corrente colori dell'area client per la tavolozza di sistema su base pixel per pixel.|  
|[CDC::WidenPath](#widenpath)|Ridefinisce il percorso corrente dell'area che verrà disegnato se sono stato tracciato il percorso utilizzando la penna attualmente selezionata nel contesto di dispositivo.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDC::operator HDC](#operator_hdc)|Recupera l'handle del contesto del dispositivo.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDC::m_hAttribDC](#m_hattribdc)|Il contesto di dispositivo attributo utilizzato da questo `CDC` oggetto.|  
|[CDC::m_hDC](#m_hdc)|Il contesto di dispositivo di output utilizzato da questo `CDC` oggetto.|  
  
## <a name="remarks"></a>Note  
 Il `CDC` oggetto fornisce funzioni membro per l'utilizzo di un contesto di dispositivo, ad esempio una visualizzazione o stampa, nonché membri per l'utilizzo di un contesto di visualizzazione associato all'area client di una finestra.  
  
 Eseguire funzioni di tutti i disegni tramite il membro un `CDC` oggetto. La classe fornisce funzioni membro per le operazioni di contesto di dispositivo, utilizzo di strumenti, selezione di oggetti di grafica indipendente dai tipi device interface (GDI), di disegno e l'utilizzo di colori e tavolozze. Fornisce inoltre funzioni membro per ottenere e impostare gli attributi, disegno mapping, l'utilizzo del viewport, lavorare con le dimensioni della finestra, convertire le coordinate, utilizzo delle aree, il ritaglio, disegno di linee e poligoni, ellissi e forme semplici di disegno. Funzioni membro sono inoltre disponibili per il disegno di testo, utilizzo di tipi di carattere, usando caratteri di escape della stampante, lo scorrimento e la riproduzione metafile.  
  
 Per utilizzare un `CDC` dell'oggetto, creare l'oggetto e quindi chiamare il relativo membro funzioni che le funzioni di Windows che utilizzano contesti di dispositivo in parallelo.  
  
> [!NOTE]
>  In Windows 95/98, tutte le coordinate dello schermo sono limitate a 16 bit. Pertanto, un `int` passato a un `CDC` funzione membro deve essere compreso nell'intervallo – 32768 e 32767.  
  
 Per utilizzi specifici, la libreria Microsoft Foundation Class fornisce diverse classi derivate da `CDC` . `CPaintDC`incapsula le chiamate a `BeginPaint` e `EndPaint`. `CClientDC`gestisce un contesto di visualizzazione dell'area client della finestra associato. `CWindowDC`gestisce un contesto di visualizzazione associato a un'intera finestra, inclusi il frame e controlli. `CMetaFileDC`Associa un contesto di dispositivo metafile.  
  
 `CDC`fornisce due funzioni membro, [GetLayout](#getlayout) e [SetLayout](#setlayout), per l'inversione del layout di un contesto di dispositivo, che non eredita il layout da una finestra. Questo tipo l'orientamento da destra a sinistra è necessaria per le applicazioni scritte per le lingue, come l'arabo o ebraico, in cui il layout di carattere non è lo standard europeo.  
  
 `CDC`contiene due contesti di periferica, [m_hDC](#m_hdc) e [m_hAttribDC](#m_hattribdc), che, al momento della creazione di un `CDC` dell'oggetto, fare riferimento allo stesso dispositivo. `CDC`indirizza tutte le chiamate GDI output a `m_hDC` GDI di attributo la maggior parte delle chiamate a `m_hAttribDC`. (Un esempio di una chiamata di attributo è `GetTextColor`, mentre `SetTextColor` è una chiamata di output.)  
  
 Ad esempio, il framework utilizza questi contesti di due dispositivo per implementare un `CMetaFileDC` che invierà l'output in un metafile durante la lettura di attributi da un dispositivo fisico. Anteprima di stampa viene implementato in framework in modo analogo. È anche possibile utilizzare i contesti di due dispositivo in modo analogo nel codice specifico dell'applicazione.  
  
 Talvolta potrebbe essere necessario testo metrica informazioni da entrambi i `m_hDC` e `m_hAttribDC` contesti di dispositivo. Le seguenti coppie di funzioni forniscono questa funzionalità:  
  
|Utilizza m_hAttribDC|Utilizza m_hDC|  
|-----------------------|-----------------|  
|[GetTextExtent](#gettextextent)|[GetOutputTextExtent](#getoutputtextextent)|  
|[GetTabbedTextExtent](#gettabbedtextextent)|[GetOutputTabbedTextExtent](#getoutputtabbedtextextent)|  
|[GetTextMetrics](#gettextmetrics)|[GetOutputTextMetrics](#getoutputtextmetrics)|  
|[GetCharWidth](#getcharwidth)|[GetOutputCharWidth](#getoutputcharwidth)|  
  
 Per ulteriori informazioni su `CDC`, vedere [contesti di dispositivo](../../mfc/device-contexts.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CDC`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="a-nameabortdoca--cdcabortdoc"></a><a name="abortdoc"></a>CDC::AbortDoc  
 Termina il processo di stampa corrente e Cancella tutto l'applicazione è scritta nel dispositivo dopo l'ultima chiamata al [StartDoc](#startdoc) funzione membro.  
  
```  
int AbortDoc();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore maggiore o uguale a 0 se ha esito positivo o un valore negativo se si è verificato un errore. Nell'elenco seguente mostra i valori di errore comuni e i relativi significati:  
  
- **SP_ERROR** errore generale.  
  
- **SP_OUTOFDISK** spazio su disco insufficiente è attualmente disponibile per lo spooling e non più spazio diventerà disponibile.  
  
- **SP_OUTOFMEMORY** memoria insufficiente è disponibile per lo spooling.  
  
- **SP_USERABORT** utente terminato il processo tramite il gestore di stampa.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro sostituisce la `ABORTDOC` escape della stampante.  
  
 **AbortDoc** deve essere utilizzata per terminare le operazioni seguenti:  
  
-   Operazioni di stampa che non si specifica una funzione di interruzione mediante [SetAbortProc](#setabortproc).  
  
-   Operazioni di stampa che non hanno ancora raggiunto il primo **NEWFRAME** o **NEXTBAND** chiamata di escape.  
  
 Se un'applicazione rileva un errore di stampa o un'operazione di stampa annullata, non deve tentare di terminare l'operazione utilizzando il [EndDoc](#enddoc) o **AbortDoc** funzioni membro della classe `CDC`. GDI termina automaticamente l'operazione prima di restituire il valore di errore.  
  
 Se l'applicazione viene visualizzata una finestra di dialogo per consentire all'utente di annullare l'operazione di stampa, è necessario chiamare **AbortDoc** prima di eliminare la finestra di dialogo.  
  
 Se Gestione stampa è stato utilizzato per avviare il processo di stampa, la chiamata **AbortDoc** Cancella il processo di spooling intero, la stampante riceve nulla. Se Gestione stampa non è stato utilizzato per avviare il processo di stampa, i dati potrebbero sono stati inviati alla stampante prima **AbortDoc** è stato chiamato. In questo caso, il driver della stampante sono Reimposta la stampante (sempre) e chiuso il processo di stampa.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CDC::StartDoc](#startdoc).  
  
##  <a name="a-nameabortpatha--cdcabortpath"></a><a name="abortpath"></a>CDC::AbortPath  
 Chiude ed Elimina tutti i percorsi nel contesto di dispositivo.  
  
```  
BOOL AbortPath();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Se è presente una parentesi aperta percorso nel contesto di dispositivo, viene chiusa la parentesi di percorso e il percorso viene eliminato. Se è presente un tracciato chiuso nel contesto di dispositivo, il percorso viene scartato.  
  
##  <a name="a-nameaddmetafilecommenta--cdcaddmetafilecomment"></a><a name="addmetafilecomment"></a>CDC::AddMetaFileComment  
 Copia il commento da un buffer in un metafile in formato avanzato specificato.  
  
```  
BOOL AddMetaFileComment(
    UINT nDataSize,  
    const BYTE* pCommentData);
```  
  
### <a name="parameters"></a>Parametri  
 *nDataSize*  
 Specifica la lunghezza del buffer di commento, in byte.  
  
 *pCommentData*  
 Punta al buffer che contiene il commento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Un commento può contenere informazioni riservate, ad esempio, l'origine dell'immagine e la data è stato creato. Un commento deve iniziare con una firma di un'applicazione, seguita dai dati. I commenti non devono contenere dati specifici di posizione. Dati specifici di posizione specificano il percorso di un record, e non deve essere incluso in quanto un metafile può essere incorporati all'interno di un altro metafile. Questa funzione può essere utilizzata solo con metafile avanzati.  
  
##  <a name="a-namealphablenda--cdcalphablend"></a><a name="alphablend"></a>CDC::AlphaBlend  
 Chiamare questa funzione membro per visualizzare le bitmap con pixel trasparente o semitrasparente.  
  
```  
BOOL AlphaBlend(
    int xDest,  
    int yDest,  
    int nDestWidth,  
    int nDestHeight,  
    CDC* pSrcDC,  
    int xSrc,  
    int ySrc,  
    int nSrcWidth,  
    int nSrcHeight,  
    BLENDFUNCTION blend);
```  
  
### <a name="parameters"></a>Parametri  
 `xDest`  
 Specifica la coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.  
  
 `yDest`  
 Specifica la coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.  
  
 `nDestWidth`  
 Specifica la larghezza, in unità logiche, del rettangolo di destinazione.  
  
 `nDestHeight`  
 Specifica l'altezza, in unità logiche, del rettangolo di destinazione.  
  
 `pSrcDC`  
 Puntatore al contesto di dispositivo di origine.  
  
 `xSrc`  
 Specifica la coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.  
  
 `ySrc`  
 Specifica la coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.  
  
 `nSrcWidth`  
 Specifica la larghezza, in unità logiche, del rettangolo di origine.  
  
 `nSrcHeight`  
 Specifica l'altezza, in unità logiche, del rettangolo di origine.  
  
 *Blend*  
 Specifica un [BLENDFUNCTION](http://msdn.microsoft.com/library/windows/desktop/dd183393) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se ha esito positivo; in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 Vedere [AlphaBlend](http://msdn.microsoft.com/library/windows/desktop/dd183351) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori informazioni.  
  
##  <a name="a-nameanglearca--cdcanglearc"></a><a name="anglearc"></a>CDC::AngleArc  
 Disegna un segmento di linea e un arco.  
  
```  
BOOL AngleArc(
    int x,  
    int y,  
    int nRadius,  
    float fStartAngle,  
    float fSweepAngle);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica la coordinata x logica del centro del cerchio.  
  
 *y*  
 Specifica la coordinata y logica del centro del cerchio.  
  
 *nRadius*  
 Specifica il raggio del cerchio in unità logiche. Questo valore deve essere positivo.  
  
 *fStartAngle*  
 Specifica l'angolo iniziale in gradi rispetto all'asse x.  
  
 *fSweepAngle*  
 Specifica l'angolo di apertura in gradi rispetto all'angolo iniziale.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il segmento di linea viene tracciato dalla posizione corrente all'inizio dell'arco. Lungo il perimetro di un cerchio con Centro connessioni di radius specificato e viene disegnato l'arco. La lunghezza dell'arco è definita per gli angoli di inizio e di operazione specificati.  
  
 `AngleArc`Sposta la posizione corrente per il punto finale dell'arco. L'arco creato da questa funzione potrebbe risultare ellittico, a seconda della modalità di trasformazione e mapping corrente. Prima di disegnare l'arco, questa funzione consente di disegnare il segmento di linea dalla posizione corrente all'inizio dell'arco. Viene disegnato l'arco costruendo un cerchio immaginario con raggio specificato intorno al punto centrale specificato. Il punto iniziale dell'arco è determinato dalla misura in senso antiorario dall'asse x del cerchio per il numero di gradi nell'angolo iniziale. Il punto finale si trova in modo analogo misurando in senso antiorario dal punto di partenza per il numero di gradi nell'angolo della curva.  
  
 Se l'angolo di apertura è maggiore di 360 gradi dell'arco è sweep più volte. Questa funzione consente di disegnare linee mediante la penna corrente. Nella figura non viene riempita.  
  
##  <a name="a-namearca--cdcarc"></a><a name="arc"></a>CDC::ARC  
 Disegna un arco ellittico.  
  
```  
BOOL Arc(
    int x1,  
    int y1,  
    int x2,  
    int y2,  
    int x3,  
    int y3,  
    int x4,  
    int y4);

 
BOOL Arc(
    LPCRECT lpRect,  
    POINT ptStart,  
    POINT ptEnd);
```  
  
### <a name="parameters"></a>Parametri  
 `x1`  
 Specifica la coordinata x dell'angolo superiore sinistro del rettangolo di delimitazione (in unità logiche).  
  
 `y1`  
 Specifica la coordinata y dell'angolo superiore sinistro del rettangolo di delimitazione (in unità logiche).  
  
 `x2`  
 Specifica la coordinata x dell'angolo inferiore destro del rettangolo di delimitazione (in unità logiche).  
  
 `y2`  
 Specifica la coordinata y dell'angolo inferiore destro del rettangolo di delimitazione (in unità logiche).  
  
 *x3*  
 Specifica la coordinata x del punto che definisce l'arco del punto (in unità logiche) iniziale. Questo punto non è necessario sia esattamente sull'arco.  
  
 `y3`  
 Specifica la coordinata y del punto che definisce l'arco del punto (in unità logiche) iniziale. Questo punto non è necessario sia esattamente sull'arco.  
  
 `x4`  
 Specifica la coordinata x del punto che definisce l'endpoint dell'arco (in unità logiche). Questo punto non è necessario sia esattamente sull'arco.  
  
 `y4`  
 Specifica la coordinata y del punto che definisce l'endpoint dell'arco (in unità logiche). Questo punto non è necessario sia esattamente sull'arco.  
  
 `lpRect`  
 Specifica il rettangolo di delimitazione (in unità logiche). È possibile passare un `LPRECT` o [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto per questo parametro.  
  
 `ptStart`  
 Specifica le coordinate x e y del punto che definisce l'arco del punto (in unità logiche) iniziale. Questo punto non è necessario sia esattamente sull'arco. È possibile passare un [punto](../../mfc/reference/point-structure1.md) struttura o un [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto per questo parametro.  
  
 `ptEnd`  
 Specifica le coordinate x e y del punto che definisce punto finale dell'arco (in unità logiche). Questo punto non è necessario sia esattamente sull'arco. È possibile passare un **punto** struttura o un `CPoint` oggetto per questo parametro.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 L'arco disegnato utilizzando la funzione è un segmento dell'ellisse definita dal rettangolo di delimitazione specificato.  
  
 Il punto iniziale dell'arco è il punto in cui un raggio tracciato nell'area del rettangolo di delimitazione per il punto di partenza specificato interseca l'ellisse. Il punto di fine effettivo dell'arco è il punto in cui un raggio tracciato nell'area del rettangolo di delimitazione per il punto di fine specificato interseca l'ellisse. L'arco viene disegnato in senso antiorario. Poiché un arco non è una figura chiusa, non è compilato. La larghezza e altezza del rettangolo deve essere maggiore di 2 unità e minore di 32.767.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#29;](../../mfc/codesnippet/cpp/cdc-class_1.cpp)]  
  
##  <a name="a-namearctoa--cdcarcto"></a><a name="arcto"></a>CDC::ArcTo  
 Disegna un arco ellittico.  
  
```  
BOOL ArcTo(
    int x1,  
    int y1,  
    int x2,  
    int y2,  
    int x3,  
    int y3,  
    int x4,  
    int y4);

 
BOOL ArcTo(
    LPCRECT lpRect,  
    POINT ptStart,  
    POINT ptEnd);
```  
  
### <a name="parameters"></a>Parametri  
 `x1`  
 Specifica la coordinata x dell'angolo superiore sinistro del rettangolo di delimitazione (in unità logiche).  
  
 `y1`  
 Specifica la coordinata y dell'angolo superiore sinistro del rettangolo di delimitazione (in unità logiche).  
  
 `x2`  
 Specifica la coordinata x dell'angolo inferiore destro del rettangolo di delimitazione (in unità logiche).  
  
 `y2`  
 Specifica la coordinata y dell'angolo inferiore destro del rettangolo di delimitazione (in unità logiche).  
  
 *x3*  
 Specifica la coordinata x del punto che definisce l'arco del punto (in unità logiche) iniziale. Questo punto non è necessario sia esattamente sull'arco.  
  
 `y3`  
 Specifica la coordinata y del punto che definisce l'arco del punto (in unità logiche) iniziale. Questo punto non è necessario sia esattamente sull'arco.  
  
 `x4`  
 Specifica la coordinata x del punto che definisce l'endpoint dell'arco (in unità logiche). Questo punto non è necessario sia esattamente sull'arco.  
  
 `y4`  
 Specifica la coordinata y del punto che definisce l'endpoint dell'arco (in unità logiche). Questo punto non è necessario sia esattamente sull'arco.  
  
 `lpRect`  
 Specifica il rettangolo di delimitazione (in unità logiche). È possibile passare un puntatore a un [RECT](../../mfc/reference/rect-structure1.md) struttura di data o un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto per questo parametro.  
  
 `ptStart`  
 Specifica le coordinate x e y del punto che definisce l'arco del punto (in unità logiche) iniziale. Questo punto non è necessario sia esattamente sull'arco. È possibile passare un [punto](../../mfc/reference/point-structure1.md) struttura di data o un [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto per questo parametro.  
  
 `ptEnd`  
 Specifica le coordinate x e y del punto che definisce punto finale dell'arco (in unità logiche). Questo punto non è necessario sia esattamente sull'arco. È possibile passare un **punto** struttura di data o un `CPoint` oggetto per questo parametro.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione è simile a `CDC::Arc`, ad eccezione del fatto che la posizione corrente viene aggiornata. I punti ( `x1`, `y1`) e ( `x2`, `y2`) specificare il rettangolo di delimitazione. Un'ellisse formata dal rettangolo di delimitazione specificato definisce la curva dell'arco. L'arco estende in senso antiorario (la direzione predefinita arco) dal punto di intersezione la linea radiale dal centro del rettangolo di delimitazione per ( *x3*, `y3`). Punto di intersezione la linea radiale dal centro del rettangolo di delimitazione per le entità finali arco ( `x4`, `y4`). Se il punto iniziale e finale sono uguali, viene disegnata un'ellisse completa.  
  
 Una linea viene tracciata dalla posizione corrente al punto iniziale dell'arco. Se si verifica alcun errore, la posizione corrente è impostata per il punto finale dell'arco. L'arco viene disegnato utilizzando la penna corrente; non è compilato.  
  
##  <a name="a-nameattacha--cdcattach"></a><a name="attach"></a>CDC::Attach  
 Utilizzare questa funzione membro per collegare un `hDC` per il `CDC` oggetto.  
  
```  
BOOL Attach(HDC hDC);
```  
  
### <a name="parameters"></a>Parametri  
 `hDC`  
 Un contesto di dispositivo Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Il `hDC` viene memorizzato in `m_hDC`, il contesto di dispositivo di output e in `m_hAttribDC`, il contesto di dispositivo di attributo.  
  
##  <a name="a-namebeginpatha--cdcbeginpath"></a><a name="beginpath"></a>CDC:: BeginPath  
 Verrà visualizzata una parentesi di percorso nel contesto di dispositivo.  
  
```  
BOOL BeginPath();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Dopo avere aperta una parentesi di percorso, un'applicazione possa cominciare chiamata GDI funzioni di disegno per definire i punti che si trovano nel percorso. Un'applicazione è possibile chiudere una parentesi aperta percorso chiamando il `EndPath` funzione membro. Quando un'applicazione chiama `BeginPath`, vengono eliminati tutti i percorsi precedenti.  
  
 Vedere [BeginPath](http://msdn.microsoft.com/library/windows/desktop/dd183363) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per un elenco delle funzioni di disegno che definiscono i punti in un percorso.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#30; NVC_MFCDocView](../../mfc/codesnippet/cpp/cdc-class_2.cpp)]  
  
##  <a name="a-namebitblta--cdcbitblt"></a><a name="bitblt"></a>CDC::BitBlt  
 Copia una bitmap dal contesto del dispositivo di origine in tale contesto di dispositivo corrente.  
  
```  
BOOL BitBlt(
    int x,  
    int y,  
    int nWidth,  
    int nHeight,  
    CDC* pSrcDC,  
    int xSrc,  
    int ySrc,  
    DWORD dwRop);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica la coordinata x logica dell'angolo superiore sinistro del rettangolo di destinazione.  
  
 *y*  
 Specifica la coordinata y logica dell'angolo superiore sinistro del rettangolo di destinazione.  
  
 `nWidth`  
 Specifica la larghezza (in unità logiche) del bitmap di origine e rettangolo di destinazione.  
  
 `nHeight`  
 Specifica l'altezza (in unità logiche) del bitmap di origine e rettangolo di destinazione.  
  
 `pSrcDC`  
 Puntatore a un `CDC` che identifica il contesto di dispositivo da cui verrà copiata la bitmap. Deve essere **NULL** se *dwRop* specifica un'operazione raster che non include un'origine.  
  
 `xSrc`  
 Specifica la coordinata x logica dell'angolo superiore sinistro della bitmap di origine.  
  
 `ySrc`  
 Specifica la coordinata y logica dell'angolo superiore sinistro della bitmap di origine.  
  
 *dwRop*  
 Specifica l'operazione raster da eseguire. Codici di operazione raster definiscono modo GDI combina i colori nelle operazioni di output che includono un pennello corrente, una possibile bitmap di origine e una bitmap di destinazione. Vedere [BitBlt](http://msdn.microsoft.com/library/windows/desktop/dd183370) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per un elenco dei codici di operazione raster per *dwRop* e le relative descrizioni  
  
 Per un elenco completo dei codici di operazione raster, vedere [sui codici di operazione Raster](http://msdn.microsoft.com/library/windows/desktop/dd162892) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 L'applicazione può allineare le finestre o aree di client su limiti di byte per garantire che il `BitBlt` si verificano operazioni in rettangoli allineato ai byte. (Impostare il **CS_BYTEALIGNWINDOW** o **CS_BYTEALIGNCLIENT** flag quando si registrano le classi di finestra.)  
  
 `BitBlt`operazioni su rettangoli allineato ai byte sono notevolmente più veloce `BitBlt` operazioni su rettangoli che non sono allineati a byte. Se si desidera specificare gli stili di classe, ad esempio l'allineamento dei byte per il proprio contesto di dispositivo, è necessario registrare una classe della finestra anziché basarsi sulle classi Microsoft Foundation per farlo. Utilizzare la funzione globale [AfxRegisterWndClass](../../mfc/reference/application-information-and-management.md#afxregisterwndclass).  
  
 Trasforma GDI `nWidth` e `nHeight`, una volta utilizzando il contesto di dispositivo di destinazione e una volta utilizzando il contesto di dispositivo di origine. Se gli extent risultanti non corrispondono, utilizza il programma di GDI `StretchBlt` funzione comprimere o allungare la bitmap di origine in base alle esigenze.  
  
 Se il modello, origine e destinazione non è lo stesso formato di colore, la `BitBlt` funzione converte le bitmap di origine e modello in modo che corrisponda alla destinazione. Nella conversione vengono utilizzati i colori di sfondo e primo piano dell'immagine bitmap di destinazione.  
  
 Quando il `BitBlt` funzione converte una bitmap monocromatica di colore, imposta i bit bianchi (1) per il colore di sfondo e i bit neri (0) per il colore di primo piano. Vengono utilizzati i colori di primo piano e sfondo del contesto del dispositivo di destinazione. Per convertire il colore a monocromatico, `BitBlt` imposta i pixel corrispondano al colore di sfondo sul bianco e tutti gli altri pixel sul nero. `BitBlt`Usa i colori di primo piano e sfondo del contesto di dispositivo del colore per convertire da colore a monocromatico.  
  
 Si noti che non tutti i contesti di dispositivo supportano `BitBlt`. Per verificare se un contesto di dispositivo specificato supporta `BitBlt`, utilizzare il `GetDeviceCaps` membro di funzione e specificare il **RASTERCAPS** indice.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CDC::CreateCompatibleDC](#createcompatibledc).  
  
##  <a name="a-namecdca--cdccdc"></a><a name="cdc"></a>CDC::CDC  
 Costruisce un oggetto `CDC`.  
  
```  
CDC();
```  
  
##  <a name="a-namechorda--cdcchord"></a><a name="chord"></a>CDC::Chord  
 Crea una corda (una figura chiusa delimitata dall'intersezione di un'ellisse e un segmento di linea).  
  
```  
BOOL Chord(
    int x1,  
    int y1,  
    int x2,  
    int y2,  
    int x3,  
    int y3,  
    int x4,  
    int y4);

 
BOOL Chord(
    LPCRECT lpRect,  
    POINT ptStart,  
    POINT ptEnd);
```  
  
### <a name="parameters"></a>Parametri  
 `x1`  
 Specifica che la coordinata x dell'angolo superiore sinistro della corda riquadro del rettangolo (in unità logiche).  
  
 `y1`  
 Specifica che la coordinata y dell'angolo superiore sinistro della corda riquadro del rettangolo (in unità logiche).  
  
 `x2`  
 Specifica che la coordinata x dell'angolo inferiore destro della corda riquadro del rettangolo (in unità logiche).  
  
 `y2`  
 Specifica che la coordinata y dell'angolo inferiore destro della corda riquadro del rettangolo (in unità logiche).  
  
 *x3*  
 Specifica la coordinata x del punto che definisce la corda iniziale del punto (in unità logiche).  
  
 `y3`  
 Specifica la coordinata y del punto che definisce la corda iniziale del punto (in unità logiche).  
  
 `x4`  
 Specifica la coordinata x del punto che definisce endpoint della corda (in unità logiche).  
  
 `y4`  
 Specifica la coordinata y del punto che definisce endpoint della corda (in unità logiche).  
  
 `lpRect`  
 Specifica il rettangolo di delimitazione (in unità logiche). È possibile passare un `LPRECT` o [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto per questo parametro.  
  
 `ptStart`  
 Specifica le coordinate x e y del punto che definisce la corda iniziale del punto (in unità logiche). Questo punto non è necessario trovarsi esattamente in corda. È possibile passare un **punto** struttura o un `CPoint` oggetto per questo parametro.  
  
 `ptEnd`  
 Specifica le coordinate x e y del punto che definisce punto finale della corda (in unità logiche). Questo punto non è necessario trovarsi esattamente in corda. È possibile passare un [punto](../../mfc/reference/point-structure1.md) struttura o un [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto per questo parametro.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Il ( `x1`, `y1`) e ( `x2`, `y2`) i parametri specificano gli angoli superiore sinistro e in basso a destra, rispettivamente, di un rettangolo di delimitazione ellisse che fa parte della corda. Il ( *x3*, `y3`) e ( `x4`, `y4`) i parametri specificano gli endpoint di una riga che si interseca l'ellisse. La corda viene creata utilizzando la penna selezionata e compilata utilizzando il pennello selezionato.  
  
 Nella figura autore il `Chord` si estende fino a funzione, ma non include le coordinate inferiore e destro. Questo significa che l'altezza della figura `y2` – `y1` e la larghezza della figura `x2` – `x1`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#31;](../../mfc/codesnippet/cpp/cdc-class_3.cpp)]  
  
##  <a name="a-nameclosefigurea--cdcclosefigure"></a><a name="closefigure"></a>CDC::CloseFigure  
 Chiude una figura aperta in un percorso.  
  
```  
BOOL CloseFigure();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 La funzione chiude la figura tracciando una linea dalla posizione corrente al primo punto della figura (in genere, il punto specificato dalla chiamata più recente per il `MoveTo` funzione membro) e si connette le righe con lo stile della linea join. Se una figura viene chiusa utilizzando il `LineTo` funzione membro anziché `CloseFigure`, delimitatori vengono utilizzati per creare l'angolo anziché un join. `CloseFigure`deve essere chiamato solo se è presente una parentesi di tracciato aperto nel contesto di dispositivo.  
  
 Una figura in un percorso è aperta, a meno che non viene chiuso esplicitamente mediante questa funzione. (Figura può essere aperta anche se il punto corrente e il punto iniziale della figura sono uguali.) Una riga o una curva aggiunti per il percorso dopo `CloseFigure` inizia una nuova figura.  
  
##  <a name="a-namecreatecompatibledca--cdccreatecompatibledc"></a><a name="createcompatibledc"></a>CDC::CreateCompatibleDC  
 Crea un contesto di dispositivo di memoria che è compatibile con il dispositivo specificato dal `pDC`.  
  
```  
BOOL CreateCompatibleDC(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Puntatore a un contesto di dispositivo. Se `pDC` è **NULL**, la funzione crea un contesto di dispositivo di memoria che è compatibile con la visualizzazione di sistema.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Un contesto di dispositivo di memoria è un blocco di memoria che rappresenta una superficie di visualizzazione. Può essere utilizzato per preparare le immagini in memoria prima di copiarli all'area di dispositivo del dispositivo compatibile.  
  
 Quando viene creato un contesto di dispositivo di memoria, GDI seleziona automaticamente azionario bitmap monocromatica 1-da-1 per esso. Funzioni GDI output possono essere utilizzate con un contesto di dispositivo di memoria solo se una bitmap è stata creata e selezionata in tale contesto.  
  
 Questa funzione può essere utilizzata solo per creare contesti di dispositivo per i dispositivi che supportano le operazioni parallele. Vedere il [CDC::BitBlt](#bitblt) funzione membro per informazioni sui trasferimenti di blocchi di bit tra i contesti di dispositivo. Per determinare se un contesto di dispositivo supporta le operazioni parallele, vedere il **RC_BITBLT** funzionalità raster nella funzione membro `CDC::GetDeviceCaps`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView n.&32;](../../mfc/codesnippet/cpp/cdc-class_4.cpp)]  
  
##  <a name="a-namecreatedca--cdccreatedc"></a><a name="createdc"></a>CDC::CreateDC  
 Crea un contesto di dispositivo per il dispositivo specificato.  
  
```  
BOOL CreateDC(
    LPCTSTR lpszDriverName,  
    LPCTSTR lpszDeviceName,  
    LPCTSTR lpszOutput,  
    const void* lpInitData);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszDriverName`  
 Punta a una stringa con terminazione null che specifica il nome del file (senza estensione) del driver di dispositivo (ad esempio, "EPSON"). È inoltre possibile passare un `CString` oggetto per questo parametro.  
  
 `lpszDeviceName`  
 Punta a una stringa con terminazione null che specifica il nome del dispositivo specifico devono essere supportati (ad esempio, "EPSON FX-80"). Il `lpszDeviceName` parametro viene utilizzato se il modulo supporta più di un dispositivo. È inoltre possibile passare un `CString` oggetto per questo parametro.  
  
 `lpszOutput`  
 Punta a una stringa con terminazione null che specifica il nome file o un dispositivo per il supporto di output fisico (porta di output o file). È inoltre possibile passare un `CString` oggetto per questo parametro.  
  
 `lpInitData`  
 Punta a un `DEVMODE` struttura contenente dati di inizializzazione specifiche del dispositivo per il driver di dispositivo. Windows **DocumentProperties** funzione recupera questa struttura specificata per un determinato dispositivo. Il `lpInitData` parametro deve essere **NULL** se il driver di dispositivo è possibile utilizzare l'inizializzazione predefinita (se presente) specificato dall'utente tramite il pannello di controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 La stampa. File di intestazione H è obbligatorio se il [DEVMODE](http://msdn.microsoft.com/library/windows/desktop/dd183565) struttura viene utilizzata.  
  
 I nomi dei dispositivi rispettare queste convenzioni: un punto finale (.) è consigliata ma facoltativa. Windows consente di eliminare i due punti di interruzione in modo che viene eseguito il mapping di un nome di dispositivo che termina con un virgola per la stessa porta lo stesso nome senza due punti. I nomi di driver e la porta non devono contenere spazi iniziali o finali. Impossibile utilizzare funzioni GDI output con informazioni di contesto di informazioni.  
  
##  <a name="a-namecreateica--cdccreateic"></a><a name="createic"></a>CDC::CreateIC  
 Crea un contesto di informazioni per il dispositivo specificato.  
  
```  
BOOL CreateIC(
    LPCTSTR lpszDriverName,  
    LPCTSTR lpszDeviceName,  
    LPCTSTR lpszOutput,  
    const void* lpInitData);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszDriverName`  
 Punta a una stringa con terminazione null che specifica il nome del file (senza estensione) del driver di dispositivo (ad esempio, "EPSON"). È possibile passare un `CString` oggetto per questo parametro.  
  
 `lpszDeviceName`  
 Punta a una stringa con terminazione null che specifica il nome del dispositivo specifico devono essere supportati (ad esempio, "EPSON FX-80"). Il `lpszDeviceName` parametro viene utilizzato se il modulo supporta più di un dispositivo. È possibile passare un `CString` oggetto per questo parametro.  
  
 `lpszOutput`  
 Punta a una stringa con terminazione null che specifica il nome file o un dispositivo per il supporto di output fisico (file o la porta). È possibile passare un `CString` oggetto per questo parametro.  
  
 `lpInitData`  
 Punta ai dati di inizializzazione specifiche del dispositivo per il driver di dispositivo. Il `lpInitData` parametro deve essere **NULL** se il driver di dispositivo è possibile utilizzare l'inizializzazione predefinita (se presente) specificato dall'utente tramite il pannello di controllo. Vedere `CreateDC` per il formato dei dati per l'inizializzazione specifiche del dispositivo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il contesto di informazioni fornisce un modo rapido per ottenere informazioni sul dispositivo senza creare un contesto di dispositivo.  
  
 I nomi dei dispositivi rispettare queste convenzioni: un punto finale (.) è consigliata ma facoltativa. Windows consente di eliminare i due punti di interruzione in modo che viene eseguito il mapping di un nome di dispositivo che termina con un virgola per la stessa porta lo stesso nome senza due punti. I nomi di driver e la porta non devono contenere spazi iniziali o finali. Impossibile utilizzare funzioni GDI output con informazioni di contesto di informazioni.  
  
##  <a name="a-namedeletedca--cdcdeletedc"></a><a name="deletedc"></a>CDC::DeleteDC  
 In generale, non chiamare questa funzione. il distruttore verrà farlo.  
  
```  
BOOL DeleteDC();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione è stata completata correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il `DeleteDC` funzione membro Elimina i contesti di dispositivo Windows sono associati `m_hDC` nell'attuale `CDC` oggetto. Se questo `CDC` oggetto è il contesto di dispositivo attivo ultimo per un determinato dispositivo, il dispositivo riceve una notifica e vengono rilasciate tutte le risorse di archiviazione e di sistema utilizzate dal dispositivo.  
  
 Un'applicazione non deve chiamare `DeleteDC` se gli oggetti selezionati nel contesto di dispositivo. Innanzitutto è necessario selezionare gli oggetti dal contesto di dispositivo prima dell'eliminazione.  
  
 Un'applicazione non deve essere eliminato un contesto di dispositivo il cui handle è stato ottenuto chiamando [CWnd::GetDC](../../mfc/reference/cwnd-class.md#getdc). In alternativa, è necessario chiamare [CWnd::ReleaseDC](../../mfc/reference/cwnd-class.md#releasedc) per liberare il contesto di dispositivo. Il [CClientDC](../../mfc/reference/cclientdc-class.md) e [gli oggetti CWindowDC](../../mfc/reference/cwindowdc-class.md) per eseguire il wrapping di questa funzionalità sono disponibili classi.  
  
 Il `DeleteDC` funzione viene generalmente utilizzata per eliminare i contesti di dispositivo creati con [CreateDC](#createdc), [CreateIC](#createic), o [CreateCompatibleDC](#createcompatibledc).  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CPrintDialog::GetPrinterDC](../../mfc/reference/cprintdialog-class.md#getprinterdc).  
  
##  <a name="a-namedeletetempmapa--cdcdeletetempmap"></a><a name="deletetempmap"></a>CDC::DeleteTempMap  
 Chiamato automaticamente dal `CWinApp` gestore tempo di inattività, `DeleteTempMap` elimina qualsiasi temporaneo `CDC` gli oggetti creati da `FromHandle`, ma non elimina gli handle del contesto di dispositivo ( `hDC`s) temporaneamente associato il `CDC` oggetti.  
  
```  
static void PASCAL DeleteTempMap();
```  
  
##  <a name="a-namedetacha--cdcdetach"></a><a name="detach"></a>CDC::Detach  
 Chiamare questa funzione per scollegare `m_hDC` (il contesto di dispositivo di output) dal `CDC` dell'oggetto e si impostano entrambe `m_hDC` e `m_hAttribDC` a **NULL**.  
  
```  
HDC Detach();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un contesto di dispositivo Windows.  
  
##  <a name="a-namedptohimetrica--cdcdptohimetric"></a><a name="dptohimetric"></a>CDC::DPtoHIMETRIC  
 Utilizzare questa funzione quando si assegnano **HIMETRIC** dimensioni OLE, la conversione di pixel in base al **HIMETRIC**.  
  
```  
void DPtoHIMETRIC(LPSIZE lpSize) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpSize`  
 Punta a un [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura o [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Se la modalità di mapping dell'oggetto di contesto di dispositivo è `MM_LOENGLISH`, `MM_HIENGLISH`, `MM_LOMETRIC`, o `MM_HIMETRIC`, quindi la conversione si basa sul numero di pixel in pollici fisica. Se la modalità di mapping è una delle altre modalità non limitata (ad esempio, `MM_TEXT`), quindi la conversione si basa sul numero di pixel in pollice logico.  
  
##  <a name="a-namedptolpa--cdcdptolp"></a><a name="dptolp"></a>CDC::DPtoLP  
 Converte l'unità di dispositivo in unità logiche.  
  
```  
void DPtoLP(
    LPPOINT lpPoints,  
    int nCount = 1) const;  
  
void DPtoLP(LPRECT lpRect) const;
void DPtoLP(LPSIZE lpSize) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpPoints`  
 Punta a una matrice di [punto](../../mfc/reference/point-structure1.md) strutture o [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetti.  
  
 `nCount`  
 Il numero di punti nella matrice.  
  
 `lpRect`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura o [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto. Questo parametro viene utilizzato per il caso di conversione di un rettangolo da punti di dispositivi a punti logici.  
  
 `lpSize`  
 Punta a un [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura o [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 La funzione esegue il mapping, le coordinate di ogni punto o una dimensione di una dimensione, dal sistema di coordinate di dispositivo nel sistema di coordinate logico del GDI. La conversione dipende la modalità di mapping corrente e le impostazioni delle origini ed extent per la finestra e del riquadro di visualizzazione del dispositivo.  
  
##  <a name="a-namedraw3drecta--cdcdraw3drect"></a><a name="draw3drect"></a>CDC::Draw3dRect  
 Chiamare questa funzione membro per disegnare un rettangolo tridimensionale.  
  
```  
void Draw3dRect(
    LPCRECT lpRect,  
    COLORREF clrTopLeft,  
    COLORREF clrBottomRight);

 
void Draw3dRect(
    int x,  
    int y,  
    int cx,  
    int cy,  
    COLORREF clrTopLeft,  
    COLORREF clrBottomRight);
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Specifica il rettangolo di delimitazione (in unità logiche). È possibile passare un puntatore a un [RECT](../../mfc/reference/rect-structure1.md) struttura o un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto per questo parametro.  
  
 *clrTopLeft*  
 Specifica il colore dei lati superiore e sinistro del rettangolo tridimensionale.  
  
 `clrBottomRight`  
 Specifica il colore della parte inferiore destra e sinistra del rettangolo tridimensionale.  
  
 *x*  
 Specifica la coordinata x logica dell'angolo superiore sinistro del rettangolo tridimensionale.  
  
 *y*  
 Specifica la coordinata y logica dell'angolo superiore sinistro del rettangolo tridimensionale.  
  
 CX  
 Specifica la larghezza del rettangolo tridimensionale.  
  
 CY  
 Specifica l'altezza del rettangolo tridimensionale.  
  
### <a name="remarks"></a>Note  
 Il rettangolo verrà disegnato con i lati superiore e sinistro nel colore specificato da *clrTopLeft* e i bordi inferiore e destro con il colore specificato da `clrBottomRight`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView n.&33;](../../mfc/codesnippet/cpp/cdc-class_5.cpp)]  
  
##  <a name="a-namedrawdragrecta--cdcdrawdragrect"></a><a name="drawdragrect"></a>CDC::DrawDragRect  
 Chiamare questa funzione membro ripetutamente per ridisegnare un rettangolo di trascinamento.  
  
```  
void DrawDragRect(
    LPCRECT lpRect,  
    SIZE size,  
    LPCRECT lpRectLast,  
    SIZE sizeLast,  
    CBrush* pBrush = NULL,  
    CBrush* pBrushLast = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura o un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che specifica le coordinate logiche di un rettangolo, in questo caso, la posizione finale del rettangolo ridisegnata.  
  
 `size`  
 Specifica lo spostamento dall'angolo superiore sinistro del bordo esterno nell'angolo superiore sinistro del bordo interno (ovvero, lo spessore del bordo) di un rettangolo.  
  
 `lpRectLast`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura o un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che specifica le coordinate logiche della posizione di un rettangolo, in questo caso, la posizione del rettangolo ridisegnata originale.  
  
 *sizeLast*  
 Specifica lo spostamento dall'angolo superiore sinistro del bordo esterno nell'angolo superiore sinistro del bordo interno (ovvero, lo spessore del bordo) del rettangolo originale viene ridisegnato.  
  
 `pBrush`  
 Puntatore a un oggetto brush. Impostare su **NULL** per utilizzare il pennello dei mezzitoni predefinito.  
  
 *pBrushLast*  
 Puntatore all'ultimo oggetto pennello utilizzato. Impostare su **NULL** per utilizzare il pennello dei mezzitoni predefinito.  
  
### <a name="remarks"></a>Note  
 Chiamata in un ciclo come esempio di posizione del mouse, per fornire un feedback visivo. Quando si chiama `DrawDragRect`, il rettangolo precedente viene cancellato e viene creato uno nuovo. Ad esempio, come l'utente trascina un rettangolo sullo schermo, `DrawDragRect` verranno cancellate il rettangolo originale e ridisegna uno nuovo nella nuova posizione. Per impostazione predefinita, `DrawDragRect` disegna il rettangolo con un pennello dei mezzitoni per eliminare lo sfarfallio e per creare l'aspetto di un rettangolo in movimento.  
  
 La prima volta che chiama `DrawDragRect`, `lpRectLast` parametro deve essere **NULL**.  
  
##  <a name="a-namedrawedgea--cdcdrawedge"></a><a name="drawedge"></a>CDC::DrawEdge  
 Chiamare questa funzione membro per disegnare i bordi di un rettangolo del tipo specificato e lo stile.  
  
```  
BOOL DrawEdge(
    LPRECT lpRect,  
    UINT nEdge,  
    UINT nFlags);
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Un puntatore a un **RECT** struttura che contiene le coordinate logiche del rettangolo.  
  
 *nEdge*  
 Specifica il tipo di bordo interno ed esterno da disegnare. Questo parametro deve essere una combinazione di un flag di bordo interna e un bordo esterno. Vedere [DrawEdge](http://msdn.microsoft.com/library/windows/desktop/dd162477) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per una tabella dei tipi di parametro.  
  
 `nFlags`  
 Flag che specificano il tipo di bordo da disegnare. Vedere `DrawEdge` nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per una tabella di valori del parametro. Per le righe in diagonale, il **BF_RECT** flag specificano il punto di fine del vettore limitata dal parametro del rettangolo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
##  <a name="a-namedrawescapea--cdcdrawescape"></a><a name="drawescape"></a>CDC::DrawEscape  
 Accessi alla funzionalità di un video che non sono direttamente disponibili tramite la graphics device interface (GDI) di disegno.  
  
```  
int DrawEscape(
    int nEscape,  
    int nInputSize,  
    LPCSTR lpszInputData);
```  
  
### <a name="parameters"></a>Parametri  
 `nEscape`  
 Specifica la funzione di escape deve essere eseguita.  
  
 `nInputSize`  
 Specifica il numero di byte di dati a cui fa riferimento il `lpszInputData` parametro.  
  
 `lpszInputData`  
 Punta alla struttura di input necessari per la sequenza di escape specificato.  
  
### <a name="return-value"></a>Valore restituito  
 Specifica il risultato della funzione. Maggiore di zero se ha esito positivo, ad eccezione di **QUERYESCSUPPORT** disegnare escape, che consente di controllare per l'implementazione solo; oppure zero se la sequenza di escape non è implementato; o minore di zero se un errore si è verificato.  
  
### <a name="remarks"></a>Note  
 Quando un'applicazione chiama `DrawEscape`, i dati identificati da `nInputSize` e `lpszInputData` viene passato direttamente al driver di visualizzazione specificata.  
  
##  <a name="a-namedrawfocusrecta--cdcdrawfocusrect"></a><a name="drawfocusrect"></a>CDC::DrawFocusRect  
 Disegna un rettangolo con lo stile utilizzato per indicare che il rettangolo ha lo stato attivo.  
  
```  
void DrawFocusRect(LPCRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura o un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che specifica le coordinate logiche del rettangolo da disegnare.  
  
### <a name="remarks"></a>Note  
 Poiché si tratta di una funzione booleana XOR, chiamare questa funzione una seconda volta con lo stesso rettangolo rimuove il rettangolo dalla visualizzazione. Non è possibile scorrere il rettangolo da questa funzione. Per scorrere un'area che contiene un rettangolo disegnato da questa funzione, chiamare innanzitutto `DrawFocusRect` per rimuovere il rettangolo dalla visualizzazione, quindi scorrere l'area e quindi chiamare `DrawFocusRect` per disegnare il rettangolo nella nuova posizione.  
  
> [!CAUTION]
> `DrawFocusRect`funziona solo in `MM_TEXT` modalità. In altre modalità, questa funzione non consente di disegnare correttamente il rettangolo di attivazione, ma non restituisce valori di errore.  
  
##  <a name="a-namedrawframecontrola--cdcdrawframecontrol"></a><a name="drawframecontrol"></a>CDC::DrawFrameControl  
 Chiamare questa funzione membro per disegnare un controllo frame del tipo specificato e lo stile.  
  
```  
BOOL DrawFrameControl(
    LPRECT lpRect,  
    UINT nType,  
    UINT nState);
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Un puntatore a un **RECT** struttura che contiene le coordinate logiche del rettangolo.  
  
 `nType`  
 Specifica il tipo di controllo frame in cui disegnare. Vedere il *uType* parametro [DrawFrameControl](http://msdn.microsoft.com/library/windows/desktop/dd162480) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per un elenco di valori possibili del parametro.  
  
 `nState`  
 Specifica lo stato iniziale del controllo frame. Può essere uno o più dei valori descritti per il *uState* parametro `DrawFrameControl` nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Utilizzare il `nState` valore **DFCS_ADJUSTRECT** per regolare il rettangolo di delimitazione per escludere il bordo del pulsante push circostante.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 In molti casi, `nState` dipende il `nType` parametro. Nell'elenco seguente viene illustrata la relazione tra le quattro `nType` valori e `nState`:  
  
- **DFC_BUTTON**  
  
    - **DFCS_BUTTON3STATE** pulsante a tre stati  
  
    - **DFCS_BUTTONCHECK** casella di controllo  
  
    - **DFCS_BUTTONPUSH** pulsante di comando  
  
    - **DFCS_BUTTONRADIO** pulsante di opzione  
  
    - **DFCS_BUTTONRADIOIMAGE** immagine per pulsante di opzione (non quadrati devono immagine)  
  
    - **DFCS_BUTTONRADIOMASK** Mask per il pulsante di opzione (non quadrati devono maschera)  
  
- **DFC_CAPTION**  
  
    - **DFCS_CAPTIONCLOSE** pulsante Chiudi  
  
    - **DFCS_CAPTIONHELP** pulsante?  
  
    - **DFCS_CAPTIONMAX** pulsante di ingrandimento  
  
    - **DFCS_CAPTIONMIN** pulsante Riduci a icona  
  
    - **DFCS_CAPTIONRESTORE** pulsante Ripristina  
  
- **DFC_MENU**  
  
    - **DFCS_MENUARROW** freccia sottomenu  
  
    - **DFCS_MENUBULLET** punto elenco  
  
    - **DFCS_MENUCHECK** segno di spunta  
  
- **DFC_SCROLL**  
  
    - **DFCS_SCROLLCOMBOBOX** barra di scorrimento di casella combinata  
  
    - **DFCS_SCROLLDOWN** freccia della barra di scorrimento verso il basso  
  
    - **DFCS_SCROLLLEFT** freccia sinistra della barra di scorrimento  
  
    - **DFCS_SCROLLRIGHT** freccia a destra della barra di scorrimento  
  
    - **DFCS_SCROLLSIZEGRIP** ridimensionamento nell'angolo inferiore destro della finestra  
  
    - **DFCS_SCROLLUP** freccia della barra di scorrimento  
  
### <a name="example"></a>Esempio  
 Questo codice consente di disegnare gripper dimensioni nell'angolo in basso a destra della finestra. È opportuno che il `OnPaint` gestore di una finestra di dialogo senza stili che normalmente non contiene altri controlli (ad esempio una barra di stato) che possono assegnare un gripper dimensioni.  
  
 [!code-cpp[NVC_MFCDocView&#34;](../../mfc/codesnippet/cpp/cdc-class_6.cpp)]  
  
##  <a name="a-namedrawicona--cdcdrawicon"></a><a name="drawicon"></a>CDC::DrawIcon  
 Disegna un'icona sul dispositivo rappresentato dall'oggetto corrente `CDC` oggetto.  
  
```  
BOOL DrawIcon(
    int x,  
    int y,  
    HICON hIcon);

 
BOOL DrawIcon(
    POINT point,  
    HICON hIcon);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica la coordinata x logica dell'angolo superiore sinistro dell'icona.  
  
 *y*  
 Specifica la coordinata y logica dell'angolo superiore sinistro dell'icona.  
  
 `hIcon`  
 Identifica l'handle dell'icona da disegnare.  
  
 `point`  
 Specifica la logica coordinate x e y-dell'angolo superiore sinistro dell'icona. È possibile passare un [punto](../../mfc/reference/point-structure1.md) struttura o un [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto per questo parametro.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione è stata completata correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La funzione inserisce nell'angolo superiore sinistro dell'icona nella posizione specificata da *x* e *y*. Il percorso è soggetto alle modalità di mapping corrente del contesto del dispositivo.  
  
 La risorsa icona deve avere precedentemente caricata utilizzando le funzioni `CWinApp::LoadIcon`, `CWinApp::LoadStandardIcon`, o `CWinApp::LoadOEMIcon`. Il `MM_TEXT` modalità di mapping deve essere selezionata prima di utilizzare questa funzione.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CWnd::IsIconic](../../mfc/reference/cwnd-class.md#isiconic).  
  
##  <a name="a-namedrawstatea--cdcdrawstate"></a><a name="drawstate"></a>CDC::DrawState  
 Chiamare questa funzione membro per visualizzare un'immagine e applicare un effetto visivo per indicare uno stato, ad esempio disattivato o allo stato predefinito.  
  
> [!NOTE]
>  Per tutti `nFlag` gli stati tranne **DSS_NORMAL**, l'immagine viene convertito in bianco e nero prima di applicata l'effetto visivo.  
  
```  
BOOL DrawState(
    CPoint pt,  
    CSize size,  
    HBITMAP hBitmap,  
    UINT nFlags,  
    HBRUSH hBrush = NULL);

 
BOOL DrawState(
    CPoint pt,  
    CSize size,  
    CBitmap* pBitmap,  
    UINT nFlags,  
    CBrush* pBrush = NULL);

 
BOOL DrawState(
    CPoint pt,  
    CSize size,  
    HICON hIcon,  
    UINT nFlags,  
    HBRUSH hBrush = NULL);

 
BOOL DrawState(
    CPoint pt,  
    CSize size,  
    HICON hIcon,  
    UINT nFlags,  
    CBrush* pBrush = NULL);

 
BOOL DrawState(
    CPoint pt,  
    CSize size,  
    LPCTSTR lpszText,  
    UINT nFlags,  
    BOOL bPrefixText = TRUE,  
    int nTextLen = 0,  
    HBRUSH hBrush = NULL);

 
BOOL DrawState(
    CPoint pt,  
    CSize size,  
    LPCTSTR lpszText,  
    UINT nFlags,  
    BOOL bPrefixText = TRUE,  
    int nTextLen = 0,  
    CBrush* pBrush = NULL);

 
BOOL DrawState(
    CPoint pt,  
    CSize size,  
    DRAWSTATEPROC lpDrawProc,  
    LPARAM lData,  
    UINT nFlags,  
    HBRUSH hBrush = NULL);

 
BOOL DrawState(
    CPoint pt,  
    CSize size,  
    DRAWSTATEPROC lpDrawProc,  
    LPARAM lData,  
    UINT nFlags,  
    CBrush* pBrush = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pt`  
 Specifica il percorso dell'immagine.  
  
 `size`  
 Specifica le dimensioni dell'immagine.  
  
 `hBitmap`  
 Handle per una bitmap.  
  
 `nFlags`  
 Flag che specificano il tipo di immagine e lo stato. Vedere [DrawState](http://msdn.microsoft.com/library/windows/desktop/dd162496) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ridurre il `nFlags` tipi e gli stati.  
  
 `hBrush`  
 Handle per un pennello.  
  
 `pBitmap`  
 Un puntatore a un oggetto CBitmap.  
  
 `pBrush`  
 Un puntatore a un oggetto CBrush.  
  
 `hIcon`  
 Handle per un'icona.  
  
 `lpszText`  
 Un puntatore di testo.  
  
 *bPrefixText*  
 Testo che può contenere un tasto di scelta di tasti di scelta rapida. Il `lData` parametro specifica l'indirizzo della stringa e `nTextLen` parametro specifica la lunghezza. Se `nTextLen` è 0, la stringa viene considerata con terminazione null.  
  
 `nTextLen`  
 Lunghezza della stringa di testo a cui puntava `lpszText`. Se `nTextLen` è 0, la stringa viene considerata con terminazione null.  
  
 *lpDrawProc*  
 Un puntatore a una funzione di callback utilizzato per il rendering di un'immagine. Questo parametro è obbligatorio se il tipo di immagine `nFlags` è **DST_COMPLEX**. È facoltativo e può essere **NULL** se il tipo di immagine è **DST_TEXT**. Per tutti gli altri tipi di immagine, questo parametro viene ignorato. Per ulteriori informazioni sulla funzione di callback, vedere il [DrawStateProc](http://msdn.microsoft.com/library/windows/desktop/dd162497) in funzione il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `lData`  
 Specifica le informazioni relative all'immagine. Il significato di questo parametro dipende dal tipo di immagine.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
##  <a name="a-namedrawtexta--cdcdrawtext"></a><a name="drawtext"></a>CDC  
 Chiamare questa funzione membro per formattare il testo nel rettangolo. Per specificare ulteriori opzioni di formattazione, utilizzare [CDC::DrawTextEx](#drawtextex).  
  
```  
virtual int DrawText(
    LPCTSTR lpszString,  
    int nCount,  
    LPRECT lpRect,  
    UINT nFormat);

 
int DrawText(
    const CString& str,  
    LPRECT lpRect,  
    UINT nFormat);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszString`  
 Punta alla stringa da disegnare. Se `nCount` è -1, la stringa deve essere con terminazione null.  
  
 `nCount`  
 Specifica il numero di caratteri nella stringa. Se `nCount` è -1, quindi `lpszString` si presuppone che sia un puntatore di tipo long a una stringa con terminazione null e `DrawText` calcola automaticamente il numero di caratteri.  
  
 `lpRect`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura o [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che contiene il rettangolo (in coordinate logiche) in cui è possibile formattare il testo.  
  
 `str`  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto che contiene i caratteri specificati da disegnare.  
  
 `nFormat`  
 Specifica il metodo di formattazione del testo. Può essere qualsiasi combinazione dei valori descritti per il `uFormat` parametro [DrawText](http://msdn.microsoft.com/library/windows/desktop/dd162498) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. (combinare mediante l'operatore OR bit per bit):  
  
> [!NOTE]
>  Alcuni `uFormat` le combinazioni di flag possono provocare la stringa passata da modificare. Utilizzando **DT_MODIFYSTRING** con **DT_END_ELLIPSIS** o **DT_PATH_ELLIPSIS** può causare la stringa da modificare, provocando un'asserzione nel `CString` eseguire l'override. I valori `DT_CALCRECT`, `DT_EXTERNALLEADING`, **DT_INTERNAL**, `DT_NOCLIP`, e `DT_NOPREFIX` non può essere utilizzato con il `DT_TABSTOP` valore.  
  
### <a name="return-value"></a>Valore restituito  
 L'altezza del testo se la funzione ha esito positivo.  
  
### <a name="remarks"></a>Note  
 Formatta testo espandendo tabulazioni in spazi appropriati, l'allineamento del testo a sinistra, destra, oppure il centro del rettangolo specificato e, suddividere il testo in righe che corrispondono all'interno del rettangolo specificato. Viene specificato il tipo di formattazione da `nFormat`.  
  
 Questa funzione membro utilizza il contesto di dispositivo tipo di carattere selezionato, il colore del testo e colore di sfondo per disegnare il testo. A meno che il `DT_NOCLIP` formato viene utilizzato, `DrawText` Taglia il testo in modo che il testo non viene visualizzato all'esterno del rettangolo specificato. Tutta la formattazione si presuppone che dispongono di più righe, a meno che il `DT_SINGLELINE` formato viene fornito.  
  
 Se il tipo di carattere selezionato è troppo grande per il rettangolo specificato, il `DrawText` funzione membro non tenta di sostituire un carattere più piccolo.  
  
 Se il `DT_CALCRECT` flag è specificato, il rettangolo specificato da `lpRect` verrà aggiornato per riflettere la larghezza e altezza necessari per disegnare il testo.  
  
 Se il **TA_UPDATECP** è stato impostato il flag di allineamento del testo (vedere [CDC::SetTextAlign](#settextalign)), `DrawText` visualizzerà il testo a partire dalla posizione corrente, anziché a sinistra del rettangolo. `DrawText`testo non andrà a capo quando il **TA_UPDATECP** flag è stato impostato (vale a dire il `DT_WORDBREAK` flag non ha alcun effetto).  
  
 Il colore del testo può essere impostato dallo [CDC::SetTextColor](#settextcolor).  
  
##  <a name="a-namedrawtextexa--cdcdrawtextex"></a><a name="drawtextex"></a>CDC::DrawTextEx  
 Formati di testo nel rettangolo.  
  
```  
virtual int DrawTextEx(
    LPTSTR lpszString,  
    int nCount,  
    LPRECT lpRect,  
    UINT nFormat,
    LPDRAWTEXTPARAMS lpDTParams);

 
int DrawTextEx(
    const CString& str,  
    LPRECT lpRect,  
    UINT nFormat,
    LPDRAWTEXTPARAMS lpDTParams);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszString`  
 Punta alla stringa da disegnare. Se `nCount` è -1, la stringa deve essere a terminazione null.  
  
 `nCount`  
 Specifica il numero di caratteri nella stringa. Se `nCount` è -1, quindi `lpszString` si presuppone che sia un puntatore di tipo long a una stringa con terminazione null e `DrawText` calcola automaticamente il numero di caratteri.  
  
 `lpRect`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura o [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che contiene il rettangolo (in coordinate logiche) in cui è possibile formattare il testo.  
  
 `str`  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto che contiene i caratteri specificati da disegnare.  
  
 `nFormat`  
 Specifica il metodo di formattazione del testo. Può essere qualsiasi combinazione dei valori descritti per il `uFormat` parametro [DrawText](http://msdn.microsoft.com/library/windows/desktop/dd162498) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. (Uso bit per bit combinato `OR` operator):  
  
> [!NOTE]
>  Alcuni `uFormat` le combinazioni di flag possono provocare la stringa passata da modificare. Utilizzando **DT_MODIFYSTRING** con **DT_END_ELLIPSIS** o **DT_PATH_ELLIPSIS** può causare la stringa da modificare, provocando un'asserzione nel `CString` eseguire l'override. I valori `DT_CALCRECT`, `DT_EXTERNALLEADING`, **DT_INTERNAL**, `DT_NOCLIP`, e `DT_NOPREFIX` non può essere utilizzato con il `DT_TABSTOP` valore.  
  
 `lpDTParams`  
 Puntatore a un [DRAWTEXTPARAMS](http://msdn.microsoft.com/library/windows/desktop/dd162500) struttura che specifica la formattazione ulteriori opzioni. Questo parametro può essere **NULL**.  
  
### <a name="remarks"></a>Note  
 Formatta testo espandendo tabulazioni in spazi appropriati, l'allineamento del testo a sinistra, destra, oppure il centro del rettangolo specificato e, suddividere il testo in righe che corrispondono all'interno del rettangolo specificato. Viene specificato il tipo di formattazione da `nFormat` e `lpDTParams`. Per ulteriori informazioni, vedere [CDC](#drawtext) e [DrawTextEx](http://msdn.microsoft.com/library/windows/desktop/dd162499) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Il colore del testo può essere impostato dallo [CDC::SetTextColor](#settextcolor).  
  
##  <a name="a-nameellipsea--cdcellipse"></a><a name="ellipse"></a>CDC::Ellipse  
 Disegna un ellisse.  
  
```  
BOOL Ellipse(
    int x1,  
    int y1,  
    int x2,  
    int y2);  
  
BOOL Ellipse(LPCRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 `x1`  
 Specifica la coordinata x logica dell'angolo superiore sinistro del rettangolo di delimitazione dell'ellisse.  
  
 `y1`  
 Specifica la coordinata y logica dell'angolo superiore sinistro del rettangolo di delimitazione dell'ellisse.  
  
 `x2`  
 Specifica la coordinata x logica dell'angolo inferiore destro del rettangolo di delimitazione dell'ellisse.  
  
 `y2`  
 Specifica la coordinata y logica dell'angolo inferiore destro del rettangolo di delimitazione dell'ellisse.  
  
 `lpRect`  
 Specifica che rettangolo di delimitazione dell'ellisse. È inoltre possibile passare un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto per questo parametro.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Il centro dell'ellisse è il centro del rettangolo di delimitazione specificato da `x1`, `y1`, `x2`, e `y2`, o `lpRect`. L'ellisse viene disegnata con la penna corrente e il relativo interno viene riempito con il pennello corrente.  
  
 Nella figura creata da questa funzione si estende fino a, ma non include, le coordinate inferiore e destro. Questo significa che l'altezza della figura `y2` – `y1` e la larghezza della figura `x2` – `x1`.  
  
 Se la larghezza o l'altezza del rettangolo di delimitazione è 0, non viene disegnata alcun ellisse.  
  
##  <a name="a-nameenddoca--cdcenddoc"></a><a name="enddoc"></a>CDC::EndDoc  
 Termina un processo di stampa tramito una chiamata al [StartDoc](#startdoc) funzione membro.  
  
```  
int EndDoc();
```  
  
### <a name="return-value"></a>Valore restituito  
 Maggiore o uguale a 0 se la funzione ha esito positivo o un valore negativo se si è verificato un errore.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro sostituisce la **ENDDOC** escape della stampante e deve essere chiamato immediatamente dopo aver completato un processo di stampa ha esito positivo.  
  
 Se un'applicazione rileva un errore di stampa o un'operazione di stampa annullata, non deve tentare di terminare l'operazione utilizzando `EndDoc` o [AbortDoc](#abortdoc). GDI termina automaticamente l'operazione prima di restituire il valore di errore.  
  
 Questa funzione non deve essere utilizzata all'interno di metafile.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CDC::StartDoc](#startdoc).  
  
##  <a name="a-nameendpagea--cdcendpage"></a><a name="endpage"></a>CDC::EndPage  
 Informare il dispositivo che l'applicazione ha completato la scrittura in una pagina.  
  
```  
int EndPage();
```  
  
### <a name="return-value"></a>Valore restituito  
 Maggiore o uguale a 0 se la funzione ha esito positivo o un valore negativo se si è verificato un errore.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene in genere utilizzata per indirizzare il driver di dispositivo per passare a una nuova pagina.  
  
 Questa funzione membro sostituisce la **NEWFRAME** escape della stampante. A differenza di **NEWFRAME**, questa funzione viene sempre chiamata dopo la stampa una pagina.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CDC::StartDoc](#startdoc).  
  
##  <a name="a-nameendpatha--cdcendpath"></a><a name="endpath"></a>CDC::EndPath  
 Chiude una parentesi di percorso e seleziona il percorso definito parentesi nel contesto di dispositivo.  
  
```  
BOOL EndPath();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CDC:: BeginPath](#beginpath).  
  
##  <a name="a-nameenumobjectsa--cdcenumobjects"></a><a name="enumobjects"></a>CDC:: EnumObjects  
 Enumera le penne e pennelli disponibili in un contesto di dispositivo.  
  
```  
int EnumObjects(
    int nObjectType,  
    int (CALLBACK* lpfn)(
    LPVOID,
    LPARAM),  
    LPARAM lpData);
```  
  
### <a name="parameters"></a>Parametri  
 *nObjectType*  
 Specifica il tipo di oggetto. I valori possibili sono **OBJ_BRUSH** o **OBJ_PEN**.  
  
 `lpfn`  
 È l'indirizzo dell'istanza di routine della funzione di callback fornita dall'applicazione. Vedere la sezione "Osservazioni".  
  
 `lpData`  
 Punta ai dati forniti dall'applicazione. I dati vengono passati alla funzione di callback con le informazioni sull'oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Specifica l'ultimo valore restituito dal [funzione di callback](../../mfc/reference/callback-function-for-cdc-enumobjects.md). Il significato è definito dall'utente.  
  
### <a name="remarks"></a>Note  
 Per ogni oggetto di un determinato tipo, viene chiamata la funzione di callback che viene passato con le informazioni per l'oggetto. Il sistema chiama la funzione di callback fino a quando non sono presenti più oggetti o la funzione di callback restituisce 0.  
  
 Si noti che nuove funzionalità di Microsoft Visual C++ consentono di utilizzare una funzione comune, come la funzione passata al `EnumObjects`. L'indirizzo passato `EnumObjects` è un puntatore a una funzione esportata con **ESPORTARE** e con la convenzione di chiamata Pascal. Nelle applicazioni in modalità protetta, non è necessario creare questa funzione con la funzione MakeProcInstance di Windows o liberare la funzione dopo l'uso con la funzione FreeProcInstance Windows.  
  
 Inoltre non è necessario esportare il nome della funzione in un **esportazioni** istruzione nel file di definizione moduli dell'applicazione. È possibile utilizzare il **ESPORTARE** funzione modificatore, come illustrato nella  
  
 **int CALLBACK ESPORTARE** AFunction **(LPSTR**, **LPSTR);**  
  
 Per fare in modo il compilatore a generare il record di esportazione appropriate per l'esportazione in base al nome senza alias. Questa soluzione per la maggior parte delle esigenze. In alcuni casi speciali, ad esempio l'esportazione di una funzione mediante ordinal o aliasing l'esportazione, è comunque necessario utilizzare un **esportazioni** istruzione in un file di definizione moduli.  
  
 Per la compilazione di programmi Microsoft Foundation, si userà il /GA e opzioni del compilatore /GEs. L'opzione del compilatore /Gw non viene utilizzato con Microsoft Foundation classes. (Se si utilizza la funzione di Windows **MakeProcInstance**, sarà necessario eseguire il cast esplicito del puntatore a funzione restituito da **FARPROC** nel tipo richiesto in questa API.) Interfacce di registrazione di callback sono ora indipendenti dai tipi (è necessario passare un puntatore a funzione che punta al tipo appropriato della funzione di callback specifico).  
  
 Si noti inoltre che tutte le funzioni di callback devono intercettare le eccezioni di Microsoft Foundation prima di tornare a Windows, poiché non possono essere generate eccezioni attraverso i limiti di callback. Per ulteriori informazioni sulle eccezioni, vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#35;](../../mfc/codesnippet/cpp/cdc-class_7.cpp)]  
  
##  <a name="a-nameescapea--cdcescape"></a><a name="escape"></a>CDC::escape  
 Questa funzione membro è praticamente obsoleta per la programmazione Win32.  
  
```  
virtual int Escape(
    int nEscape,  
    int nCount,  
    LPCSTR lpszInData,  
    LPVOID lpOutData);

 
int Escape(
    int nEscape,  
    int nInputSize,  
    LPCSTR lpszInputData,  
    int nOutputSize,  
    LPSTR lpszOutputData);
```  
  
### <a name="parameters"></a>Parametri  
 `nEscape`  
 Specifica la funzione di escape deve essere eseguita.  
  
 Per un elenco completo delle funzioni di escape, vedere [Escape](http://msdn.microsoft.com/library/windows/desktop/dd162701) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `nCount`  
 Specifica il numero di byte di dati a cui puntati `lpszInData`.  
  
 `lpszInData`  
 Punta alla struttura di dati di input necessari per l'escape.  
  
 `lpOutData`  
 Punta alla struttura che deve ricevere l'output da questo escape. Il `lpOutData` parametro **NULL** se non viene restituito alcun dato.  
  
 `nInputSize`  
 Specifica il numero di byte di dati a cui fa riferimento il `lpszInputData` parametro.  
  
 `lpszInputData`  
 Punta alla struttura di input necessari per la sequenza di escape specificato.  
  
 `nOutputSize`  
 Specifica il numero di byte di dati a cui fa riferimento il `lpszOutputData` parametro.  
  
 `lpszOutputData`  
 Punta alla struttura che riceve l'output di questo escape. Questo parametro deve essere **NULL** se non viene restituito alcun dato.  
  
### <a name="return-value"></a>Valore restituito  
 Viene restituito un valore positivo se la funzione ha esito positivo, ad eccezione di **QUERYESCSUPPORT** escape, che si verifica solo per l'implementazione. Se il carattere di escape non è implementato, viene restituito zero. Se si è verificato un errore, viene restituito un valore negativo. Di seguito sono valori di errore comuni:  
  
- **SP_ERROR** errore generale.  
  
- **SP_OUTOFDISK** spazio su disco insufficiente è attualmente disponibile per lo spooling e non più spazio diventerà disponibile.  
  
- **SP_OUTOFMEMORY** memoria insufficiente è disponibile per lo spooling.  
  
- **SP_USERABORT** utente ha terminato il processo tramite il gestore di stampa.  
  
### <a name="remarks"></a>Note  
 Dell'originale escape della stampante, solo **QUERYESCSUPPORT** è supportato per le applicazioni Win32. Tutti gli altri caratteri di escape della stampante sono obsoleti e sono supportate solo per compatibilità con le applicazioni a 16 bit.  
  
 Per la programmazione Win32, `CDC` ora fornisce sei funzioni membro che sostituiscono le corrispondenti escape della stampante:  
  
- [CDC::AbortDoc](#abortdoc)  
  
- [CDC::EndDoc](#enddoc)  
  
- [CDC::EndPage](#endpage)  
  
- [CDC:: SETABORTPROC](#setabortproc)  
  
- [CDC::StartDoc](#startdoc)  
  
- [CDC::StartPage](#startpage)  
  
 Inoltre, [CDC:: GetDeviceCaps](#getdevicecaps) supporta gli indici di Win32 che sostituiscono altri caratteri di escape della stampante. Vedere [GetDeviceCaps](http://msdn.microsoft.com/library/windows/desktop/dd144877) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori informazioni.  
  
 Questa funzione membro consente alle applicazioni di accedere alle funzionalità di un particolare dispositivo che non sono direttamente disponibili tramite GDI.  
  
 Utilizzare la prima versione, se l'applicazione utilizza i valori predefiniti di escape. Utilizzare la seconda versione, se l'applicazione definisce i valori di escape privato. Vedere [ExtEscape](http://msdn.microsoft.com/library/windows/desktop/dd162708) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori informazioni sulla versione del secondo.  
  
##  <a name="a-nameexcludecliprecta--cdcexcludecliprect"></a><a name="excludecliprect"></a>CDC::ExcludeClipRect  
 Crea una nuova area di ritaglio costituito l'area di visualizzazione esistente meno il rettangolo specificato.  
  
```  
int ExcludeClipRect(
    int x1,  
    int y1,  
    int x2,  
    int y2);  
  
int ExcludeClipRect(LPCRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 `x1`  
 Specifica la coordinata x logica dell'angolo superiore sinistro del rettangolo di.  
  
 `y1`  
 Specifica la coordinata y logica dell'angolo superiore sinistro del rettangolo.  
  
 `x2`  
 Specifica la coordinata x logica dell'angolo inferiore destro del rettangolo.  
  
 `y2`  
 Specifica la coordinata y logica dell'angolo inferiore destro del rettangolo.  
  
 `lpRect`  
 Specifica il rettangolo. Può anche essere un `CRect` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Specifica il tipo della nuova area di ritaglio. Può essere uno dei valori seguenti:  
  
- **COMPLEXREGION** la regione ha bordi sovrapposti.  
  
- **ERRORE** alcuna area è stata creata.  
  
- **NULLREGION** l'area è vuota.  
  
- **SIMPLEREGION** nell'area è presente alcun bordi sovrapposti.  
  
### <a name="remarks"></a>Note  
 La larghezza del rettangolo specificato dal valore assoluto di `x2` – `x1`, non deve superare i 32.767 unità. Questo limite si applica l'altezza del rettangolo anche.  
  
##  <a name="a-nameexcludeupdatergna--cdcexcludeupdatergn"></a><a name="excludeupdatergn"></a>CDC::ExcludeUpdateRgn  
 Impedisce la creazione all'interno di aree non valide di una finestra per escludendo l'area di visualizzazione associata a un'area aggiornata nella finestra di `CDC` oggetto.  
  
```  
int ExcludeUpdateRgn(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Punta all'oggetto finestra viene aggiornata la cui finestra.  
  
### <a name="return-value"></a>Valore restituito  
 Il tipo di area escluso. Può essere uno dei valori seguenti:  
  
- **COMPLEXREGION** la regione ha bordi sovrapposti.  
  
- **ERRORE** alcuna area è stata creata.  
  
- **NULLREGION** l'area è vuota.  
  
- **SIMPLEREGION** nell'area è presente alcun bordi sovrapposti.  
  
##  <a name="a-nameextfloodfilla--cdcextfloodfill"></a><a name="extfloodfill"></a>CDC::ExtFloodFill  
 Riempie un'area della superficie di visualizzazione con il pennello corrente.  
  
```  
BOOL ExtFloodFill(
    int x,  
    int y,  
    COLORREF crColor,  
    UINT nFillType);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica la coordinata x logica del punto in cui inizia il riempimento.  
  
 *y*  
 Specifica la coordinata y logica del punto in cui inizia il riempimento.  
  
 `crColor`  
 Specifica il colore del contorno o dell'area da riempire. L'interpretazione di `crColor` dipende dal valore di `nFillType`.  
  
 `nFillType`  
 Specifica il tipo di riempimento flood da eseguire. Deve essere uno dei valori seguenti:  
  
- **FLOODFILLBORDER** l'area di riempimento è delimitata dal colore specificato da `crColor`. Questo stile è identico per il riempimento eseguito da `FloodFill`.  
  
- **FLOODFILLSURFACE** l'area di riempimento è definito dal colore specificato da `crColor`. Compilazione continua verso l'esterno in tutte le direzioni, purché il colore viene rilevato. Questo stile è utile per riempire le aree con limiti ricchi di dettagli.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo. in caso contrario 0 se la compilazione non riuscita, se il punto specificato è il limite di colore specificato da `crColor` (se **FLOODFILLBORDER** è stato richiesto), se il punto specificato non ha il colore specificato da `crColor` (se **FLOODFILLSURFACE** è stato richiesto), o se il punto è all'esterno dell'area di ritaglio.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro offre maggiore flessibilità di `FloodFill` perché è possibile specificare un tipo di riempimento in `nFillType`.  
  
 Se `nFillType` è impostato su **FLOODFILLBORDER**, si presuppone che l'area di essere completamente delimitata dal colore specificato da `crColor`. La funzione inizia nel punto specificato da *x* e *y* e inserisce tutte le direzioni per il limite di colore.  
  
 Se `nFillType` è impostato su **FLOODFILLSURFACE**, la funzione inizia nel punto specificato da *x* e *y* e continua in tutte le direzioni, la compilazione di tutte le aree adiacenti che contiene il colore specificato da `crColor`.  
  
 Solo i contesti di dispositivo di memoria e i dispositivi che supportano supporto per la tecnologia di visualizzazione raster `ExtFloodFill`. Per ulteriori informazioni, vedere il [GetDeviceCaps](#getdevicecaps) funzione membro.  
  
##  <a name="a-nameexttextouta--cdcexttextout"></a><a name="exttextout"></a>CDC::ExtTextOut  
 Chiamare questa funzione membro per scrivere una stringa di caratteri all'interno di un'area rettangolare utilizzando il tipo di carattere attualmente selezionato.  
  
```  
virtual BOOL ExtTextOut(
    int x,  
    int y,  
    UINT nOptions,  
    LPCRECT lpRect,  
    LPCTSTR lpszString,  
    UINT nCount,  
    LPINT lpDxWidths);

 
BOOL ExtTextOut(
    int x,  
    int y,  
    UINT nOptions,  
    LPCRECT lpRect,  
    const CString& str,  
    LPINT lpDxWidths);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica la coordinata x logica della cella del carattere per il primo carattere nella stringa specificata.  
  
 *y*  
 Specifica la coordinata y logica della parte superiore della cella del carattere per il primo carattere nella stringa specificata.  
  
 `nOptions`  
 Specifica il tipo di rettangolo. Questo parametro può essere uno, entrambi o nessuno dei valori seguenti:  
  
- **ETO_CLIPPED** specifica che il testo viene ritagliato nel rettangolo.  
  
- **ETO_OPAQUE** specifica che il colore di sfondo corrente riempie il rettangolo. (È possibile impostare e query il colore di sfondo corrente con il [SetBkColor](#setbkcolor) e [GetBkColor](#getbkcolor) funzioni membro.)  
  
 `lpRect`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura che determina le dimensioni del rettangolo. Questo parametro può essere **NULL**. È inoltre possibile passare un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto per questo parametro.  
  
 `lpszString`  
 Punta alla stringa di caratteri specificato da disegnare. È inoltre possibile passare un [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto per questo parametro.  
  
 `nCount`  
 Specifica il numero di caratteri nella stringa.  
  
 `lpDxWidths`  
 Punta a una matrice di valori che indicano la distanza tra le origini di celle di caratteri adiacenti. Ad esempio, `lpDxWidths`[ *i*] unità logiche per separare le origini di cella di carattere *i* cella di carattere e *si* + 1. Se `lpDxWidths` è **NULL**, `ExtTextOut` utilizza la spaziatura predefinita tra i caratteri.  
  
 `str`  
 Oggetto `CString` oggetto che contiene i caratteri specificati da disegnare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 L'area rettangolare può essere opaco (compilato con il colore di sfondo corrente) e può essere un'area di visualizzazione.  
  
 Se `nOptions` è 0 e `lpRect` è **NULL**, la funzione scrive il testo nel contesto di dispositivo senza utilizzare un'area rettangolare. Per impostazione predefinita, la posizione corrente non viene utilizzata o aggiornata dalla funzione. Se un'applicazione deve aggiornare la posizione corrente quando chiama `ExtTextOut`, l'applicazione può chiamare il `CDC` funzione membro [SetTextAlign](#settextalign) con `nFlags` impostato su **TA_UPDATECP**. Quando questo flag è impostato, Windows ignora *x* e *y* sulle chiamate successive a `ExtTextOut` e utilizza invece la posizione corrente. Quando un'applicazione utilizza **TA_UPDATECP** per aggiornare la posizione corrente, `ExtTextOut` imposta la posizione corrente alla fine della riga di testo precedente o alla posizione specificata dall'ultimo elemento della matrice a cui puntata `lpDxWidths`, qualunque sia il maggiore.  
  
##  <a name="a-namefillpatha--cdcfillpath"></a><a name="fillpath"></a>CDC::FillPath  
 Chiude qualsiasi figure aperte nel percorso corrente e riempie l'area interna del percorso utilizzando il pennello corrente e la modalità di riempimento del poligono.  
  
```  
BOOL FillPath();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Dopo aver riempito interna, il percorso verrà eliminato dal contesto del dispositivo.  
  
##  <a name="a-namefillrecta--cdcfillrect"></a><a name="fillrect"></a>CDC::FillRect  
 Chiamare questa funzione membro per riempire un rettangolo specificato utilizzando il pennello specificato.  
  
```  
void FillRect(
    LPCRECT lpRect,  
    CBrush* pBrush);
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura che contiene le coordinate logiche del rettangolo da riempire. È inoltre possibile passare un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto per questo parametro.  
  
 `pBrush`  
 Identifica il pennello utilizzato per riempire il rettangolo.  
  
### <a name="remarks"></a>Note  
 La funzione riempie il rettangolo completato, inclusi i bordi superiore e sinistro, ma non viene riempita i bordi inferiore e destro.  
  
 Il pennello deve a uno creato utilizzando il [CBrush](../../mfc/reference/cbrush-class.md) funzioni membro [CreateHatchBrush](../../mfc/reference/cbrush-class.md#createhatchbrush), [CreatePatternBrush](../../mfc/reference/cbrush-class.md#createpatternbrush), e [CreateSolidBrush](../../mfc/reference/cbrush-class.md#createsolidbrush), o recuperati tramite il `GetStockObject` funzione Windows.  
  
 Quando si compila il rettangolo specificato, `FillRect` non include i lati destro e inferiore del rettangolo. GDI compilata fino a un rettangolo, ma non includere la riga di colonna e nella parte inferiore destra, indipendentemente dalla modalità di mapping corrente. `FillRect`Confronta i valori di **inizio**, **inferiore**, **sinistro**, e **destra** i membri del rettangolo specificato. Se **inferiore** è minore o uguale a **inizio**, o se **destra** è minore o uguale a **sinistro**, non viene disegnato il rettangolo.  
  
 `FillRect`è simile a [CDC::FillSolidRect](#fillsolidrect); tuttavia, `FillRect` accetta un pennello e pertanto può essere utilizzato per riempire il rettangolo con un colore a tinta unita, un colore retinato, pennelli tratteggiati o un modello. `FillSolidRect`utilizza solo colori a tinta unita (indicato da un **COLORREF** parametro). `FillRect`in genere è più lento `FillSolidRect`.  
  
##  <a name="a-namefillrgna--cdcfillrgn"></a><a name="fillrgn"></a>CDC::FillRgn  
 Riempie l'area specificata da `pRgn` con il pennello specificato da `pBrush`.  
  
```  
BOOL FillRgn(
    CRgn* pRgn,  
    CBrush* pBrush);
```  
  
### <a name="parameters"></a>Parametri  
 `pRgn`  
 Puntatore all'area da riempire. Le coordinate per l'area specificata sono specificate in unità logiche.  
  
 `pBrush`  
 Identifica il pennello da utilizzare per riempire l'area.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Il pennello deve essere creato usando il `CBrush` funzioni membro `CreateHatchBrush`, `CreatePatternBrush`, `CreateSolidBrush`, o essere recuperato dal **GetStockObject**.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CRgn::CreateRoundRectRgn](../../mfc/reference/crgn-class.md#createroundrectrgn).  
  
##  <a name="a-namefillsolidrecta--cdcfillsolidrect"></a><a name="fillsolidrect"></a>CDC::FillSolidRect  
 Chiamare questa funzione membro per riempire il rettangolo specificato con il colore a tinta unita specificato.  
  
```  
void FillSolidRect(
    LPCRECT lpRect,  
    COLORREF clr);

 
void FillSolidRect(
    int x,  
    int y,  
    int cx,  
    int cy,  
    COLORREF clr);
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Specifica il rettangolo di delimitazione (in unità logiche). È possibile passare un puntatore a un [RECT](../../mfc/reference/rect-structure1.md) struttura di data o un `CRect` oggetto per questo parametro.  
  
 `clr`Specifica il colore da utilizzare per riempire il rettangolo.  
  
 *x*  
 Specifica la coordinata x logica dell'angolo superiore sinistro del rettangolo di.  
  
 *y*  
 Specifica la coordinata y logica dell'angolo superiore sinistro del rettangolo di destinazione.  
  
 `cx`  
 Specifica la larghezza del rettangolo.  
  
 `cy`  
 Specifica l'altezza del rettangolo.  
  
### <a name="remarks"></a>Note  
 `FillSolidRect`è molto simile a [CDC::FillRect](#fillrect); tuttavia, `FillSolidRect` utilizza solo colori a tinta unita (indicato dal **COLORREF** parametro), mentre `FillRect` accetta un pennello e pertanto può essere utilizzato per riempire il rettangolo con un colore a tinta unita, un colore retinato, pennelli tratteggiati o un modello. `FillSolidRect`in genere è più veloce `FillRect`.  
  
> [!NOTE]
>  Quando si chiama `FillSolidRect`, il colore di sfondo, che è stato impostato in precedenza con [SetBkColor](#setbkcolor), impostare il colore indicato da `clr`.  
  
##  <a name="a-nameflattenpatha--cdcflattenpath"></a><a name="flattenpath"></a>CDC::FlattenPath  
 Trasforma le curve nel percorso selezionato nel contesto di dispositivo corrente e trasforma ogni curva in una sequenza di righe.  
  
```  
BOOL FlattenPath();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
##  <a name="a-namefloodfilla--cdcfloodfill"></a><a name="floodfill"></a>CDC::FloodFill  
 Riempie un'area della superficie di visualizzazione con il pennello corrente.  
  
```  
BOOL FloodFill(
    int x,  
    int y,  
    COLORREF crColor);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica la coordinata x logica del punto in cui inizia il riempimento.  
  
 *y*  
 Specifica la coordinata y logica del punto in cui inizia il riempimento.  
  
 `crColor`  
 Specifica il colore del limite.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo. in caso contrario viene restituito 0 se non è stato possibile completare il riempimento, il punto specificato è il colore del limite specificato da `crColor`, o il punto è all'esterno dell'area di ritaglio.  
  
### <a name="remarks"></a>Note  
 Si presuppone che l'area al associati come specificato da `crColor`. Il `FloodFill` funzione inizia nel punto specificato da *x* e *y* e continua in tutte le direzioni al limite del colore.  
  
 Solo i contesti di dispositivo di memoria e i dispositivi che supportano la visualizzazione raster supporto per la tecnologia di `FloodFill` funzione membro. Per informazioni su **RC_BITBLT** funzionalità, vedere il `GetDeviceCaps` funzione membro.  
  
 Il `ExtFloodFill` funzione fornisce funzionalità simili ma una maggiore flessibilità.  
  
##  <a name="a-nameframerecta--cdcframerect"></a><a name="framerect"></a>CDC:: frameRect  
 Disegna un bordo intorno al rettangolo specificato da `lpRect`.  
  
```  
void FrameRect(
    LPCRECT lpRect,  
    CBrush* pBrush);
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura o [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che contiene le coordinate logiche degli angoli in alto a sinistra e in basso a destra del rettangolo. È inoltre possibile passare un `CRect` oggetto per questo parametro.  
  
 `pBrush`  
 Identifica il pennello da utilizzare per il rettangolo di frame.  
  
### <a name="remarks"></a>Note  
 La funzione utilizza il pennello specificato per disegnare il bordo. La larghezza e altezza del bordo è sempre 1 unità logiche.  
  
 Se il rettangolo **inferiore** coordinata è minore o uguale a **inizio**, o se **destra** è minore o uguale a **sinistro**, non viene disegnato il rettangolo.  
  
 Bordo disegnato da `FrameRect` è nella stessa posizione di un bordo disegnato dal **rettangolo** funzione membro utilizzando le stesse coordinate (se **rettangolo** utilizza una penna di 1 unità logiche wide). L'interno del rettangolo non viene riempita da `FrameRect`.  
  
##  <a name="a-nameframergna--cdcframergn"></a><a name="framergn"></a>CDC::FrameRgn  
 Disegna un bordo intorno all'area specificata da `pRgn` mediante il pennello specificato da `pBrush`.  
  
```  
BOOL FrameRgn(
    CRgn* pRgn,  
    CBrush* pBrush,  
    int nWidth,  
    int nHeight);
```  
  
### <a name="parameters"></a>Parametri  
 `pRgn`  
 Per i punti di `CRgn` oggetto che identifica l'area di essere racchiuso da un bordo. Le coordinate per l'area specificata sono specificate in unità logiche.  
  
 `pBrush`  
 Indichi il `CBrush` che identifica il pennello da utilizzare per disegnare il bordo.  
  
 `nWidth`  
 Specifica lo spessore del bordo in verticale tratti in unità di dispositivo.  
  
 `nHeight`  
 Specifica l'altezza del bordo in orizzontale tratti in unità di dispositivo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CRgn::CombineRgn](../../mfc/reference/crgn-class.md#combinergn).  
  
##  <a name="a-namefromhandlea--cdcfromhandle"></a><a name="fromhandle"></a>CDC::FromHandle  
 Restituisce un puntatore a un `CDC` oggetto quando viene specificato un handle per un contesto di dispositivo.  
  
```  
static CDC* PASCAL FromHandle(HDC hDC);
```  
  
### <a name="parameters"></a>Parametri  
 `hDC`  
 Contiene un handle per un contesto di dispositivo Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Il puntatore può essere temporaneo e non deve essere archiviato oltre l'uso immediato.  
  
### <a name="remarks"></a>Note  
 Se all'handle non è collegato un oggetto `CDC`, viene creato e collegato un oggetto `CDC` temporaneo.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CPrintDialog::GetPrinterDC](../../mfc/reference/cprintdialog-class.md#getprinterdc).  
  
##  <a name="a-namegetarcdirectiona--cdcgetarcdirection"></a><a name="getarcdirection"></a>CDC::GetArcDirection  
 Restituisce la direzione di arco corrente per il contesto di dispositivo.  
  
```  
int GetArcDirection() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Specifica la direzione arco corrente, se ha esito positivo. Di seguito sono i valori restituiti validi:  
  
- **AD_COUNTERCLOCKWISE** archi e rettangoli disegnati in senso antiorario.  
  
- **AD_CLOCKWISE** archi e rettangoli disegnati in senso orario.  
  
 Se si verifica un errore, il valore restituito è zero.  
  
### <a name="remarks"></a>Note  
 Le funzioni arco e il rettangolo di usare la direzione dell'arco.  
  
##  <a name="a-namegetaspectratiofiltera--cdcgetaspectratiofilter"></a><a name="getaspectratiofilter"></a>CDC::GetAspectRatioFilter  
 Recupera l'impostazione per il filtro corrente le proporzioni.  
  
```  
CSize GetAspectRatioFilter() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CSize` oggetto che rappresenta il rapporto di formato utilizzato dal filtro di proporzioni corrente.  
  
### <a name="remarks"></a>Note  
 Il rapporto di formato è il rapporto formato dall'altezza e larghezza in pixel del dispositivo. Informazioni sulle proporzioni del dispositivo viene utilizzate nella creazione, selezione e visualizzazione di caratteri. Windows fornisce un filtro speciale, il filtro di rapporto di aspetto, per selezionare i caratteri per un particolare proporzioni da tutti i tipi di carattere disponibili. Il filtro utilizza le proporzioni specificata per il `SetMapperFlags` funzione membro.  
  
##  <a name="a-namegetbkcolora--cdcgetbkcolor"></a><a name="getbkcolor"></a>CDC::GetBkColor  
 Restituisce il colore di sfondo corrente.  
  
```  
COLORREF GetBkColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore di colore RGB.  
  
### <a name="remarks"></a>Note  
 Se la modalità in background è **OPACO**, il sistema utilizza il colore di sfondo per riempire i gap nelle righe con stile, gli spazi vuoti tra righe tratteggiate pennelli e background nelle celle di carattere. Il sistema utilizza anche il colore di sfondo durante la conversione di bitmap tra contesti di dispositivo monocromatico e colore.  
  
##  <a name="a-namegetbkmodea--cdcgetbkmode"></a><a name="getbkmode"></a>CDC::GetBkMode  
 Restituisce la modalità in background.  
  
```  
int GetBkMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La modalità di sfondo corrente, che può essere **OPACO** o **trasparente**.  
  
### <a name="remarks"></a>Note  
 La modalità in background definisce se il sistema rimuove i colori di sfondo esistente nell'area di disegno prima della creazione di testo, pennelli tratteggiate o qualsiasi stile della penna che non è una linea continua.  
  
##  <a name="a-namegetboundsrecta--cdcgetboundsrect"></a><a name="getboundsrect"></a>CDC::GetBoundsRect  
 Restituisce il rettangolo di delimitazione accumulato corrente per il contesto di dispositivo specificato.  
  
```  
UINT GetBoundsRect(
    LPRECT lpRectBounds,  
    UINT flags);
```  
  
### <a name="parameters"></a>Parametri  
 `lpRectBounds`  
 Punta a un buffer che riceverà il rettangolo di delimitazione corrente. Viene restituito il rettangolo in coordinate logiche.  
  
 `flags`  
 Specifica se deve essere cancellata dopo che viene restituito il rettangolo di delimitazione. Questo parametro deve essere zero o impostato sul valore seguente:  
  
- **DCB_RESET** forza il rettangolo di delimitazione per essere cancellata dopo che viene restituito.  
  
### <a name="return-value"></a>Valore restituito  
 Specifica lo stato corrente del rettangolo di delimitazione se la funzione ha esito positivo. Può essere una combinazione dei valori seguenti:  
  
- **DCB_ACCUMULATE** accumulo rettangolo di delimitazione è in corso.  
  
- **DCB_RESET** rettangolo di delimitazione è vuoto.  
  
- **DCB_SET** rettangolo di delimitazione non è vuoto.  
  
- **DCB_ENABLE** accumulo di delimitazione si trova in.  
  
- **DCB_DISABLE** accumulo di delimitazione è disattivata.  
  
##  <a name="a-namegetbrushorga--cdcgetbrushorg"></a><a name="getbrushorg"></a>CDC::GetBrushOrg  
 Recupera l'origine (in unità di dispositivo) del pennello attualmente selezionato per il contesto di dispositivo.  
  
```  
CPoint GetBrushOrg() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'origine corrente del pennello (in unità di dispositivo) come un [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 L'origine pennello iniziale corrisponde a (0,0) dell'area client. Il valore restituito specifica il punto in unità di dispositivo di origine della finestra del desktop.  
  
##  <a name="a-namegetcharacterplacementa--cdcgetcharacterplacement"></a><a name="getcharacterplacement"></a>CDC::GetCharacterPlacement  
 Recupero di vari tipi di informazioni su una stringa di caratteri.  
  
```  
DWORD GetCharacterPlacement(
    LPCTSTR lpString,  
    int nCount,  
    int nMaxExtent,  
    LPGCP_RESULTS lpResults,  
    DWORD dwFlags) const;  
  
DWORD GetCharacterPlacement(
    CString& str,  
    int nMaxExtent,  
    LPGCP_RESULTS lpResults,  
    DWORD dwFlags) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpString`  
 Puntatore alla stringa di caratteri per l'elaborazione.  
  
 `nCount`  
 Specifica la lunghezza della stringa. Per la versione ANSI, è un numero di BYTE e per la funzione Unicode è un conteggio delle parole. Per ulteriori informazioni, vedere [GetCharacterPlacement](http://msdn.microsoft.com/library/windows/desktop/dd144860\(v=vs.85\).aspx).  
  
 `nMaxExtent`  
 Specifica che la stringa viene elaborata nella misura massima consentita (in unità logiche). I caratteri che, se elaborata, supererebbe questo extent vengono ignorati. I calcoli per le matrici di ordinamento o glifo richieste valide solo per i caratteri inclusi. Questo parametro viene utilizzato solo se è specificato il valore GCP_MAXEXTENT nel `dwFlags` parametro. Mentre la funzione elabora la stringa di input, ogni carattere e la portata viene aggiunto l'output, estensione e altre matrici solo se l'extent totale non ha ancora superato il massimo. Quando viene raggiunto il limite, interrompe l'elaborazione.  
  
 lpResults  
 Puntatore a un [GCP_Results](http://msdn.microsoft.com/library/windows/desktop/dd144842\(v=vs.85\).aspx) struttura che riceve i risultati della funzione.  
  
 `dwFlags`  
 Specifica la modalità elaborare la stringa nelle matrici necessarie. Questo parametro può essere uno o più dei valori elencati nel `dwFlags` sezione la [GetCharacterPlacement](http://msdn.microsoft.com/library/windows/desktop/dd144860\(v=vs.85\).aspx) argomento.  
  
 `str`  
 Un puntatore a un [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto processo.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è la larghezza e l'altezza della stringa in unità logiche.  
  
 Se la funzione ha esito negativo, il valore restituito è zero.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità della funzione [GetCharacterPlacement](http://msdn.microsoft.com/library/windows/desktop/dd144860\(v=vs.85\).aspx), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetcharabcwidthsa--cdcgetcharabcwidths"></a><a name="getcharabcwidths"></a>CDC::GetCharABCWidths  
 Recupera le larghezze dei caratteri consecutivi in un intervallo specificato dal tipo di carattere TrueType corrente.  
  
```  
BOOL GetCharABCWidths(
    UINT nFirstChar,  
    UINT nLastChar,  
    LPABC lpabc) const;  
  
BOOL GetCharABCWidths(
    UINT nFirstChar,  
    UINT nLastChar,  
    LPABCFLOAT lpABCF) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nFirstChar`  
 Specifica il primo carattere dell'intervallo di caratteri dal tipo di carattere corrente per il quale vengono restituite larghezze dei caratteri.  
  
 `nLastChar`  
 Specifica l'ultimo carattere dell'intervallo di caratteri dal tipo di carattere corrente per il quale vengono restituite larghezze dei caratteri.  
  
 `lpabc`  
 Punta a una matrice di [ABC](../../mfc/reference/abc-structure.md) strutture che ricevono le larghezze dei caratteri quando la funzione restituisce. Questa matrice deve contenere almeno il numero **ABC** come sono presenti caratteri nell'intervallo specificato da strutture di `nFirstChar` e `nLastChar` i parametri.  
  
 *lpABCF*  
 Punta a un buffer fornito dall'applicazione con una matrice di [ABCFLOAT](../../mfc/reference/abcfloat-structure.md) strutture per ricevere le larghezze dei caratteri quando la funzione restituisce. La larghezza delle colonne restituite da questa funzione è nel formato a virgola mobile IEEE.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 La larghezza delle colonne viene restituite in unità logiche. Questa funzione ha esito positivo solo con tipi di carattere TrueType.  
  
 L'unità di rasterizzazione TrueType fornisce la spaziatura dei caratteri "ABC" dopo aver selezionata una dimensione in punti specifici. "A" spaziatura è la distanza che viene aggiunto alla posizione corrente prima di inserire l'icona. Spaziatura "B" corrisponde alla larghezza della parte nera del glifo. Spaziatura "C" viene aggiunto alla posizione corrente per lo spazio vuoto a destra dell'icona. Il totale avanzate larghezza è dato da un + B + C.  
  
 Quando il `GetCharABCWidths` funzione membro recupera negativo "A" o "C" larghezza di un carattere, tale carattere include rientranze o sporgenze.  
  
 Per convertire le larghezze ABC in unità di progettazione caratteri, un'applicazione deve creare un tipo di carattere il cui altezza (come specificato nella **lfHeight** membro del [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037) struttura) è uguale al valore archiviato nel **ntmSizeEM** membro del [NEWTEXTMETRIC](http://msdn.microsoft.com/library/windows/desktop/dd162741) struttura. (Il valore di **ntmSizeEM** membro può essere recuperato chiamando il [EnumFontFamilies](http://msdn.microsoft.com/library/windows/desktop/dd162619) funzione Windows.)  
  
 Viene utilizzata la larghezza di ABC del carattere predefinito per i caratteri che non rientrano nell'intervallo del tipo di carattere attualmente selezionato.  
  
 Per recuperare le larghezze dei caratteri in tipi di carattere non TrueType, le applicazioni devono utilizzare il [GetCharWidth](http://msdn.microsoft.com/library/windows/desktop/dd144861) funzione di Windows.  
  
##  <a name="a-namegetcharabcwidthsia--cdcgetcharabcwidthsi"></a><a name="getcharabcwidthsi"></a>CDC::GetCharABCWidthsI  
 Recupera le larghezze, in unità logiche di indici di glifi consecutivi in un intervallo specificato dal tipo di carattere TrueType corrente.  
  
```  
BOOL GetCharABCWidthsI(
    UINT giFirst,  
    UINT cgi,  
    LPWORD pgi,  
    LPABC lpabc) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `giFirst`  
 Specifica l'indice del primo glifo nel gruppo di indici di glifi consecutivi dal tipo di carattere corrente. Questo parametro viene utilizzato solo se il `pgi` parametro **NULL**.  
  
 `cgi`  
 Specifica il numero di indici di glifi.  
  
 `pgi`  
 Un puntatore a una matrice contenente gli indici. Se il valore è **NULL**, `giFirst` viene invece utilizzato il parametro. Il `cgi` parametro specifica il numero di indici di glifi in questa matrice.  
  
 `lpabc`  
 Puntatore a una matrice di [ABC](http://msdn.microsoft.com/library/windows/desktop/dd162454) strutture riceve le larghezze dei caratteri. Questa matrice deve contenere almeno il numero **ABC** come sono presenti gli indici specificati da strutture di `cgi` parametro.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità della funzione [GetCharABCWidthsI](http://msdn.microsoft.com/library/windows/desktop/dd144859), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetcharwidtha--cdcgetcharwidth"></a><a name="getcharwidth"></a>CDC::GetCharWidth  
 Recupera le larghezze dei singoli caratteri in un gruppo di caratteri consecutivo dal tipo di carattere corrente, utilizzando `m_hAttribDC`, il contesto di dispositivo di input.  
  
```  
BOOL GetCharWidth(
    UINT nFirstChar,  
    UINT nLastChar,  
    LPINT lpBuffer) const;  
  
BOOL GetCharWidth(
    UINT nFirstChar,  
    UINT nLastChar,  
    float* lpFloatBuffer) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nFirstChar`  
 Specifica il primo carattere in un gruppo di caratteri nel tipo di carattere corrente consecutivo.  
  
 `nLastChar`  
 Specifica l'ultimo carattere in un gruppo di caratteri nel tipo di carattere corrente consecutivo.  
  
 `lpBuffer`  
 Punta a un buffer che riceverà i valori di larghezza di un gruppo di caratteri consecutivo nel tipo di carattere corrente.  
  
 *lpFloatBuffer*  
 Punta a un buffer per ricevere le larghezze dei caratteri. La larghezza delle colonne restituiti è nel formato a virgola mobile IEEE a 32 bit. (La larghezza delle colonne viene misurati lungo la linea di base dei caratteri).  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Ad esempio, se `nFirstChar` identifica la lettera 'a' e `nLastChar` identifica la lettera 'z', la funzione recupera le larghezze di tutti i caratteri minuscoli.  
  
 La funzione archivia i valori nel buffer a cui puntato `lpBuffer`. Questo buffer deve essere sufficientemente grande da contenere tutta la larghezza delle colonne. Ovvero, deve esistere almeno 26 voci nell'esempio.  
  
 Se non esiste un carattere nel gruppo di caratteri consecutivo in un particolare tipo di carattere, si verrà assegnato il valore di larghezza del carattere predefinito.  
  
##  <a name="a-namegetcharwidthia--cdcgetcharwidthi"></a><a name="getcharwidthi"></a>CDC::GetCharWidthI  
 Recupera le larghezze, in coordinate logiche, di indici di glifi consecutivi in un intervallo specificato dal tipo di carattere corrente.  
  
```  
BOOL GetCharWidthI(
    UINT giFirst,  
    UINT cgi,  
    LPWORD pgi,  
    LPINT lpBuffer) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `giFirst`  
 Specifica l'indice del primo glifo nel gruppo di indici di glifi consecutivi dal tipo di carattere corrente. Questo parametro viene utilizzato solo se il `pgi` parametro **NULL**.  
  
 `cgi`  
 Specifica il numero di indici di glifi.  
  
 `pgi`  
 Un puntatore a una matrice contenente gli indici. Se il valore è **NULL**, `giFirst` viene invece utilizzato il parametro. Il `cgi` parametro specifica il numero di indici di glifi in questa matrice.  
  
 `lpBuffer`  
 Un puntatore a un buffer che riceve la larghezza delle colonne.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità della funzione [GetCharWidthI](http://msdn.microsoft.com/library/windows/desktop/dd144864), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetclipboxa--cdcgetclipbox"></a><a name="getclipbox"></a>CDC::GetClipBox  
 Recupera le dimensioni del rettangolo di delimitazione tightest intorno al limite di ritaglio corrente.  
  
```  
virtual int GetClipBox(LPRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Indichi il [RECT](../../mfc/reference/rect-structure1.md) struttura o [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che riceverà le dimensioni del rettangolo.  
  
### <a name="return-value"></a>Valore restituito  
 Tipo dell'area di visualizzazione. Può essere uno dei valori seguenti:  
  
- **COMPLEXREGION** area di visualizzazione è sovrapposti i bordi.  
  
- **ERRORE** contesto di dispositivo non è valido.  
  
- **NULLREGION** area di visualizzazione è vuota.  
  
- **SIMPLEREGION** area di visualizzazione non dispone di alcun bordi sovrapposti.  
  
### <a name="remarks"></a>Note  
 Le dimensioni vengono copiate nel buffer a cui puntata `lpRect`.  
  
##  <a name="a-namegetcoloradjustmenta--cdcgetcoloradjustment"></a><a name="getcoloradjustment"></a>CDC::GetColorAdjustment  
 Recupera i valori di regolazione del colore per il contesto di dispositivo.  
  
```  
BOOL GetColorAdjustment(LPCOLORADJUSTMENT lpColorAdjust) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpColorAdjust`  
 Punta a un [COLORADJUSTMENT](../../mfc/reference/coloradjustment-structure.md) struttura di dati per ricevere i valori di regolazione del colore.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
##  <a name="a-namegetcurrentbitmapa--cdcgetcurrentbitmap"></a><a name="getcurrentbitmap"></a>CDC::GetCurrentBitmap  
 Restituisce un puntatore all'oggetto attualmente selezionato `CBitmap` oggetto.  
  
```  
CBitmap* GetCurrentBitmap() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un `CBitmap` oggetto, in caso di esito positivo; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro può restituire oggetti temporanei.  
  
##  <a name="a-namegetcurrentbrusha--cdcgetcurrentbrush"></a><a name="getcurrentbrush"></a>CDC::GetCurrentBrush  
 Restituisce un puntatore all'oggetto attualmente selezionato `CBrush` oggetto.  
  
```  
CBrush* GetCurrentBrush() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un `CBrush` oggetto, in caso di esito positivo; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro può restituire oggetti temporanei.  
  
##  <a name="a-namegetcurrentfonta--cdcgetcurrentfont"></a><a name="getcurrentfont"></a>CDC::GetCurrentFont  
 Restituisce un puntatore all'oggetto attualmente selezionato `CFont` oggetto.  
  
```  
CFont* GetCurrentFont() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un `CFont` oggetto, in caso di esito positivo; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro può restituire oggetti temporanei.  
  
##  <a name="a-namegetcurrentpalettea--cdcgetcurrentpalette"></a><a name="getcurrentpalette"></a>CDC::GetCurrentPalette  
 Restituisce un puntatore all'oggetto attualmente selezionato `CPalette` oggetto.  
  
```  
CPalette* GetCurrentPalette() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un `CPalette` oggetto, in caso di esito positivo; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro può restituire oggetti temporanei.  
  
##  <a name="a-namegetcurrentpena--cdcgetcurrentpen"></a><a name="getcurrentpen"></a>CDC::GetCurrentPen  
 Restituisce un puntatore all'oggetto attualmente selezionato `CPen` oggetto.  
  
```  
CPen* GetCurrentPen() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un `CPen` oggetto, in caso di esito positivo; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro può restituire oggetti temporanei.  
  
##  <a name="a-namegetcurrentpositiona--cdcgetcurrentposition"></a><a name="getcurrentposition"></a>CDC::GetCurrentPosition  
 Recupera la posizione corrente (in coordinate logiche).  
  
```  
CPoint GetCurrentPosition() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Posizione corrente come un `CPoint` oggetto.  
  
### <a name="remarks"></a>Note  
 È possibile impostare la posizione corrente con il `MoveTo` funzione membro.  
  
##  <a name="a-namegetdcbrushcolora--cdcgetdcbrushcolor"></a><a name="getdcbrushcolor"></a>CDC::GetDCBrushColor  
 Recupera il colore corrente del pennello.  
  
```  
COLORREF GetDCBrushColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è il [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore per il colore corrente del pennello.  
  
 In caso contrario, il valore restituito è **CLR_INVALID**.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità della funzione [GetDCBrushColor](http://msdn.microsoft.com/library/windows/desktop/dd144872), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetdcpencolora--cdcgetdcpencolor"></a><a name="getdcpencolor"></a>CDC::GetDCPenColor  
 Recupera il colore corrente della penna.  
  
```  
COLORREF GetDCPenColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è il [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore per il colore corrente della penna.  
  
 In caso contrario, il valore restituito è **CLR_INVALID**.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro utilizza la funzione Win32 [GetDCPenColor](http://msdn.microsoft.com/library/windows/desktop/dd144875), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetdevicecapsa--cdcgetdevicecaps"></a><a name="getdevicecaps"></a>CDC:: GetDeviceCaps  
 Recupera un'ampia gamma di informazioni specifiche del dispositivo su dispositivo di visualizzazione.  
  
```  
int GetDeviceCaps(int nIndex) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Specifica il tipo di informazioni da restituire. Vedere [GetDeviceCaps](http://msdn.microsoft.com/library/windows/desktop/dd144877) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per un elenco di valori.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore della funzionalità richiesta se la funzione ha esito positivo.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CPrintDialog::GetDefaults](../../mfc/reference/cprintdialog-class.md#getdefaults).  
  
##  <a name="a-namegetfontdataa--cdcgetfontdata"></a><a name="getfontdata"></a>CDC::GetFontData  
 Recupera le informazioni di carattere metrica da un file ridimensionabili.  
  
```  
DWORD GetFontData(
    DWORD dwTable,  
    DWORD dwOffset,  
    LPVOID lpData,  
    DWORD cbData) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `dwTable`  
 Specifica il nome della tabella di metrica da restituire. Questo parametro può essere una delle tabelle di metrica documentate nella specifica del file di tipo di carattere TrueType pubblicata da Microsoft Corporation. Se questo parametro è 0, le informazioni vengono recuperate a partire dall'inizio del file di tipo di carattere.  
  
 `dwOffset`  
 Specifica l'offset dall'inizio della tabella da cui iniziare il recupero delle informazioni. Se questo parametro è 0, le informazioni vengono recuperate a partire dall'inizio della tabella specificata per il `dwTable` parametro. Se questo valore è maggiore o uguale alla dimensione della tabella, `GetFontData` restituisce 0.  
  
 `lpData`  
 Punta a un buffer che riceverà le informazioni di carattere. Se questo valore è **NULL**, la funzione restituisce la dimensione del buffer necessaria per i dati di tipo di carattere specificati nel `dwTable` parametro.  
  
 `cbData`  
 Specifica la lunghezza in byte, le informazioni da recuperare. Se questo parametro è 0, `GetFontData` restituisce le dimensioni dei dati specificata nel `dwTable` parametro.  
  
### <a name="return-value"></a>Valore restituito  
 Specifica il numero di byte restituiti nel buffer a cui puntato `lpData` se la funzione ha esito positivo; in caso contrario -1.  
  
### <a name="remarks"></a>Note  
 Le informazioni da recuperare sono identificate specificando un offset nel file con tipo di carattere e la lunghezza delle informazioni da restituire.  
  
 In alcuni casi è possibile utilizzare un'applicazione di `GetFontData` funzione membro per salvare un tipo di carattere TrueType con un documento. A tale scopo, l'applicazione determina se il tipo di carattere può essere incorporato e recupera il file intero tipo di carattere, se si specifica 0 per il `dwTable`, `dwOffset`, e `cbData` i parametri.  
  
 Le applicazioni possono determinare se un tipo di carattere può essere incorporato controllando il **otmfsType** membro del [OUTLINETEXTMETRIC](http://msdn.microsoft.com/library/windows/desktop/dd162755) struttura. Se 1 bit di **otmfsType** è impostata, l'incorporamento non è consentito per il tipo di carattere. Se il bit 1 è deselezionato, il tipo di carattere può essere incorporato. Se è impostato il bit 2, l'incorporamento è di sola lettura.  
  
 Se un'applicazione tenta di utilizzare questa funzione per recuperare le informazioni per un tipo di carattere TrueType non la `GetFontData` funzione membro restituisce –&1;.  
  
##  <a name="a-namegetfontlanguageinfoa--cdcgetfontlanguageinfo"></a><a name="getfontlanguageinfo"></a>CDC::GetFontLanguageInfo  
 Restituisce informazioni sul tipo di carattere selezionato per il contesto di visualizzazione specificata.  
  
```  
DWORD GetFontLanguageInfo() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito identifica le caratteristiche del tipo di carattere attualmente selezionato. Per un elenco completo dei valori possibili, vedere [GetFontLanguageInfo](http://msdn.microsoft.com/library/windows/desktop/dd144886).  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità della funzione [GetFontLanguageInfo](http://msdn.microsoft.com/library/windows/desktop/dd144886), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetglyphoutlinea--cdcgetglyphoutline"></a><a name="getglyphoutline"></a>CDC::GetGlyphOutline  
 Recupera la curva di struttura o una mappa di bit per carattere struttura nel tipo di carattere corrente.  
  
```  
DWORD GetGlyphOutline(
    UINT nChar,  
    UINT nFormat,  
    LPGLYPHMETRICS lpgm,  
    DWORD cbBuffer,  
    LPVOID lpBuffer,  
    const MAT2* lpmat2) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nChar`  
 Specifica il carattere per il quale sono necessario restituire informazioni.  
  
 `nFormat`  
 Specifica il formato in cui la funzione per restituire informazioni. Può essere uno dei seguenti valori, oppure 0:  
  
|Valore|Significato|  
|-----------|-------------|  
|**GGO_BITMAP**|Restituisce la bitmap di glifo. Quando la funzione restituisce, il buffer a cui puntava `lpBuffer` contiene una bitmap di 1 bit per pixel le cui righe avviare su limiti di parola doppia.|  
|**GGO_NATIVE**|Restituisce la curva di punti dati in formato nativo dell'unità di rasterizzazione, l'utilizzo di unità di dispositivo. Quando questo valore è specificato, qualsiasi trasformazione specificata `lpmat2` viene ignorato.|  
  
 Quando il valore di `nFormat` è 0, la funzione viene compilato un [GLYPHMETRICS](http://msdn.microsoft.com/library/windows/desktop/dd144955) struttura ma non restituisce dati di struttura di un glifo.  
  
 *lpgm*  
 Punta a un **GLYPHMETRICS** struttura che descrive la posizione dell'icona nella cella del carattere.  
  
 `cbBuffer`  
 Specifica la dimensione del buffer in cui la funzione Copia le informazioni relative al carattere di struttura. Se questo valore è 0 e `nFormat` parametro è il **GGO_BITMAP** o **GGO_NATIVE** valori, la funzione restituisce la dimensione del buffer necessaria.  
  
 `lpBuffer`  
 Punta a un buffer in cui la funzione Copia le informazioni relative al carattere di struttura. Se `nFormat` specifica il **GGO_NATIVE** valore, le informazioni viene copiato nel formato **TTPOLYGONHEADER** e **TTPOLYCURVE** strutture. Se questo valore è **NULL** e `nFormat` è il **GGO_BITMAP** o **GGO_NATIVE** valore, la funzione restituisce la dimensione del buffer necessaria.  
  
 `lpmat2`  
 Punta a un [MAT2](http://msdn.microsoft.com/library/windows/desktop/dd145048) struttura che contiene una matrice di trasformazione per il carattere. Questo parametro non può essere **NULL**, anche quando il **GGO_NATIVE** valore specificato per `nFormat`.  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni, in byte, del buffer necessaria per le informazioni recuperate se `cbBuffer` è 0 o `lpBuffer` è **NULL**. In caso contrario, è un valore positivo se la funzione ha esito positivo, o –&1; se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 Un'applicazione può ruotare i caratteri recuperati in formato bitmap specificando una matrice di trasformazione di 2-da-2 nella struttura a cui puntata `lpmat2`.  
  
 Una struttura di un glifo viene restituita come una serie di distribuzioni. Ogni profilo è definito da un [TTPOLYGONHEADER](http://msdn.microsoft.com/library/windows/desktop/dd145158) structure seguita da tanti **TTPOLYCURVE** come necessari per descrivere le strutture. Tutti i punti vengono restituiti come [POINTFX](http://msdn.microsoft.com/library/windows/desktop/dd162806) strutture e rappresentano posizioni assolute, sposta non relativo. Il punto iniziale specificato per il **pfxStart** membro del [TTPOLYGONHEADER](http://msdn.microsoft.com/library/windows/desktop/dd145158) struttura è il punto in cui inizia la struttura di un contorno. Il [TTPOLYCURVE](http://msdn.microsoft.com/library/windows/desktop/dd145157) le strutture che seguono possono essere record polyline o i record di spline di tipo. Polyline record sono una serie di punti. linee tracciate tra i punti di descrivono la struttura del carattere. Spline di tipo record rappresentano le curve quadratiche utilizzate da TrueType (vale a dire b-spline quadratiche).  
  
##  <a name="a-namegetgraphicsmodea--cdcgetgraphicsmode"></a><a name="getgraphicsmode"></a>CDC::GetGraphicsMode  
 Recupera la modalità grafica corrente per il contesto di dispositivo specificato.  
  
```  
int GetGraphicsMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Caso di esito positivo, restituisce la modalità grafica corrente. Per un elenco dei valori restituiti dal metodo, vedere [GetGraphicsMode](http://msdn.microsoft.com/library/windows/desktop/dd144892).  
  
 Restituisce 0 in caso di errore.  
  
 Per ottenere ulteriori informazioni sull'errore, chiamare [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360).  
  
### <a name="remarks"></a>Note  
 Questo metodo include la funzione GDI Windows [GetGraphicsMode](http://msdn.microsoft.com/library/windows/desktop/dd144892).  
  
##  <a name="a-namegethalftonebrusha--cdcgethalftonebrush"></a><a name="gethalftonebrush"></a>CDC::GetHalftoneBrush  
 Chiamare questa funzione membro per recuperare un pennello dei mezzitoni.  
  
```  
static CBrush* PASCAL GetHalftoneBrush();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CBrush` oggetto in caso di esito positivo; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Un pennello mezzitoni Mostra i pixel in alternativa i colori di sfondo e primo piano per creare un modello con dithering. Di seguito è riportato un esempio di un modello con dithering creato da un pennello dei mezzitoni.  
  
 ![Dettagli di un tratto di penna con dithering](../../mfc/reference/media/vc318s1.gif "vc318s1")  
  
##  <a name="a-namegetkerningpairsa--cdcgetkerningpairs"></a><a name="getkerningpairs"></a>CDC::GetKerningPairs  
 Recupera il carattere crenatura coppie per il tipo di carattere attualmente selezionato nel contesto di dispositivo specificato.  
  
```  
int GetKerningPairs(
    int nPairs,  
    LPKERNINGPAIR lpkrnpair) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nPairs`  
 Specifica il numero di [KERNINGPAIR](http://msdn.microsoft.com/library/windows/desktop/dd145024) strutture a cui puntava `lpkrnpair`. La funzione non comporta la copia più coppie di crenatura rispetto a quanto specificato da `nPairs`.  
  
 `lpkrnpair`  
 Punta a una matrice di **KERNINGPAIR** strutture che ricevono la crenatura coppie quando la funzione restituisce. Questa matrice deve contenere almeno un numero di strutture come specificato da `nPairs`. Se questo parametro è **NULL**, la funzione restituisce il numero totale di crenatura coppie per il tipo di carattere.  
  
### <a name="return-value"></a>Valore restituito  
 Specifica il numero di crenatura coppie recuperate o il numero totale di crenatura coppie nel tipo di carattere, se la funzione ha esito positivo. Se la funzione ha esito negativo o vi sono coppie crenatura per il tipo di carattere, viene restituito zero.  
  
##  <a name="a-namegetlayouta--cdcgetlayout"></a><a name="getlayout"></a>CDC::getLayout  
 Chiamare questa funzione membro per determinare il layout del testo e grafica per un contesto di dispositivo, ad esempio una stampante o un metafile.  
  
```  
DWORD GetLayout() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, il layout del flag per il contesto di dispositivo corrente. In caso contrario, **GDI_ERROR**. Per informazioni dettagliate sull'errore, chiamare il metodo [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360). Per un elenco dei flag di layout, vedere [CDC::SetLayout](#setlayout).  
  
### <a name="remarks"></a>Note  
 Il layout predefinito da sinistra a destra.  
  
##  <a name="a-namegetmapmodea--cdcgetmapmode"></a><a name="getmapmode"></a>CDC::GetMapMode  
 Recupera la modalità di mapping corrente.  
  
```  
int GetMapMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La modalità di mapping.  
  
### <a name="remarks"></a>Note  
 Per una descrizione delle modalità di mapping, vedere il `SetMapMode` funzione membro.  
  
> [!NOTE]
>  Se si chiama [SetLayout](#setlayout) per modificare il controller di dominio al layout da destra a sinistra, **SetLayout** modifica automaticamente la modalità di mapping per `MM_ISOTROPIC`. Di conseguenza, qualsiasi chiamata successiva a `GetMapMode` restituirà `MM_ISOTROPIC`.  
  
##  <a name="a-namegetmiterlimita--cdcgetmiterlimit"></a><a name="getmiterlimit"></a>CDC::GetMiterLimit  
 Restituisce il limite per il contesto di dispositivo.  
  
```  
float GetMiterLimit() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Il limite smussatura viene utilizzato quando il disegno di linee geometriche con decorato join.  
  
##  <a name="a-namegetnearestcolora--cdcgetnearestcolor"></a><a name="getnearestcolor"></a>CDC::GetNearestColor  
 Restituisce il colore a tinta unita più adatto un colore logico specificato.  
  
```  
COLORREF GetNearestColor(COLORREF crColor) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `crColor`  
 Specifica il colore da ricercare.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore di colore RGB (red, green, blue) che definisce il solido di colore più simile al `crColor` valore che può rappresentare il dispositivo.  
  
### <a name="remarks"></a>Note  
 Il dispositivo specificato deve essere in grado di rappresentare questo colore.  
  
##  <a name="a-namegetoutlinetextmetricsa--cdcgetoutlinetextmetrics"></a><a name="getoutlinetextmetrics"></a>CDC::GetOutlineTextMetrics  
 Recupera informazioni sulle metriche per tipi di carattere TrueType.  
  
```  
UINT GetOutlineTextMetrics(
    UINT cbData,  
    LPOUTLINETEXTMETRIC lpotm) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpotm`  
 Punta a una matrice di [OUTLINETEXTMETRIC](http://msdn.microsoft.com/library/windows/desktop/dd162755) strutture. Se questo parametro è **NULL**, la funzione restituisce la dimensione del buffer necessaria per i dati di metrica recuperati.  
  
 `cbData`  
 Specifica la dimensione, in byte, del buffer in cui vengono restituite informazioni.  
  
 `lpotm`  
 Punta a un **OUTLINETEXTMETRIC** struttura. Se questo parametro è **NULL**, la funzione restituisce la dimensione del buffer necessaria per le informazioni recuperate metriche.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Il [OUTLINETEXTMETRIC](http://msdn.microsoft.com/library/windows/desktop/dd162755) struttura contiene la maggior parte delle informazioni di metrica del carattere fornite con il formato TrueType, tra cui un [TEXTMETRIC](http://msdn.microsoft.com/library/windows/desktop/dd145132) struttura. I quattro membri di **OUTLINETEXTMETRIC** struttura sono puntatori alle stringhe. Applicazioni devono allocare spazio per queste stringhe oltre lo spazio richiesto per gli altri membri. Poiché non esiste alcun limite imposto di sistema per le dimensioni delle stringhe, il metodo più semplice di allocazione della memoria è per recuperare la dimensione necessaria specificando **NULL** per `lpotm` nella prima chiamata per il `GetOutlineTextMetrics` (funzione).  
  
##  <a name="a-namegetoutputcharwidtha--cdcgetoutputcharwidth"></a><a name="getoutputcharwidth"></a>CDC::GetOutputCharWidth  
 Utilizza il contesto di dispositivo di output, `m_hDC`e recupera le larghezze dei singoli caratteri in un gruppo di caratteri consecutivo dal tipo di carattere corrente.  
  
```  
BOOL GetOutputCharWidth(
    UINT nFirstChar,  
    UINT nLastChar,  
    LPINT lpBuffer) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nFirstChar`  
 Specifica il primo carattere in un gruppo di caratteri nel tipo di carattere corrente consecutivo.  
  
 `nLastChar`  
 Specifica l'ultimo carattere in un gruppo di caratteri nel tipo di carattere corrente consecutivo.  
  
 `lpBuffer`  
 Punta a un buffer che riceverà i valori di larghezza di un gruppo di caratteri consecutivo nel tipo di carattere corrente.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Ad esempio, se `nFirstChar` identifica la lettera 'a' e `nLastChar` identifica la lettera 'z', la funzione recupera le larghezze di tutti i caratteri minuscoli.  
  
 La funzione archivia i valori nel buffer a cui puntato `lpBuffer`. Questo buffer deve essere sufficientemente grande da contenere tutta la larghezza delle colonne. ovvero, deve esistere almeno 26 voci nell'esempio.  
  
 Se non esiste un carattere nel gruppo di caratteri consecutivo in un particolare tipo di carattere, si verrà assegnato il valore di larghezza del carattere predefinito.  
  
##  <a name="a-namegetoutputtabbedtextextenta--cdcgetoutputtabbedtextextent"></a><a name="getoutputtabbedtextextent"></a>CDC::GetOutputTabbedTextExtent  
 Chiamare questa funzione membro per calcolare la larghezza e altezza di una stringa di caratteri utilizzando [m_hDC](#m_hdc), il contesto di dispositivo di output.  
  
```  
CSize GetOutputTabbedTextExtent(
    LPCTSTR lpszString,  
    int nCount,  
    int nTabPositions,  
    LPINT lpnTabStopPositions) const;  
  
CSize GetOutputTabbedTextExtent(
    const CString& str,  
    int nTabPositions,  
    LPINT lpnTabStopPositions) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpszString`  
 Punta a una stringa di caratteri da misurare. È inoltre possibile passare un [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto per questo parametro.  
  
 `nCount`  
 Specifica il numero di caratteri nella stringa. Se `nCount` è -1, la lunghezza viene calcolata.  
  
 `nTabPositions`  
 Specifica il numero di posizioni di tabulazione nella matrice a cui puntata `lpnTabStopPositions`.  
  
 `lpnTabStopPositions`  
 Punta a una matrice di interi che contiene le posizioni di tabulazione in unità logiche. I punti di tabulazione devono essere ordinati in senso crescente; il valore x minimo deve essere il primo elemento nella matrice. Non sono consentite le tabulazioni.  
  
 `str`  
 Oggetto `CString` oggetto che contiene i caratteri specificati da misurare.  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni della stringa (in unità logiche) in un [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Se la stringa contiene uno o più caratteri di tabulazione, la larghezza della stringa si basa le tabulazioni specificate da `lpnTabStopPositions`. La funzione utilizza il tipo di carattere attualmente selezionato per calcolare le dimensioni della stringa.  
  
 L'area di ritaglio corrente non offset la larghezza e altezza restituito dal `GetOutputTabbedTextExtent` (funzione).  
  
 Poiché alcuni dispositivi non inserire caratteri nelle matrici di cella normale (vale a dire crenatura dei caratteri), la somma degli extent dei caratteri in una stringa non può essere uguale per l'estensione della stringa.  
  
 Se `nTabPositions` è 0 e `lpnTabStopPositions` è **NULL**, le schede vengono espanse in otto larghezze dei caratteri medio. Se `nTabPositions` è 1, le tabulazioni saranno separate per la distanza specificata dal primo valore nella matrice in cui `lpnTabStopPositions` punti. Se `lpnTabStopPositions` punti a più di un singolo valore, è impostato un punto di tabulazione per ogni valore nella matrice, fino al numero specificato da `nTabPositions`.  
  
##  <a name="a-namegetoutputtextextenta--cdcgetoutputtextextent"></a><a name="getoutputtextextent"></a>CDC::GetOutputTextExtent  
 Chiamare questa funzione membro per utilizzare il contesto di dispositivo di output, [m_hDC](#m_hdc)e calcolare la larghezza e altezza di una riga di testo utilizzando il tipo di carattere corrente.  
  
```  
CSize GetOutputTextExtent(
    LPCTSTR lpszString,  
    int nCount) const;  
  
CSize GetOutputTextExtent(const CString& str) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpszString`  
 Punta a una stringa di caratteri. È inoltre possibile passare un [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto per questo parametro.  
  
 `nCount`  
 Specifica il numero di caratteri nella stringa. Se `nCount` è -1, la lunghezza viene calcolata.  
  
 `str`  
 Oggetto `CString` oggetto che contiene i caratteri specificati da misurare.  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni della stringa (in unità logiche) restituite in un [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 L'area di ritaglio corrente non influisce sulla larghezza e altezza restituito da `GetOutputTextExtent`.  
  
 Poiché alcuni dispositivi non inserire caratteri nelle matrici di cella normale (vale a dire che effettua la crenatura), la somma degli extent dei caratteri in una stringa non può essere uguale per l'estensione della stringa.  
  
##  <a name="a-namegetoutputtextmetricsa--cdcgetoutputtextmetrics"></a><a name="getoutputtextmetrics"></a>CDC::GetOutputTextMetrics  
 Recupera le metriche per il tipo di carattere corrente utilizzando `m_hDC`, il contesto di dispositivo di output.  
  
```  
BOOL GetOutputTextMetrics(LPTEXTMETRIC lpMetrics) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpMetrics`  
 Indichi il [TEXTMETRIC](http://msdn.microsoft.com/library/windows/desktop/dd145132) struttura che riceve le metriche.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
##  <a name="a-namegetpatha--cdcgetpath"></a><a name="getpath"></a>CDC::getPath  
 Recupera le coordinate che definiscono gli endpoint delle righe e i punti di controllo di curve trovate nel percorso selezionato nel contesto di dispositivo.  
  
```  
int GetPath(
    LPPOINT lpPoints,  
    LPBYTE lpTypes,  
    int nCount) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpPoints`  
 Punta a una matrice di [punto](../../mfc/reference/point-structure1.md) strutture di dati o `CPoint` vengono inseriti gli oggetti in cui gli endpoint di riga e una curva controllare punti.  
  
 `lpTypes`  
 Punta a una matrice di byte in cui vengono collocati i tipi di vertice. I valori sono i seguenti:  
  
- **PT_MOVETO** specifica che il punto corrispondente in `lpPoints` inizia una figura non contiguo.  
  
- **PT_LINETO** specifica che il punto precedente e il corrispondente punto nella `lpPoints` sono gli endpoint di una riga.  
  
- **PT_BEZIERTO** specifica che il punto corrispondente in `lpPoints` è un punto di controllo o un punto finale di una curva Bzier.  
  
 **PT_BEZIERTO** sempre si verificano nei set di tre tipi. Il punto del percorso immediatamente che li precedono definisce il punto iniziale della curva Bzier. Le prime due **PT_BEZIERTO** punti sono i punti di controllo e il terzo **PT_BEZIERTO** punto è il punto di fine (se hardcoded).  
  
     Oggetto **PT_LINETO** o **PT_BEZIERTO** tipo può essere combinato con il seguente flag (utilizzando l'operatore OR bit per bit `OR`) per indicare che il punto corrispondente è l'ultimo punto in una figura e che deve essere chiusa nella figura:  
  
- **PT_CLOSEFIGURE** consente di specificare che nella figura viene chiuso automaticamente dopo la riga corrispondente o viene tracciata una curva. Nella figura viene chiusa disegnando una riga dall'endpoint della linea o curva fino al punto corrispondente all'ultimo **PT_MOVETO**.  
  
 `nCount`  
 Specifica il numero totale di [punto](../../mfc/reference/point-structure1.md) strutture di dati che possono essere posizionate nel `lpPoints` matrice. Questo valore deve essere uguale al numero di byte che possono essere posizionati nel `lpTypes` matrice.  
  
### <a name="return-value"></a>Valore restituito  
 Se il `nCount` parametro è diverso da zero, il numero di punti enumerati. Se `nCount` è 0, il numero totale di punti del percorso (e `GetPath` non scrive i buffer). Se `nCount` è diverso da zero e minore del numero di punti nel percorso, il valore restituito è -1.  
  
### <a name="remarks"></a>Note  
 Il contesto di dispositivo deve contenere un tracciato chiuso. I punti del percorso vengono restituiti in coordinate logiche. I punti vengono archiviati nel percorso nelle coordinate del dispositivo, quindi `GetPath` modifica i punti da coordinate di dispositivo a coordinate logiche utilizzando l'inverso della trasformazione corrente. Il `FlattenPath` funzione membro può essere chiamata prima di `GetPath`, convertire tutte le curve nel percorso in segmenti di linea.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CDC:: BeginPath](#beginpath).  
  
##  <a name="a-namegetpixela--cdcgetpixel"></a><a name="getpixel"></a>CDC::getPixel  
 Recupera il valore di colore RGB del pixel nel punto specificato da *x* e *y*.  
  
```  
COLORREF GetPixel(
    int x,  
    int y) const;  
  
COLORREF GetPixel(POINT point) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica la coordinata x logica del punto da esaminare.  
  
 *y*  
 Specifica la coordinata y logica del punto da esaminare.  
  
 `point`  
 Specifica la logica coordinate x e y-del punto da esaminare.  
  
### <a name="return-value"></a>Valore restituito  
 Per entrambe le versioni della funzione, un valore di colore RGB per il colore del punto specificato. È -1 se le coordinate non si specificano un punto nell'area di visualizzazione.  
  
### <a name="remarks"></a>Note  
 Il punto deve essere nell'area di visualizzazione. Se il punto non è presente nell'area di visualizzazione, la funzione non ha alcun effetto e restituisce -1.  
  
 Non tutti i dispositivi supportano la **GetPixel** (funzione). Per ulteriori informazioni, vedere il **RC_BITBLT** funzionalità raster sotto il [GetDeviceCaps](#getdevicecaps) funzione membro.  
  
 Il **GetPixel** funzione membro dispone di due form. Il primo accetta due valori delle coordinate; il secondo accetta una [punto](../../mfc/reference/point-structure1.md) struttura o un [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto.  
  
##  <a name="a-namegetpolyfillmodea--cdcgetpolyfillmode"></a><a name="getpolyfillmode"></a>CDC::GetPolyFillMode  
 Recupera la modalità di riempimento del poligono.  
  
```  
int GetPolyFillMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La modalità di riempimento poligono corrente, **ALTERNATIVO** o **VERTICI**, se la funzione ha esito positivo.  
  
### <a name="remarks"></a>Note  
 Vedere il `SetPolyFillMode` una funzione membro per una descrizione delle modalità di riempimento del poligono.  
  
##  <a name="a-namegetrop2a--cdcgetrop2"></a><a name="getrop2"></a>CDC::GetROP2  
 Recupera la modalità di disegno corrente.  
  
```  
int GetROP2() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La modalità di disegno. Per un elenco dei valori di modalità di disegno, vedere il `SetROP2` funzione membro.  
  
### <a name="remarks"></a>Note  
 La modalità di disegno specifica come vengono combinati i colori della penna e l'area interna di oggetti con riempimento con colore già sulla superficie di visualizzazione.  
  
##  <a name="a-namegetsafehdca--cdcgetsafehdc"></a><a name="getsafehdc"></a>CDC::GetSafeHdc  
 Chiamare questa funzione membro per ottenere [m_hDC](#m_hdc), il contesto di dispositivo di output.  
  
```  
HDC GetSafeHdc() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un handle del contesto di dispositivo.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro funziona anche con puntatori null.  
  
##  <a name="a-namegetstretchbltmodea--cdcgetstretchbltmode"></a><a name="getstretchbltmode"></a>CDC::GetStretchBltMode  
 Recupera la modalità di adattamento bitmap corrente.  
  
```  
int GetStretchBltMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito specifica la modalità di adattamento bitmap corrente, ovvero **STRETCH_ANDSCANS**, **STRETCH_DELETESCANS**, o **STRETCH_ORSCANS** , ovvero se la funzione ha esito positivo.  
  
### <a name="remarks"></a>Note  
 La modalità di adattamento bitmap definisce come vengono rimosse informazioni dalle bitmap allungata o compresso per la `StretchBlt` funzione membro.  
  
 Il **STRETCH_ANDSCANS** e **STRETCH_ORSCANS** modalità sono in genere utilizzata per mantenere pixel Bitmap monocromatica in primo piano. Il **STRETCH_DELETESCANS** modalità viene in genere utilizzata per mantenere colore nella bitmap a colori.  
  
##  <a name="a-namegettabbedtextextenta--cdcgettabbedtextextent"></a><a name="gettabbedtextextent"></a>CDC::GetTabbedTextExtent  
 Chiamare questa funzione membro per calcolare la larghezza e altezza di una stringa di caratteri utilizzando [m_hAttribDC](#m_hattribdc), il contesto di dispositivo di attributo.  
  
```  
CSize GetTabbedTextExtent(
    LPCTSTR lpszString,  
    int nCount,  
    int nTabPositions,  
    LPINT lpnTabStopPositions) const;  
  
CSize GetTabbedTextExtent(
    const CString& str,  
    int nTabPositions,  
    LPINT lpnTabStopPositions) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpszString`  
 Punta a una stringa di caratteri. È inoltre possibile passare un [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto per questo parametro.  
  
 `nCount`  
 Specifica il numero di caratteri nella stringa. Se `nCount` è -1, la lunghezza viene calcolata.  
  
 `nTabPositions`  
 Specifica il numero di posizioni di tabulazione nella matrice a cui puntata `lpnTabStopPositions`.  
  
 `lpnTabStopPositions`  
 Punta a una matrice di interi che contiene le posizioni di tabulazione in unità logiche. I punti di tabulazione devono essere ordinati in senso crescente; il valore x minimo deve essere il primo elemento nella matrice. Non sono consentite le tabulazioni.  
  
 `str`  
 Oggetto `CString` oggetto che contiene i caratteri specificati da disegnare.  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni della stringa (in unità logiche) in un [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Se la stringa contiene uno o più caratteri di tabulazione, la larghezza della stringa si basa le tabulazioni specificate da `lpnTabStopPositions`. La funzione utilizza il tipo di carattere attualmente selezionato per calcolare le dimensioni della stringa.  
  
 L'area di ritaglio corrente non offset la larghezza e altezza restituito dal `GetTabbedTextExtent` (funzione).  
  
 Poiché alcuni dispositivi non inserire caratteri nelle matrici di cella normale (vale a dire crenatura dei caratteri), la somma degli extent dei caratteri in una stringa non può essere uguale per l'estensione della stringa.  
  
 Se `nTabPositions` è 0 e `lpnTabStopPositions` è **NULL**, le schede vengono espanse in otto volte la media larghezza del carattere. Se `nTabPositions` è 1, le tabulazioni saranno separate per la distanza specificata dal primo valore nella matrice in cui `lpnTabStopPositions` punti. Se `lpnTabStopPositions` punti a più di un singolo valore, è impostato un punto di tabulazione per ogni valore nella matrice, fino al numero specificato da `nTabPositions`.  
  
##  <a name="a-namegettextaligna--cdcgettextalign"></a><a name="gettextalign"></a>CDC::GetTextAlign  
 Recupera lo stato dei flag di allineamento del testo per il contesto di dispositivo.  
  
```  
UINT GetTextAlign() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Lo stato dei flag di allineamento del testo. Il valore restituito è uno o più dei seguenti valori:  
  
- **TA_BASELINE** specifica l'allineamento dell'asse x e la linea di base del tipo di carattere selezionato all'interno del rettangolo di delimitazione.  
  
- **TA_BOTTOM** specifica l'allineamento dell'asse x e la parte inferiore del rettangolo di delimitazione.  
  
- **TA_CENTER** specifica l'allineamento dell'asse y e il centro del rettangolo di delimitazione.  
  
- **TA_LEFT** specifica l'allineamento dell'asse y e il lato sinistro del rettangolo di delimitazione.  
  
- **TA_NOUPDATECP** specifica che la posizione corrente non viene aggiornata.  
  
- **TA_RIGHT** specifica l'allineamento dell'asse y e il lato destro del rettangolo di delimitazione.  
  
- **TA_TOP** specifica l'allineamento dell'asse x e la parte superiore del rettangolo di delimitazione.  
  
- **TA_UPDATECP** specifica che viene aggiornata la posizione corrente.  
  
### <a name="remarks"></a>Note  
 Determinano i flag di allineamento del testo come il `TextOut` e `ExtTextOut` funzioni membro allineare una stringa di testo in relazione al punto iniziale della stringa. I flag di allineamento del testo non sono necessariamente bit singolo flag e possono essere uguali a 0. Per verificare se è impostato un flag, un'applicazione deve eseguire la procedura seguente:  
  
1.  Applicare l'operatore OR bit per bit di flag e dei relativi flag correlati, raggruppati come indicato di seguito:  
  
    - **TA_LEFT**, **TA_CENTER**, e **TA_RIGHT**  
  
    - **TA_BASELINE**, **TA_BOTTOM**, e **TA_TOP**  
  
    - **TA_NOUPDATECP** e **TA_UPDATECP**  
  
2.  Applicare il bit per bit- e operatore il risultato e il valore restituito di `GetTextAlign`.  
  
3.  Per verificare l'uguaglianza di questo risultato e il flag.  
  
##  <a name="a-namegettextcharacterextraa--cdcgettextcharacterextra"></a><a name="gettextcharacterextra"></a>CDC::GetTextCharacterExtra  
 Recupera l'impostazione corrente per la quantità di spaziatura tra caratteri relativamente.  
  
```  
int GetTextCharacterExtra() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La quantità di spaziatura tra caratteri relativamente.  
  
### <a name="remarks"></a>Note  
 GDI aggiunge la spaziatura a ogni carattere, inclusi i caratteri di interruzione, quando si scrive una riga di testo nel contesto di dispositivo.  
  
 Il valore predefinito per la quantità di spaziatura tra caratteri relativamente è 0.  
  
##  <a name="a-namegettextcolora--cdcgettextcolor"></a><a name="gettextcolor"></a>CDC::GetTextColor  
 Recupera il colore del testo corrente.  
  
```  
COLORREF GetTextColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Colore del testo corrente come valore di colore RGB.  
  
### <a name="remarks"></a>Note  
 Il colore del testo è il colore di primo piano di caratteri disegnati con le funzioni membro di output di testo GDI [TextOut](#textout), [ExtTextOut](#exttextout), e [TabbedTextOut](#tabbedtextout).  
  
##  <a name="a-namegettextextenta--cdcgettextextent"></a><a name="gettextextent"></a>CDC::GetTextExtent  
 Chiamare questa funzione membro per calcolare la larghezza e altezza di una riga di testo utilizzando il tipo di carattere corrente per determinare le dimensioni.  
  
```  
CSize GetTextExtent(
    LPCTSTR lpszString,  
    int nCount) const;  
  
CSize GetTextExtent(const CString& str) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpszString`  
 Punta a una stringa di caratteri. È inoltre possibile passare un [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto per questo parametro.  
  
 `nCount`  
 Specifica il numero di caratteri nella stringa.  
  
 `str`  
 Oggetto `CString` oggetto che contiene i caratteri specificati.  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni della stringa (in unità logiche) in un [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Le informazioni vengono recuperate da [m_hAttribDC](#m_hattribdc), il contesto di dispositivo di attributo.  
  
 Per impostazione predefinita, `GetTextExtent` si presuppone che il testo per il quale viene recuperata la dimensione è impostato lungo una linea orizzontale (ovvero, il valore di escape è 0). Se si crea un tipo di carattere specificando un angolo di rotazione diverso da zero, è necessario convertire l'angolo del testo in modo esplicito per ottenere le dimensioni della stringa.  
  
 L'area di ritaglio corrente non influisce sulla larghezza e altezza restituito da `GetTextExtent`.  
  
 Poiché alcuni dispositivi non inserire caratteri nelle matrici di cella normale (vale a dire che effettua la crenatura), la somma degli extent dei caratteri in una stringa non può essere uguale per l'estensione della stringa.  
  
##  <a name="a-namegettextextentexpointia--cdcgettextextentexpointi"></a><a name="gettextextentexpointi"></a>CDC::GetTextExtentExPointI  
 Recupera il numero di caratteri in una stringa specificata che rientra in uno spazio specificato e riempie una matrice con l'estensione di testo per ognuno di tali caratteri.  
  
```  
BOOL GetTextExtentExPointI(
    LPWORD pgiIn,  
    int cgi,  
    int nMaxExtent,  
    LPINT lpnFit,  
    LPINT alpDx,  
    LPSIZE lpSize) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pgiIn`  
 Un puntatore a una matrice di indici di glifi per il quale devono essere recuperate extent.  
  
 `cgi`  
 Specifica il numero di glifi nella matrice a cui puntata `pgiIn`.  
  
 `nMaxExtent`  
 Specifica la larghezza massima consentita, in unità logiche, della stringa formattata.  
  
 `lpnFit`  
 Un puntatore a un valore integer che riceve un conteggio del numero massimo di caratteri che possono essere contenuti nello spazio specificato da `nMaxExtent`. Quando `lpnFit` è **NULL**, `nMaxExtent` viene ignorato.  
  
 *alpDx*  
 Un puntatore a una matrice di interi che riceve gli extent glifo parziale. Ogni elemento della matrice restituisce la distanza, espressa in unità logiche, tra l'inizio della matrice di indici di glifo e uno dei glifi che rientra nell'area specificata da `nMaxExtent`. Sebbene questa matrice deve avere almeno un numero di elementi come gli indici specificati da `cgi`, la funzione riempie la matrice con gli extent solo per tutti gli indici definiti da `lpnFit`. Se *lpnDx* è **NULL**, la funzione non calcola la larghezza delle stringa parziale.  
  
 `lpSize`  
 Puntatore a un [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura che riceve le dimensioni della matrice di indici di glifo, in unità logiche. Questo valore non può essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità della funzione [GetTextExtentExPointI](http://msdn.microsoft.com/library/windows/desktop/dd144936), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegettextextentpointia--cdcgettextextentpointi"></a><a name="gettextextentpointi"></a>CDC::GetTextExtentPointI  
 Recupera la larghezza e l'altezza della matrice specificata di indici di glifi.  
  
```  
BOOL GetTextExtentPointI(
    LPWORD pgiIn,  
    int cgi,  
    LPSIZE lpSize) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pgiIn`  
 Un puntatore a una matrice di indici di glifi per il quale devono essere recuperate extent.  
  
 `cgi`  
 Specifica il numero di glifi nella matrice a cui puntata `pgiIn`.  
  
 `lpSize`  
 Puntatore a un [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura che riceve le dimensioni della matrice di indici di glifo, in unità logiche. Questo valore non può essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità della funzione [GetTextExtentPointI](http://msdn.microsoft.com/library/windows/desktop/dd144939), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegettextfacea--cdcgettextface"></a><a name="gettextface"></a>CDC::GetTextFace  
 Chiamare questa funzione membro per copiare il nome del tipo di carattere corrente in un buffer.  
  
```  
int GetTextFace(
    int nCount,  
    LPTSTR lpszFacename) const;  
  
int GetTextFace(CString& rString) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nCount`  
 Specifica la dimensione del buffer (in byte). Se il nome del tipo di carattere è superiore al numero di byte specificato da questo parametro, il nome verrà troncato.  
  
 *lpszFacename*  
 Punti nel buffer per il nome del tipo di carattere.  
  
 `rString`  
 Un riferimento a un [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di byte copiati nel buffer, escluso il carattere di terminazione null. È 0 se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 Il nome del tipo di carattere viene copiato come una stringa con terminazione null.  
  
##  <a name="a-namegettextmetricsa--cdcgettextmetrics"></a><a name="gettextmetrics"></a>CDC::GetTextMetrics  
 Recupera le metriche per il carattere corrente utilizzando il contesto di dispositivo di attributo.  
  
```  
BOOL GetTextMetrics(LPTEXTMETRIC lpMetrics) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpMetrics`  
 Indichi il [TEXTMETRIC](http://msdn.microsoft.com/library/windows/desktop/dd145132) struttura che riceve le metriche.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
##  <a name="a-namegetviewportexta--cdcgetviewportext"></a><a name="getviewportext"></a>CDC::GetViewportExt  
 Recupera gli ambiti x e y del riquadro di visualizzazione del contesto di dispositivo.  
  
```  
CSize GetViewportExt() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il x - e y-extent (in unità di dispositivo) come un `CSize` oggetto.  
  
##  <a name="a-namegetviewportorga--cdcgetviewportorg"></a><a name="getviewportorg"></a>CDC::GetViewportOrg  
 Recupera le coordinate x e y dell'origine del riquadro di visualizzazione associato al contesto di dispositivo.  
  
```  
CPoint GetViewportOrg() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'origine del riquadro di visualizzazione (nelle coordinate del dispositivo) come un `CPoint` oggetto.  
  
##  <a name="a-namegetwindowa--cdcgetwindow"></a><a name="getwindow"></a>CDC::GetWindow  
 Restituisce la finestra associata al contesto di dispositivo di visualizzazione.  
  
```  
CWnd* GetWindow() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un `CWnd` oggetto in caso di esito positivo; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Si tratta di una funzione avanzata. Questa funzione membro ad esempio, potrebbe non restituire la finestra di visualizzazione durante la stampa o in anteprima di stampa. Restituisce sempre la finestra di output associata. Le funzioni di output che utilizzano il controller di dominio specificato disegno in questa finestra.  
  
##  <a name="a-namegetwindowexta--cdcgetwindowext"></a><a name="getwindowext"></a>CDC::GetWindowExt  
 Recupera gli extent x e y della finestra associata al contesto di dispositivo.  
  
```  
CSize GetWindowExt() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il x - e y-extent (in unità logiche) come un `CSize` oggetto.  
  
##  <a name="a-namegetwindoworga--cdcgetwindoworg"></a><a name="getwindoworg"></a>CDC::GetWindowOrg  
 Recupera le coordinate x e y dell'origine della finestra associata al contesto di dispositivo.  
  
```  
CPoint GetWindowOrg() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'origine della finestra (espressa in coordinate logiche) come un `CPoint` oggetto.  
  
##  <a name="a-namegetworldtransforma--cdcgetworldtransform"></a><a name="getworldtransform"></a>CDC::GetWorldTransform  
 Recupera lo spazio mondo corrente alla trasformazione di spazio di paging.  
  
```  
BOOL GetWorldTransform(XFORM& rXform) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `rXform`  
 Fare riferimento a un [XFORM](http://msdn.microsoft.com/library/windows/desktop/dd145228) struttura che riceve lo spazio mondo corrente alla trasformazione di spazio di paging.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un valore diverso da zero in caso di riuscita.  
  
 Restituisce 0 in caso di errore.  
  
 Per ottenere ulteriori informazioni sull'errore, chiamare [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360).  
  
### <a name="remarks"></a>Note  
 Questo metodo include la funzione GDI Windows [GetWorldTransform](http://msdn.microsoft.com/library/windows/desktop/dd144953).  
  
##  <a name="a-namegradientfilla--cdcgradientfill"></a><a name="gradientfill"></a>CDC::GradientFill  
 Chiamare questa funzione membro per popolare strutture rettangolo e triangolo con colore graduale dissolvenza da un lato a altro.  
  
```  
BOOL GradientFill(
    TRIVERTEX* pVertices,  
    ULONG nVertices,  
    void* pMesh,  
    ULONG nMeshElements,  
    DWORD dwMode);
```  
  
### <a name="parameters"></a>Parametri  
 *pVertices*  
 Puntatore a una matrice di [TRIVERTEX](http://msdn.microsoft.com/library/windows/desktop/dd145142) strutture che ognuno dei quali definisce un vertice del triangolo.  
  
 *nVertices*  
 Il numero di vertici.  
  
 `pMesh`  
 Matrice di [GRADIENT_TRIANGLE](http://msdn.microsoft.com/library/windows/desktop/dd144959) in modalità triangolo o una matrice di strutture [GRADIENT_RECT](http://msdn.microsoft.com/library/windows/desktop/dd144958) strutture in modalità di rettangolo.  
  
 *nMeshElements*  
 Il numero di elementi (triangoli o rettangoli) in `pMesh`.  
  
 `dwMode`  
 Specifica la modalità di riempimento sfumato. Per un elenco di valori possibili, vedere [GradientFill](http://msdn.microsoft.com/library/windows/desktop/dd144957) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se ha esito positivo; in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere `GradientFill` nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegraystringa--cdcgraystring"></a><a name="graystring"></a>CDC:: graystring  
 Consente di disegnare disattivata (grigio) nella posizione specificata dalla scrittura del testo in una bitmap in memoria, la bitmap di attenuazione e quindi copiare la bitmap per la visualizzazione.  
  
```  
virtual BOOL GrayString(
    CBrush* pBrush,  
    BOOL (CALLBACK* lpfnOutput)(
    HDC,
    LPARAM,
    int),  
    LPARAM lpData,  
    int nCount,  
    int x,  
    int y,  
    int nWidth,  
    int nHeight);
```  
  
### <a name="parameters"></a>Parametri  
 `pBrush`  
 Identifica il pennello da utilizzare per la sfumatura (fornito).  
  
 `lpfnOutput`  
 Specifica l'indirizzo dell'istanza di routine della funzione di callback fornita dall'applicazione che utilizzerà la stringa. Per ulteriori informazioni, vedere la descrizione delle finestre **OutputFunc** [funzione di callback](../../mfc/reference/callback-function-for-cdc-graystring.md). Se questo parametro è **NULL**, il sistema utilizza Windows `TextOut` funzione per disegnare la stringa e `lpData` si presuppone che sia un puntatore di tipo long alla stringa di caratteri da restituire.  
  
 `lpData`  
 Specifica un puntatore ai dati deve essere passato alla funzione di output distante. Se `lpfnOutput` è **NULL**, `lpData` deve essere un puntatore di tipo long per la stringa da restituire.  
  
 `nCount`  
 Specifica il numero di caratteri da restituire. Se questo parametro è 0, `GrayString` calcola la lunghezza della stringa (presupponendo che `lpData` è un puntatore alla stringa). Se `nCount` è -1 e la funzione a cui puntata `lpfnOutput` restituisce 0, l'immagine viene visualizzata ma non in grigio.  
  
 *x*  
 Specifica la coordinata x logica della posizione iniziale del rettangolo che racchiude la stringa.  
  
 *y*  
 Specifica la coordinata y logica della posizione iniziale del rettangolo che racchiude la stringa.  
  
 `nWidth`  
 Specifica la larghezza (in unità logiche) del rettangolo che racchiude la stringa. Se `nWidth` è 0, `GrayString` calcola la larghezza dell'area di lavoro, supponendo che `lpData` è un puntatore alla stringa.  
  
 `nHeight`  
 Specifica l'altezza (in unità logiche) del rettangolo che racchiude la stringa. Se `nHeight` è 0, `GrayString` calcola l'altezza dell'area di lavoro, supponendo che `lpData` è un puntatore alla stringa.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la stringa viene disegnata, oppure 0 se il `TextOut` funzione o la funzione fornita dall'applicazione di output restituito 0, o in caso di memoria insufficiente per creare un oggetto bitmap per l'attenuazione della memoria.  
  
### <a name="remarks"></a>Note  
 La funzione attenua il testo indipendentemente dal pennello selezionato e lo sfondo. Il `GrayString` funzione membro utilizza il tipo di carattere attualmente selezionato. Il `MM_TEXT` modalità di mapping deve essere selezionata prima di utilizzare questa funzione.  
  
 Un'applicazione può creare stringhe (grigio) in grigio in dispositivi che supportano un colore grigio a tinta unita senza chiamare il `GrayString` funzione membro. Il colore di sistema **COLOR_GRAYTEXT** è il colore grigio a tinta unita sistema utilizzato per disegnare il testo disabilitato. L'applicazione può chiamare il **GetSysColor** funzione di Windows per recuperare il valore del colore **COLOR_GRAYTEXT**. Se il colore è diverso da 0 (nero), l'applicazione può chiamare il `SetTextColor` funzione membro per impostare il colore del testo per il valore del colore e quindi disegnare direttamente la stringa. Se il colore recuperato è nero, l'applicazione deve chiamare `GrayString` per sfumare (grigio) il testo.  
  
 Se `lpfnOutput` è **NULL**, utilizza il programma di GDI [TextOut](http://msdn.microsoft.com/library/windows/desktop/dd145133) funzione, e `lpData` si presuppone che sia un puntatore distante al carattere di output. Se i caratteri di output non possono essere gestiti dal `TextOut` funzione membro (ad esempio, la stringa viene archiviata come bitmap), l'applicazione deve fornire la propria funzione di output.  
  
 Si noti inoltre che tutte le funzioni di callback devono intercettare le eccezioni di Microsoft Foundation prima di tornare a Windows, poiché non possono essere generate eccezioni attraverso i limiti di callback. Per ulteriori informazioni sulle eccezioni, vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).  
  
 La funzione di callback passato a `GrayString` necessario utilizzare il `__stdcall` la convenzione di chiamata e deve essere esportata con `__declspec`.  
  
 Quando il framework è in modalità di anteprima, una chiamata al `GrayString` funzione membro viene convertita in un `TextOut` chiamata e la funzione di callback non viene chiamato.  
  
##  <a name="a-namehimetrictodpa--cdchimetrictodp"></a><a name="himetrictodp"></a>CDC::HIMETRICtoDP  
 Utilizzare questa funzione per la conversione **HIMETRIC** dimensioni da OLE a pixel.  
  
```  
void HIMETRICtoDP(LPSIZE lpSize) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpSize`  
 Punta a un [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura o [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Se la modalità di mapping dell'oggetto di contesto di dispositivo è `MM_LOENGLISH`, `MM_HIENGLISH`, `MM_LOMETRIC` o `MM_HIMETRIC`, quindi la conversione si basa sul numero di pixel in pollici fisica. Se la modalità di mapping è una delle altre modalità non limitata (ad esempio, `MM_TEXT`), quindi la conversione si basa sul numero di pixel in pollice logico.  
  
##  <a name="a-namehimetrictolpa--cdchimetrictolp"></a><a name="himetrictolp"></a>CDC::HIMETRICtoLP  
 Chiamare questa funzione per convertire **HIMETRIC** unità in unità logiche.  
  
```  
void HIMETRICtoLP(LPSIZE lpSize) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpSize`  
 Punta a un [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura o [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione quando si ottengono **HIMETRIC** dimensioni da OLE e si desidera convertirli in modalità di mapping naturali dell'applicazione.  
  
 La conversione viene eseguita prima convertendo il **HIMETRIC** unità in pixel, quindi la conversione di queste unità in unità logiche utilizzando unità mapping correnti del contesto di dispositivo. Si noti che gli extent della finestra del dispositivo e viewport influirà il risultato.  
  
##  <a name="a-nameintersectcliprecta--cdcintersectcliprect"></a><a name="intersectcliprect"></a>CDC::IntersectClipRect  
 Crea una nuova area di ritaglio per formare l'intersezione tra l'area corrente e il rettangolo specificato da `x1`, `y1`, `x2`, e `y2`.  
  
```  
int IntersectClipRect(
    int x1,  
    int y1,  
    int x2,  
    int y2);  
  
int IntersectClipRect(LPCRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 `x1`  
 Specifica la coordinata x logica dell'angolo superiore sinistro del rettangolo di.  
  
 `y1`  
 Specifica la coordinata y logica dell'angolo superiore sinistro del rettangolo.  
  
 `x2`  
 Specifica la coordinata x logica dell'angolo inferiore destro del rettangolo.  
  
 `y2`  
 Specifica la coordinata y logica dell'angolo inferiore destro del rettangolo.  
  
 `lpRect`  
 Specifica il rettangolo. È possibile passare un `CRect` oggetto o un puntatore a un `RECT` struttura per questo parametro.  
  
### <a name="return-value"></a>Valore restituito  
 Tipo della nuova area di ritaglio. Può essere uno dei valori seguenti:  
  
- **COMPLEXREGION** nuova area di ritaglio è sovrapposti i bordi.  
  
- **ERRORE** contesto di dispositivo non è valido.  
  
- **NULLREGION** nuova area di ritaglio è vuoto.  
  
- **SIMPLEREGION** nuova area di visualizzazione non dispone di alcun bordi sovrapposti.  
  
### <a name="remarks"></a>Note  
 GDI Ritaglia tutti gli output successivi per rientrare il nuovo limite. La larghezza e altezza non deve superare 32.767.  
  
##  <a name="a-nameinvertrecta--cdcinvertrect"></a><a name="invertrect"></a>CDC::InvertRect  
 Inverte il contenuto del rettangolo specificato.  
  
```  
void InvertRect(LPCRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Punta a un `RECT` che contiene le coordinate logiche del rettangolo deve essere invertito. È inoltre possibile passare un `CRect` oggetto per questo parametro.  
  
### <a name="remarks"></a>Note  
 Inversione è logico non operazione e capovolge i bit di ciascun pixel. Monocromatici, la funzione consente di creare pixel bianco e nero e bianco pixel bianco. Sul monitor a colori l'inversione dipende dal modo in cui vengono generati i colori per la visualizzazione. La chiamata `InvertRect` due volte con lo stesso rettangolo consente di ripristinare la visualizzazione per i colori precedenti.  
  
 Se il rettangolo è vuoto, non viene disegnato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#36;](../../mfc/codesnippet/cpp/cdc-class_8.cpp)]  
  
##  <a name="a-nameinvertrgna--cdcinvertrgn"></a><a name="invertrgn"></a>CDC::InvertRgn  
 Inverte i colori nell'area specificata da `pRgn`.  
  
```  
BOOL InvertRgn(CRgn* pRgn);
```  
  
### <a name="parameters"></a>Parametri  
 `pRgn`  
 Identifica l'area deve essere invertito. Le coordinate per l'area vengono specificate in unità logiche.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Monocromatici, la funzione consente di creare pixel bianco e nero e bianco pixel bianco. Sul monitor a colori l'inversione dipende dal modo in cui vengono generati i colori per la visualizzazione.  
  
##  <a name="a-nameisprintinga--cdcisprinting"></a><a name="isprinting"></a>CDC::IsPrinting  
 Determina se il contesto di dispositivo viene utilizzato per la stampa.  
  
```  
BOOL IsPrinting() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la `CDC` oggetto è una stampante controller di dominio; in caso contrario 0.  
  
##  <a name="a-namelinetoa--cdclineto"></a><a name="lineto"></a>CDC::LineTo  
 Disegna una linea dalla posizione corrente fino a, ma non inclusi, il punto specificato da *x* e *y* (o `point`).  
  
```  
BOOL LineTo(
    int x,  
    int y);  
  
BOOL LineTo(POINT point);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica la coordinata x logica dell'endpoint per la riga.  
  
 *y*  
 Specifica la coordinata y logica dell'endpoint per la riga.  
  
 `point`  
 Specifica l'endpoint per la riga. È possibile passare un **punto** struttura o un `CPoint` oggetto per questo parametro.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la linea viene tracciata; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La linea viene tracciata con la penna selezionata. La posizione corrente è impostata su *x*, *y* o `point`.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CRect::CenterPoint](../../atl-mfc-shared/reference/crect-class.md#centerpoint).  
  
##  <a name="a-namelptodpa--cdclptodp"></a><a name="lptodp"></a>CDC::LPtoDP  
 Converte le unità logiche in unità di dispositivo.  
  
```  
void LPtoDP(
    LPPOINT lpPoints,  
    int nCount = 1) const;  
  
void LPtoDP(LPRECT lpRect) const;
void LPtoDP(LPSIZE lpSize) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpPoints`  
 Punta a una matrice di punti. Ogni punto della matrice è un [punto](../../mfc/reference/point-structure1.md) struttura o un [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto.  
  
 `nCount`  
 Il numero di punti nella matrice.  
  
 `lpRect`  
 Punta a un [RECT](../../mfc/reference/rect-structure1.md) struttura o un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto. Questo parametro viene utilizzato per il caso comune di mapping di un rettangolo da coordinate logiche a unità di dispositivo.  
  
 `lpSize`  
 Punta a un [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura o un [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 La funzione esegue il mapping delle coordinate di ciascun punto o le dimensioni di una dimensione, dal sistema di coordinate in un sistema di coordinate del dispositivo logico della GDI. La conversione dipende la modalità di mapping corrente e le impostazioni delle origini ed extent della finestra e del riquadro di visualizzazione del dispositivo.  
  
 Le coordinate x e y dei punti sono numeri interi con segno a 2 byte compreso nell'intervallo tra -32.768 e 32.767. Nei casi in cui la modalità di mapping causare valori superiori a questi limiti, il sistema imposta i valori per -32.768 e 32.767, rispettivamente.  
  
##  <a name="a-namelptohimetrica--cdclptohimetric"></a><a name="lptohimetric"></a>CDC::LPtoHIMETRIC  
 Chiamare questa funzione per convertire le unità logiche in **HIMETRIC** unità.  
  
```  
void LPtoHIMETRIC(LPSIZE lpSize) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpSize`  
 Punta a un **dimensioni** struttura o un `CSize` oggetto.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione quando si assegnano **HIMETRIC** dimensioni OLE, la conversione dalla modalità di mapping naturale dell'applicazione. Si noti che gli extent della finestra del dispositivo e viewport influirà il risultato.  
  
 La conversione viene eseguita prima si convertono le unità logiche in pixel, l'utilizzo di unità mapping corrente del contesto di dispositivo, quindi la conversione di queste unità in **HIMETRIC** unità.  
  
##  <a name="a-namemhattribdca--cdcmhattribdc"></a><a name="m_hattribdc"></a>CDC::m_hAttribDC  
 Il contesto di dispositivo di attributo per questo `CDC` oggetto.  
  
```  
HDC m_hAttribDC;  
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, questo contesto di dispositivo è uguale a `m_hDC`. In generale, `CDC` chiamate GDI che richiedono informazioni dal contesto del dispositivo vengono indirizzate a `m_hAttribDC`. Vedere il [CDC](../../mfc/reference/cdc-class.md) descrizione per ulteriori informazioni sull'utilizzo di questi contesti di due dispositivo della classe.  
  
##  <a name="a-namemhdca--cdcmhdc"></a><a name="m_hdc"></a>CDC::m_hDC  
 Il contesto di dispositivo di output per questo `CDC` oggetto.  
  
```  
HDC m_hDC;  
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, `m_hDC` è uguale a `m_hAttribDC`, altro contesto di dispositivo sottoposto a wrapping da `CDC`. In generale, `CDC` vedere chiamate GDI che creano l'output di `m_hDC` contesto di dispositivo. È possibile inizializzare `m_hDC` e `m_hAttribDC` in modo che punti a dispositivi diversi. Vedere il [CDC](../../mfc/reference/cdc-class.md) descrizione per ulteriori informazioni sull'utilizzo di questi contesti di due dispositivo della classe.  
  
##  <a name="a-namemaskblta--cdcmaskblt"></a><a name="maskblt"></a>CDC::MaskBlt  
 Combina i dati di colore per le bitmap di origine e di destinazione mediante la maschera specificata e l'operazione raster.  
  
```  
BOOL MaskBlt(
    int x,  
    int y,  
    int nWidth,  
    int nHeight,  
    CDC* pSrcDC,  
    int xSrc,  
    int ySrc,  
    CBitmap& maskBitmap,  
    int xMask,  
    int yMask,  
    DWORD dwRop);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica la coordinata x logica dell'angolo superiore sinistro del rettangolo di destinazione.  
  
 *y*  
 Specifica la coordinata y logica dell'angolo superiore sinistro del rettangolo di destinazione.  
  
 `nWidth`  
 Specifica la larghezza, in unità logiche di bitmap di origine e rettangolo di destinazione.  
  
 `nHeight`  
 Specifica l'altezza, in unità logiche di bitmap di origine e rettangolo di destinazione.  
  
 `pSrcDC`  
 Identifica il contesto di dispositivo da cui si desidera copiare la bitmap. Deve essere zero se la *dwRop* parametro specifica un'operazione raster che non include un'origine.  
  
 `xSrc`  
 Specifica la coordinata x logica dell'angolo superiore sinistro della bitmap di origine.  
  
 `ySrc`  
 Specifica la coordinata y logica dell'angolo superiore sinistro della bitmap di origine.  
  
 `maskBitmap`  
 Identifica la bitmap di maschera monocromatica combinata con la bitmap a colori nel contesto di dispositivo di origine.  
  
 `xMask`  
 Specifica l'offset orizzontale in pixel della bitmap maschera specificato dal `maskBitmap` parametro.  
  
 `yMask`  
 Specifica l'offset verticale in pixel della bitmap maschera specificato dal `maskBitmap` parametro.  
  
 *dwRop*  
 Specifica sfondo e primo piano ternario codici di operazione raster, che utilizza la funzione per controllare la combinazione di dati di origine e destinazione. Il codice di operazione raster in background viene archiviato nel byte alto della parola elevata di questo valore. il codice di operazione raster in primo piano viene archiviato nel byte basso della parola elevata di questo valore. la Word meno significativa di questo valore viene ignorata e deve essere zero. La macro **MAKEROP4** Crea codici di operazione raster tali combinazioni di primo piano e sfondo. Vedere la sezione Osservazioni per una descrizione di primo piano e sfondo nel contesto di questa funzione. Vedere il `BitBlt` una funzione membro per un elenco dei codici di operazione raster comuni.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Il valore 1 nella maschera specificata da `maskBitmap` indica che il codice dell'operazione raster in primo piano specificato da *dwRop* deve essere applicato in tale posizione. Il valore 0 nella maschera indica che il codice dell'operazione raster sfondo specificato da *dwRop* deve essere applicato in tale posizione. Se le operazioni parallele richiedono un'origine, il rettangolo maschera deve coprire il rettangolo di origine. In caso contrario, la funzione avrà esito negativo. Se le operazioni parallele non è necessaria un'origine, il rettangolo maschera deve coprire il rettangolo di destinazione. In caso contrario, la funzione avrà esito negativo.  
  
 Se una trasformazione di rotazione o inclinazione è attiva per il contesto di dispositivo di origine quando viene chiamata questa funzione, si verifica un errore. Tuttavia, sono consentiti altri tipi di trasformazioni.  
  
 Se i formati di colore di origine, modello e bitmap di destinazione sono diversi, questa funzione converte il modello di formato di origine e/o, in base al formato di destinazione. Se la maschera bitmap non è una bitmap monocromatica, si verifica un errore. Quando viene registrato un enhanced metafile si verifica un errore (e la funzione restituisce 0) se il contesto di dispositivo di origine identifica un contesto di dispositivo metafile avanzati. Non tutti i dispositivi supportano `MaskBlt`. Un'applicazione deve chiamare `GetDeviceCaps` per determinare se un dispositivo supporta questa funzione. Se non viene fornito alcun bitmap maschera, questa funzione si comporta esattamente come `BitBlt`, utilizzando il codice di operazione raster in primo piano. I pixel vengono spostati nella maschera bitmap mappa per il punto (0,0) nella mappa di bit del contesto di dispositivo di origine. Ciò risulta utile nei casi in cui una bitmap maschera contiene un set di maschere; un'applicazione può applicare facilmente uno di essi a un'attività di trasferimento maschera modificando gli offset dei pixel e dimensioni rettangolo inviato a `MaskBlt`.  
  
##  <a name="a-namemodifyworldtransforma--cdcmodifyworldtransform"></a><a name="modifyworldtransform"></a>CDC::ModifyWorldTransform  
 Modifica la trasformazione globale per un contesto di dispositivo utilizzando la modalità specificata.  
  
```  
BOOL ModifyWorldTransform(
    const XFORM& rXform,  
    DWORD iMode);
```  
  
### <a name="parameters"></a>Parametri  
 `rXform`  
 Fare riferimento a un [XFORM](http://msdn.microsoft.com/library/windows/desktop/dd145228) struttura utilizzata per modificare la trasformazione globale per il contesto di dispositivo specificato.  
  
 `iMode`  
 Specifica il modo in cui i dati di trasformazione modifica la trasformazione globale corrente. Per un elenco dei valori che può richiedere questo parametro, vedere [ModifyWorldTransform](http://msdn.microsoft.com/library/windows/desktop/dd145060).  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un valore diverso da zero in caso di riuscita.  
  
 Restituisce 0 in caso di errore.  
  
 Per ottenere ulteriori informazioni sull'errore, chiamare [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360).  
  
### <a name="remarks"></a>Note  
 Questo metodo include la funzione GDI Windows [ModifyWorldTransform](http://msdn.microsoft.com/library/windows/desktop/dd145060).  
  
##  <a name="a-namemovetoa--cdcmoveto"></a><a name="moveto"></a>CDC::MoveTo  
 Sposta la posizione corrente per il punto specificato da *x* e *y* (o da `point`).  
  
```  
CPoint MoveTo(
    int x,  
    int y);  
  
CPoint MoveTo(POINT point);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica la coordinata x logica della nuova posizione.  
  
 *y*  
 Specifica la coordinata y logica della nuova posizione.  
  
 `point`  
 Specifica la nuova posizione. È possibile passare un **punto** struttura o un `CPoint` oggetto per questo parametro.  
  
### <a name="return-value"></a>Valore restituito  
 Le coordinate x e y della posizione precedente come un `CPoint` oggetto.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CRect::CenterPoint](../../atl-mfc-shared/reference/crect-class.md#centerpoint).  
  
##  <a name="a-nameoffsetcliprgna--cdcoffsetcliprgn"></a><a name="offsetcliprgn"></a>CDC::OffsetClipRgn  
 Sposta l'area di visualizzazione del contesto del dispositivo degli offset specificati.  
  
```  
int OffsetClipRgn(
    int x,  
    int y);  
  
int OffsetClipRgn(SIZE size);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica il numero di unità logiche per spostare a sinistra o destra.  
  
 *y*  
 Specifica il numero di unità logiche per spostare verso l'alto o verso il basso.  
  
 `size`  
 Specifica il valore di offset.  
  
### <a name="return-value"></a>Valore restituito  
 Tipo della nuova area. Può essere uno dei valori seguenti:  
  
- **COMPLEXREGION** area di visualizzazione è sovrapposti i bordi.  
  
- **ERRORE** contesto di dispositivo non è valido.  
  
- **NULLREGION** area di visualizzazione è vuota.  
  
- **SIMPLEREGION** area di visualizzazione non dispone di alcun bordi sovrapposti.  
  
### <a name="remarks"></a>Note  
 La funzione consente di spostare l'area *x* unità lungo l'asse x e *y* unità lungo l'asse y.  
  
##  <a name="a-nameoffsetviewportorga--cdcoffsetviewportorg"></a><a name="offsetviewportorg"></a>CDC::OffsetViewportOrg  
 Modifica delle coordinate dell'origine del riquadro di visualizzazione rispetto alle coordinate dell'origine del riquadro di visualizzazione corrente.  
  
```  
virtual CPoint OffsetViewportOrg(
    int nWidth,  
    int nHeight);
```  
  
### <a name="parameters"></a>Parametri  
 `nWidth`  
 Specifica il numero di unità di dispositivo da aggiungere alla coordinata x dell'origine corrente.  
  
 `nHeight`  
 Specifica il numero di unità di dispositivo da aggiungere alla coordinata y dell'origine corrente.  
  
### <a name="return-value"></a>Valore restituito  
 L'origine del riquadro di visualizzazione precedente (nelle coordinate del dispositivo) come un `CPoint` oggetto.  
  
##  <a name="a-nameoffsetwindoworga--cdcoffsetwindoworg"></a><a name="offsetwindoworg"></a>CDC::OffsetWindowOrg  
 Modifica delle coordinate dell'origine della finestra rispetto alle coordinate dell'origine della finestra corrente.  
  
```  
CPoint OffsetWindowOrg(
    int nWidth,  
    int nHeight);
```  
  
### <a name="parameters"></a>Parametri  
 `nWidth`  
 Specifica il numero di unità logica da aggiungere alla coordinata x dell'origine corrente.  
  
 `nHeight`  
 Specifica il numero di unità logica da aggiungere alla coordinata y dell'origine corrente.  
  
### <a name="return-value"></a>Valore restituito  
 L'origine finestra precedente (in coordinate logiche) come un `CPoint` oggetto.  
  
##  <a name="a-nameoperatorhdca--cdcoperator-hdc"></a><a name="operator_hdc"></a>CDC::operator HDC  
 Utilizzare questo operatore per recuperare l'handle del contesto di dispositivo di `CDC` oggetto.  
  
```  
operator HDC() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, l'handle dell'oggetto di contesto di dispositivo; in caso contrario, **NULL**.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare l'handle per chiamare direttamente le API di Windows.  
  
##  <a name="a-namepaintrgna--cdcpaintrgn"></a><a name="paintrgn"></a>CDC::PaintRgn  
 Riempie l'area specificata da `pRgn` mediante il pennello corrente.  
  
```  
BOOL PaintRgn(CRgn* pRgn);
```  
  
### <a name="parameters"></a>Parametri  
 `pRgn`  
 Identifica l'area da riempire. Le coordinate per l'area specificata sono specificate in unità logiche.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
##  <a name="a-namepatblta--cdcpatblt"></a><a name="patblt"></a>CDC::PatBlt  
 Crea un modello di bit sul dispositivo.  
  
```  
BOOL PatBlt(
    int x,  
    int y,  
    int nWidth,  
    int nHeight,  
    DWORD dwRop);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica la coordinata x logica dell'angolo superiore sinistro del rettangolo che riceverà il modello.  
  
 *y*  
 Specifica la coordinata y logica dell'angolo superiore sinistro del rettangolo che riceverà il modello.  
  
 `nWidth`  
 Specifica la larghezza (in unità logiche) del rettangolo che riceverà il modello.  
  
 `nHeight`  
 Specifica l'altezza (in unità logiche) del rettangolo che riceverà il modello.  
  
 *dwRop*  
 Specifica il codice di operazione raster. Codici di operazione raster (RISC) definiscono la modalità GDI combina i colori nelle operazioni di output che includono un pennello corrente, una possibile bitmap di origine e una bitmap di destinazione. Questo parametro può essere uno dei valori seguenti:  
  
- **PATCOPY** modello copie per bitmap di destinazione.  
  
- **PATINVERT** combina bitmap di destinazione con modello utilizzando l'operatore booleano XOR.  
  
- **DSTINVERT** inverte la bitmap di destinazione.  
  
- **BLACKNESS** tutto l'output nero.  
  
- **WHITENESS** tutto l'output vuoto.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Il modello è una combinazione del pennello selezionato e il modello già sul dispositivo. Il codice di operazione raster specificato da *dwRop* definisce come i modelli devono essere combinati. Le operazioni parallele per questa funzione sono un sottoinsieme limitato dei codici di operazione raster ternario 256 completo; in particolare, un codice di operazione raster che fa riferimento a un'origine non può essere utilizzato.  
  
 Non tutti i contesti di dispositivo supportano il `PatBlt` (funzione). Per determinare se un contesto di dispositivo supporta `PatBlt`, chiamare il `GetDeviceCaps` funzione membro con il **RASTERCAPS** di indice e controllare il valore restituito per il **RC_BITBLT** flag.  
  
##  <a name="a-namepiea--cdcpie"></a><a name="pie"></a>CDC::Pie  
 Disegna una forma a torta spicchio disegnando un arco ellittico con centro e due endpoint è unito da linee.  
  
```  
BOOL Pie(
    int x1,  
    int y1,  
    int x2,  
    int y2,  
    int x3,  
    int y3,  
    int x4,  
    int y4);

 
BOOL Pie(
    LPCRECT lpRect,
    POINT ptStart,
    POINT ptEnd);
```  
  
### <a name="parameters"></a>Parametri  
 `x1`  
 Specifica la coordinata x dell'angolo superiore sinistro del rettangolo di delimitazione (in unità logiche).  
  
 `y1`  
 Specifica la coordinata y dell'angolo superiore sinistro del rettangolo di delimitazione (in unità logiche).  
  
 `x2`  
 Specifica la coordinata x dell'angolo inferiore destro del rettangolo di delimitazione (in unità logiche).  
  
 `y2`  
 Specifica la coordinata y dell'angolo inferiore destro del rettangolo di delimitazione (in unità logiche).  
  
 *x3*  
 Specifica la coordinata x del punto iniziale dell'arco (in unità logiche). Questo punto non è necessario sia esattamente sull'arco.  
  
 `y3`  
 Specifica la coordinata y del punto iniziale dell'arco (in unità logiche). Questo punto non è necessario sia esattamente sull'arco.  
  
 `x4`  
 Specifica la coordinata x del punto finale dell'arco (in unità logiche). Questo punto non è necessario sia esattamente sull'arco.  
  
 `y4`  
 Specifica la coordinata y del punto finale dell'arco (in unità logiche). Questo punto non è necessario sia esattamente sull'arco.  
  
 `lpRect`  
 Specifica il rettangolo di delimitazione. È possibile passare un `CRect` oggetto o un puntatore a un `RECT` struttura per questo parametro.  
  
 `ptStart`  
 Specifica il punto iniziale dell'arco. Questo punto non è necessario sia esattamente sull'arco. È possibile passare un [punto](../../mfc/reference/point-structure1.md) struttura o un [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto per questo parametro.  
  
 `ptEnd`  
 Specifica il punto finale dell'arco. Questo punto non è necessario sia esattamente sull'arco. È possibile passare un **punto** struttura o un `CPoint` oggetto per questo parametro.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Il centro dell'arco è il centro del rettangolo di delimitazione specificato da `x1`, `y1`, `x2`, e `y2` (o da `lpRect`). Iniziale e finale dell'arco vengono specificati da *x3*, `y3`, `x4`, e `y4` (o da `ptStart` e `ptEnd`).  
  
 L'arco viene disegnato con la penna selezionata, lo spostamento in senso antiorario. Due righe aggiuntive vengono prelevate ogni endpoint al centro dell'arco. L'area a forma di grafico a torta viene riempita con il pennello corrente. Se *x3* è uguale a `x4` e `y3` è uguale a `y4`, il risultato è un'ellisse con una singola riga dal centro dell'ellisse nel punto ( *x3*, `y3`) o ( `x4`, `y4`).  
  
 Nella figura creata da questa funzione si estende fino a ma non include le coordinate inferiore e destro. Questo significa che l'altezza della figura `y2` – `y1` e la larghezza della figura `x2` – `x1`. Sia la larghezza e l'altezza del rettangolo di delimitazione deve essere maggiore di 2 unità e minore di 32.767.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#37;](../../mfc/codesnippet/cpp/cdc-class_9.cpp)]  
  
##  <a name="a-nameplaymetafilea--cdcplaymetafile"></a><a name="playmetafile"></a>CDC::PlayMetaFile  
 Consente di riprodurre il contenuto del metafile specificato nel contesto del dispositivo.  
  
```  
BOOL PlayMetaFile(HMETAFILE hMF);

 
BOOL PlayMetaFile(
    HENHMETAFILE hEnhMetaFile,  
    LPCRECT lpBounds);
```  
  
### <a name="parameters"></a>Parametri  
 *hMF*  
 Identifica il metafile da riprodurre.  
  
 *hEnhMetaFile*  
 Identifica il metafile avanzati.  
  
 `lpBounds`  
 Punta a un `RECT` struttura o un `CRect` oggetto che contiene le coordinate del rettangolo di delimitazione utilizzata per visualizzare l'immagine. Le coordinate sono specificate in unità logiche.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Metafile può essere riprodotti qualsiasi numero di volte.  
  
 La seconda versione di `PlayMetaFile` Visualizza l'immagine memorizzata nel metafile in formato avanzato specificato. Quando un'applicazione chiama la seconda versione di `PlayMetaFile`, Windows utilizza l'immagine nell'intestazione di metafile avanzati per eseguire il mapping dell'immagine sul rettangolo a cui fa riferimento il `lpBounds` parametro. (Questa immagine può essere inclinata o ruotata tramite l'impostazione della trasformazione globale nel dispositivo di output prima di chiamare `PlayMetaFile`.) Punti lungo i bordi del rettangolo sono inclusi nell'immagine. Un'immagine di metafile avanzati è possibile troncare definendo l'area di visualizzazione nel dispositivo di output prima della visualizzazione di metafile avanzati.  
  
 Se un enhanced metafile contiene una tavolozza facoltativa, un'applicazione può ottenere colori coerenti impostando una tavolozza dei colori del dispositivo di output prima di chiamare la seconda versione di `PlayMetaFile`. Per recuperare la tavolozza facoltativa, utilizzare il **GetEnhMetaFilePaletteEntries** funzione di Windows. Metafile avanzati può essere incorporato in un metafile avanzato appena creato chiamando la seconda versione di `PlayMetaFile` e riproduzione di origine enhanced metafile nel contesto di dispositivo per il nuovo enhanced metafile.  
  
 Gli stati del contesto del dispositivo di output vengono mantenuti da questa funzione. Qualsiasi oggetto creato, ma non eliminati nel metafile avanzato viene eliminato da questa funzione. Per interrompere questa funzione, un'applicazione può chiamare il **CancelDC** funzione di Windows da un altro thread di terminare l'operazione. In questo caso, la funzione restituisce zero.  
  
##  <a name="a-nameplgblta--cdcplgblt"></a><a name="plgblt"></a>CDC::PlgBlt  
 Esegue un trasferimento a blocchi di bit dei bit di dati relativi al colore dal rettangolo specificato nel contesto di dispositivo di origine al parallelogramma specificato nel contesto di dispositivo specificato.  
  
```  
BOOL PlgBlt(
    LPPOINT lpPoint,  
    CDC* pSrcDC,  
    int xSrc,  
    int ySrc,  
    int nWidth,  
    int nHeight,  
    CBitmap& maskBitmap,  
    int xMask,  
    int yMask);
```  
  
### <a name="parameters"></a>Parametri  
 `lpPoint`  
 Punta a una matrice di tre punti nello spazio logico che identifica tre angoli del parallelogramma di destinazione. Nell'angolo superiore sinistro del rettangolo di origine viene eseguito il mapping al primo punto di questa matrice, nell'angolo superiore destro e il secondo punto della matrice e nell'angolo in basso a sinistra per il terzo punto. Nell'angolo inferiore destro del rettangolo di origine viene eseguito il mapping al quarto punto implicito in parallelogramma.  
  
 `pSrcDC`  
 Identifica il contesto di dispositivo di origine.  
  
 `xSrc`  
 Specifica la coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.  
  
 `ySrc`  
 Specifica la coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di origine.  
  
 `nWidth`  
 Specifica la larghezza, in unità logiche, del rettangolo di origine.  
  
 `nHeight`  
 Specifica l'altezza, in unità logiche, del rettangolo di origine.  
  
 `maskBitmap`  
 Identifica una bitmap monocromatica facoltativa utilizzato per mascherare i colori del rettangolo di origine.  
  
 `xMask`  
 Specifica la coordinata x dell'angolo superiore sinistro della bitmap monocromatica.  
  
 `yMask`  
 Specifica la coordinata y dell'angolo superiore sinistro della bitmap monocromatica.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Se l'handle di maschera di bit specificato identifica una bitmap monocromatica valida, la funzione utilizza questa bitmap per creare una maschera di bit di dati di colore dal rettangolo di origine.  
  
 Il quarto vertice del parallelogramma (D) viene definito considerando i primi tre punti (A, B e C) come vettori e calcolo D = B + C - A.  
  
 Se esiste la maschera di bit, il valore 1 nella maschera indica che il colore del pixel origine deve essere copiato nella destinazione. Il valore 0 nella maschera indica che il colore dei pixel di destinazione non devono essere modificati.  
  
 Se il rettangolo di maschera è minore di rettangoli di origine e di destinazione, la funzione di replica il modello della maschera.  
  
 Le trasformazioni di scala, traslazione e reflection sono consentite nel contesto del dispositivo di origine. Tuttavia, le trasformazioni di rotazione e inclinazione non sono. Se la maschera bitmap non è una bitmap monocromatica, si verifica un errore. Modalità di estensione per il contesto di dispositivo di destinazione viene utilizzata per determinare come allungare o comprimere i pixel, se necessario. Quando viene registrato un enhanced metafile si verifica un errore se il contesto di dispositivo di origine identifica un contesto di dispositivo metafile avanzati.  
  
 Le coordinate di destinazione vengono trasformate in base al contesto del dispositivo di destinazione; le coordinate di origine vengono trasformate in base al contesto del dispositivo di origine. Se la trasformazione di origine ha una rotazione o inclinazione, viene restituito un errore. Se i rettangoli di origine e destinazione hanno lo stesso formato di colore, `PlgBlt` converte il rettangolo di origine in modo che corrisponda il rettangolo di destinazione. Non tutti i dispositivi supportano `PlgBlt`. Per ulteriori informazioni, vedere la descrizione del **RC_BITBLT** raster capacità di `CDC::GetDeviceCaps` funzione membro.  
  
 Se i contesti di dispositivo di origine e destinazione rappresentano periferiche incompatibili, `PlgBlt` restituisce un errore.  
  
##  <a name="a-namepolybeziera--cdcpolybezier"></a><a name="polybezier"></a>CDC::PolyBezier  
 Disegna una spline di Bzier uno o più.  
  
```  
BOOL PolyBezier(
    const POINT* lpPoints,  
    int nCount);
```  
  
### <a name="parameters"></a>Parametri  
 `lpPoints`  
 Punta a una matrice di [punto](../../mfc/reference/point-structure1.md) strutture di dati che contengono gli endpoint e punti di controllo del spline(s).  
  
 `nCount`  
 Specifica il numero di punti di `lpPoints` matrice. Questo valore deve essere uno più di tre volte il numero di spline da disegnare, poiché ogni spline Bzier richiede due punti di controllo e un endpoint e la spline iniziale richiede un ulteriore punto di partenza.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione crea cubiche Bzier spline utilizzando gli endpoint e i punti di controllo specificati dal `lpPoints` parametro. La spline prima viene disegnata dal primo al quarto punto tramite il secondo e terzo punto come punti di controllo. Ogni spline successive nella sequenza richiede esattamente tre ulteriori punti: il punto finale della spline precedente viene utilizzato come punto di partenza, i due punti nella sequenza sono punti di controllo e il terzo è il punto finale.  
  
 La posizione corrente non viene utilizzata né aggiornata mediante la `PolyBezier` (funzione). Nella figura non viene riempita. Questa funzione consente di disegnare linee mediante la penna corrente.  
  
##  <a name="a-namepolybeziertoa--cdcpolybezierto"></a><a name="polybezierto"></a>CDC::PolyBezierTo  
 Disegna una spline di Bzier uno o più.  
  
```  
BOOL PolyBezierTo(
    const POINT* lpPoints,  
    int nCount);
```  
  
### <a name="parameters"></a>Parametri  
 `lpPoints`  
 Punta a una matrice di [punto](../../mfc/reference/point-structure1.md) punta strutture di dati che contiene il controllo e gli endpoint.  
  
 `nCount`  
 Specifica il numero di punti di `lpPoints` matrice. Questo valore deve essere di tre volte il numero di spline da disegnare, poiché ogni spline Bzier richiede due punti di controllo e un punto finale.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione consente di disegnare spline Bzier cubiche utilizzando i punti di controllo specificati dal `lpPoints` parametro. La spline prima viene disegnata dalla posizione corrente al terzo punto utilizzando i primi due punti come punti di controllo. Per ogni spline successive, la funzione richiede esattamente tre ulteriori punti e utilizza il punto finale della spline precedente come punto di partenza per il successivo. `PolyBezierTo`Sposta la posizione corrente e il punto finale della spline Bzier ultimo. Nella figura non viene riempita. Questa funzione consente di disegnare linee mediante la penna corrente.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CDC:: BeginPath](#beginpath).  
  
##  <a name="a-namepolydrawa--cdcpolydraw"></a><a name="polydraw"></a>CDC::PolyDraw  
 Disegna una serie di segmenti di linea e Bzier spline.  
  
```  
BOOL PolyDraw(
    const POINT* lpPoints,  
    const BYTE* lpTypes,  
    int nCount);
```  
  
### <a name="parameters"></a>Parametri  
 `lpPoints`  
 Punta a una matrice di [punto](../../mfc/reference/point-structure1.md) strutture di dati che contiene gli endpoint per ogni riga segmento e gli endpoint e punti per ogni spline Bzier di controllo.  
  
 `lpTypes`  
 Punta a una matrice che specifica come ogni punto di `lpPoints` matrice viene utilizzata. I possibili valori sono i seguenti:  
  
- **PT_MOVETO** specifica che questo punto viene avviata una figura non contiguo. Questo punto diventa la nuova posizione corrente.  
  
- **PT_LINETO** specifica che una riga deve essere disegnato dalla posizione corrente fino a questo punto, che diventa la nuova posizione corrente.  
  
- **PT_BEZIERTO** specifica che questo punto è un punto di controllo o un punto finale di una spline di tipo Bzier.  
  
 **PT_BEZIERTO** sempre si verificano nei set di tre tipi. La posizione corrente definisce il punto di partenza per la spline Bzier. Le prime due **PT_BEZIERTO** punti sono i punti di controllo e il terzo **PT_BEZIERTO** punto è il punto finale. Il punto finale diventa la nuova posizione corrente. Se non vi sono tre volte consecutive **PT_BEZIERTO** punti, un errore.  
  
     Oggetto **PT_LINETO** o **PT_BEZIERTO** tipo può essere combinato con la costante seguente utilizzando l'operatore OR bit per bit oppure per indicare che il punto corrispondente è l'ultimo punto in una figura e nella figura viene chiuso:  
  
- **PT_CLOSEFIGURE** consente di specificare che nella figura viene chiuso automaticamente dopo il **PT_LINETO** o **PT_BEZIERTO** tipo per questo punto viene eseguito. Una linea viene tracciata dal punto più recente **PT_MOVETO** o `MoveTo` punto.  
  
     Questo flag viene combinato con il **PT_LINETO** tipo per una linea o con il **PT_BEZIERTO** tipo di punto finale per una spline di tipo Bzier, utilizzando bit per bit `OR` operatore. La posizione corrente è impostata per il punto finale della riga di chiusura.  
  
 `nCount`  
 Specifica il numero totale di punti di `lpPoints` matrice, come il numero di byte nel `lpTypes` matrice.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione può essere utilizzata per disegnare figure non contigui al posto delle chiamate consecutive per `CDC::MoveTo`, `CDC::LineTo`, e `CDC::PolyBezierTo` funzioni membro. Le linee e spline vengono disegnate utilizzando la penna corrente e le cifre non sono state compilate. Se esiste un percorso attivo avviato chiamando il `CDC::BeginPath` funzione membro, `PolyDraw` aggiunge al percorso. I punti contenuti nel `lpPoints` matrice e in `lpTypes` indicano se ogni punto fa parte di un `CDC::MoveTo`, `CDC::LineTo`, o un **CDC::BezierTo** operazione. È anche possibile chiudere le cifre. Questa funzione Aggiorna la posizione corrente.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CDC:: BeginPath](#beginpath).  
  
##  <a name="a-namepolygona--cdcpolygon"></a><a name="polygon"></a>CDC::Polygon  
 Disegna un poligono composta da due o più punti (vertici) uniti da linee, utilizzando la penna corrente.  
  
```  
BOOL Polygon(
    LPPOINT lpPoints,  
    int nCount);
```  
  
### <a name="parameters"></a>Parametri  
 `lpPoints`  
 Punta a una matrice di punti che specifica i vertici del poligono. Ogni punto della matrice è un **punto** struttura o un `CPoint` oggetto.  
  
 `nCount`  
 Specifica il numero di vertici nella matrice.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Il sistema si chiude il poligono automaticamente, se necessario, tracciando una linea tra il vertice ultima alla prima.  
  
 La modalità di riempimento del poligono corrente può essere recuperata o impostata utilizzando il `GetPolyFillMode` e `SetPolyFillMode` funzioni membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#38;](../../mfc/codesnippet/cpp/cdc-class_10.cpp)]  
  
##  <a name="a-namepolylinea--cdcpolyline"></a><a name="polyline"></a>CDC::Polyline  
 Disegna una serie di segmenti lineari che connettono i punti specificati dalle `lpPoints`.  
  
```  
BOOL Polyline(
    LPPOINT lpPoints,  
    int nCount);
```  
  
### <a name="parameters"></a>Parametri  
 `lpPoints`  
 Punta a una matrice di **punto** strutture o `CPoint` gli oggetti da collegare.  
  
 `nCount`  
 Specifica il numero di punti nella matrice. Questo valore deve essere almeno pari a 2.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Le righe vengono recuperate dal primo punto tramite i successivi punti utilizzando la penna corrente. A differenza di `LineTo` funzione membro, il `Polyline` funzione non utilizza né aggiorna la posizione corrente.  
  
 Per ulteriori informazioni, vedere [polilinea](http://msdn.microsoft.com/library/windows/desktop/dd162815) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namepolylinetoa--cdcpolylineto"></a><a name="polylineto"></a>CDC::PolylineTo  
 Disegna una o più linee rette.  
  
```  
BOOL PolylineTo(
    const POINT* lpPoints,  
    int nCount);
```  
  
### <a name="parameters"></a>Parametri  
 `lpPoints`  
 Punta a una matrice di [punto](../../mfc/reference/point-structure1.md) strutture di dati che contiene i vertici della riga.  
  
 `nCount`  
 Specifica il numero di punti nella matrice.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Viene tracciata una linea dalla posizione corrente al primo punto specificato dal `lpPoints` parametro mediante la penna corrente. Per ogni riga aggiuntiva, la funzione Disegna dal punto di fine della riga precedente al successivo punto specificato da `lpPoints`. `PolylineTo`Sposta la posizione corrente per il punto finale dell'ultima riga. Se i segmenti di linea tracciati da questa funzione formano una figura chiusa, la figura non viene riempita.  
  
##  <a name="a-namepolypolygona--cdcpolypolygon"></a><a name="polypolygon"></a>CDC::PolyPolygon  
 Crea due o più poligoni che vengono compilati utilizzando la modalità di riempimento del poligono.  
  
```  
BOOL PolyPolygon(
    LPPOINT lpPoints,  
    LPINT lpPolyCounts,  
    int nCount);
```  
  
### <a name="parameters"></a>Parametri  
 `lpPoints`  
 Punta a una matrice di **punto** strutture o `CPoint` gli oggetti che definiscono i vertici dei poligoni.  
  
 `lpPolyCounts`  
 Punta a una matrice di interi, ognuno dei quali specifica il numero di punti in uno dei poligoni nel `lpPoints` matrice.  
  
 `nCount`  
 Il numero di voci di `lpPolyCounts` matrice. Questo numero specifica il numero di poligoni da disegnare. Questo valore deve essere almeno pari a 2.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 I poligoni possono essere sovrapposti o non contigui.  
  
 Ogni poligono specificato in una chiamata per il `PolyPolygon` funzione deve essere chiuso. A differenza dei poligoni creati il **poligono** funzione membro, i poligoni creati da `PolyPolygon` non vengono chiusi automaticamente.  
  
 La funzione crea due o più poligoni. Per creare un singolo poligono, un'applicazione deve usare il **poligono** funzione membro.  
  
 La modalità di riempimento del poligono corrente può essere recuperata o impostata utilizzando il `GetPolyFillMode` e `SetPolyFillMode` funzioni membro.  
  
##  <a name="a-namepolypolylinea--cdcpolypolyline"></a><a name="polypolyline"></a>CDC::PolyPolyline  
 Consente di disegnare più serie di segmenti di linea collegati.  
  
```  
BOOL PolyPolyline(
    const POINT* lpPoints,  
    const DWORD* lpPolyPoints,  
    int nCount);
```  
  
### <a name="parameters"></a>Parametri  
 `lpPoints`  
 Punta a una matrice di strutture che contiene i vertici delle polilinee. Le polilinee vengono specificate consecutivamente.  
  
 `lpPolyPoints`  
 Punta a una matrice di variabili specificando il numero di punti di `lpPoints` matrice per il poligono corrispondente. Ogni voce deve essere maggiore o uguale a 2.  
  
 `nCount`  
 Specifica il numero totale dei conteggi nel `lpPolyPoints` matrice.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 I segmenti di linea vengono disegnati con la penna corrente. Le figure formate dai segmenti non sono state compilate. La posizione corrente non viene utilizzata né aggiornata da questa funzione.  
  
##  <a name="a-nameptvisiblea--cdcptvisible"></a><a name="ptvisible"></a>CDC::PtVisible  
 Determina se il punto specificato si trova all'interno dell'area di ritaglio del contesto del dispositivo.  
  
```  
virtual BOOL PtVisible(
    int x,  
    int y) const;  
  
BOOL PtVisible(POINT point) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica la coordinata x logica del punto.  
  
 *y*  
 Specifica la coordinata y logica del punto.  
  
 `point`  
 Specifica il punto di controllo nelle coordinate logiche. È possibile passare un **punto** struttura o un `CPoint` oggetto per questo parametro.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il punto specificato si trova all'interno dell'area di visualizzazione; in caso contrario 0.  
  
##  <a name="a-namequeryaborta--cdcqueryabort"></a><a name="queryabort"></a>CDC::QueryAbort  
 Chiama la funzione di interruzione installata per il [SetAbortProc](#setabortproc) funzione membro per un'applicazione di stampa e query se la stampa deve essere terminata.  
  
```  
BOOL QueryAbort() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito è diverso da zero se la stampa deve continuare o se è presente alcuna procedura di interruzione. È 0 se il processo di stampa deve essere terminato. Viene fornito il valore restituito dalla funzione di interruzione.  
  
##  <a name="a-namerealizepalettea--cdcrealizepalette"></a><a name="realizepalette"></a>CDC::RealizePalette  
 Esegue il mapping di voci della tavolozza logico corrente per la tavolozza di sistema.  
  
```  
UINT RealizePalette();
```  
  
### <a name="return-value"></a>Valore restituito  
 Indica il numero di voci della tavolozza logica sono stato assegnato alle diverse voci nella tavolozza di sistema. Rappresenta il numero di voci di modificare il mapping di questa funzione per adattarsi ai cambiamenti nella tavolozza di sistema poiché l'ultima è stata realizzata la tavolozza logica.  
  
### <a name="remarks"></a>Note  
 Una tavolozza dei colori logico funge da buffer tra le applicazioni a elevato utilizzo di colore e il sistema, permettendo a un'applicazione da utilizzare come numero di colori in base alle esigenze senza interferire con il proprio visualizzato colori o con i colori visualizzati da altre finestre.  
  
 Quando una finestra dispone di stato attivo di input e chiama `RealizePalette`, Windows garantisce che tutti i colori richiesti, fino al numero massimo disponibile contemporaneamente sullo schermo verrà visualizzata la finestra. Windows vengono inoltre visualizzati i colori non trovati nel riquadro della finestra per corrispondenza con i colori disponibili.  
  
 Inoltre, Windows corrisponda ai colori richiesti da windows inattivi che chiama la funzione più vicino possibile ai colori disponibili. Questo riduce notevolmente modifiche indesiderate nei colori visualizzati nelle finestre non attive.  
  
##  <a name="a-namerectanglea--cdcrectangle"></a><a name="rectangle"></a>CDC::Rectangle  
 Disegna un rettangolo utilizzando la penna corrente.  
  
```  
BOOL Rectangle(
    int x1,  
    int y1,  
    int x2,  
    int y2);  
  
BOOL Rectangle(LPCRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 `x1`  
 Specifica la coordinata x dell'angolo superiore sinistro del rettangolo (in unità logiche).  
  
 `y1`  
 Specifica la coordinata y dell'angolo superiore sinistro del rettangolo (in unità logiche).  
  
 `x2`  
 Specifica la coordinata x dell'angolo inferiore destro del rettangolo (in unità logiche).  
  
 `y2`  
 Specifica la coordinata y dell'angolo inferiore destro del rettangolo (in unità logiche).  
  
 `lpRect`  
 Specifica il rettangolo in unità logiche. È possibile passare un `CRect` oggetto o un puntatore a un `RECT` struttura per questo parametro.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 L'interno del rettangolo viene riempito con il pennello corrente.  
  
 Il rettangolo si estende fino a, ma non include, le coordinate inferiore e destro. Ciò significa che l'altezza del rettangolo è `y2` – `y1` e la larghezza del rettangolo è `x2` – `x1`. Sia la larghezza e l'altezza di un rettangolo deve essere maggiore di 2 unità e minore di 32.767.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#39;](../../mfc/codesnippet/cpp/cdc-class_11.cpp)]  
  
##  <a name="a-namerectvisiblea--cdcrectvisible"></a><a name="rectvisible"></a>CDC::RectVisible  
 Determina se qualsiasi parte del rettangolo specificato si trova all'interno dell'area di ritaglio del contesto di visualizzazione.  
  
```  
virtual BOOL RectVisible(LPCRECT lpRect) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpRect`  
 Punta a un `RECT` struttura o un `CRect` oggetto che contiene le coordinate logiche del rettangolo specificato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se qualsiasi parte del rettangolo specificato si trova all'interno dell'area di visualizzazione; in caso contrario 0.  
  
##  <a name="a-namereleaseattribdca--cdcreleaseattribdc"></a><a name="releaseattribdc"></a>CDC::ReleaseAttribDC  
 Chiamare questa funzione membro per impostare `m_hAttribDC` a **NULL**.  
  
```  
virtual void ReleaseAttribDC();
```  
  
### <a name="remarks"></a>Note  
 Ciò non comporti un **scollegamento** si verifichi. Solo il contesto di dispositivo di output è collegato la `CDC` oggetto e solo può essere scollegato.  
  
##  <a name="a-namereleaseoutputdca--cdcreleaseoutputdc"></a><a name="releaseoutputdc"></a>CDC::ReleaseOutputDC  
 Chiamare questa funzione membro per impostare il `m_hDC` membro **NULL**.  
  
```  
virtual void ReleaseOutputDC();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione membro non può essere chiamata quando il contesto di dispositivo di output è associato ai `CDC` oggetto. Utilizzare il **scollegamento** funzione membro per scollegare il contesto di dispositivo di output.  
  
##  <a name="a-nameresetdca--cdcresetdc"></a><a name="resetdc"></a>CDC::ResetDC  
 Chiamare questa funzione membro per aggiornare il contesto di dispositivo racchiuso il `CDC` oggetto.  
  
```  
BOOL ResetDC(const DEVMODE* lpDevMode);
```  
  
### <a name="parameters"></a>Parametri  
 *lpDevMode*  
 Un puntatore a un Windows `DEVMODE` struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Il contesto di dispositivo viene aggiornato con le informazioni specificate nelle finestre `DEVMODE` struttura. Questa funzione membro ripristina solo il contesto di dispositivo di attributo.  
  
 Un'applicazione in genere utilizza il `ResetDC` funzione membro quando una finestra elabora un `WM_DEVMODECHANGE` messaggio. È inoltre possibile utilizzare questa funzione membro per modificare l'orientamento o bin carta durante la stampa un documento.  
  
 È possibile utilizzare questa funzione membro per modificare il nome del driver, il nome del dispositivo o porta di output. Quando l'utente modifica la connessione alla porta o nome del dispositivo, è necessario eliminare il contesto di dispositivo originale e creare un nuovo contesto di dispositivo con le nuove informazioni.  
  
 Prima di chiamare questa funzione membro, è necessario assicurarsi che tutti gli oggetti selezionati nel contesto di dispositivo (eccetto gli oggetti predefiniti) sono stati selezionati.  
  
##  <a name="a-namerestoredca--cdcrestoredc"></a><a name="restoredc"></a>CDC::RestoreDC  
 Ripristina il contesto di dispositivo allo stato precedente identificato da `nSavedDC`.  
  
```  
virtual BOOL RestoreDC(int nSavedDC);
```  
  
### <a name="parameters"></a>Parametri  
 `nSavedDC`  
 Specifica il contesto di dispositivo da ripristinare. Può essere un valore restituito da una precedente `SaveDC` chiamata di funzione. Se `nSavedDC` è -1, più di recente salvato viene ripristinato il contesto di dispositivo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è stato ripristinato il contesto specificato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 `RestoreDC`Ripristina il contesto di dispositivo visualizzando le informazioni sullo stato uno stack creato dalle chiamate precedenti per il `SaveDC` funzione membro.  
  
 Lo stack può contenere le informazioni sullo stato per diversi contesti di dispositivo. Se il contesto specificato da `nSavedDC` non è presente nella parte superiore dello stack, `RestoreDC` Elimina tutte le informazioni sullo stato tra il contesto di dispositivo specificato dal parametro `nSavedDC` e la parte superiore dello stack. Le informazioni eliminate vengono perse.  
  
##  <a name="a-nameroundrecta--cdcroundrect"></a><a name="roundrect"></a>CDC::RoundRect  
 Disegna un rettangolo con angoli arrotondati utilizzando la penna corrente.  
  
```  
BOOL RoundRect(
    int x1,  
    int y1,  
    int x2,  
    int y2,  
    int x3,  
    int y3);

 
BOOL RoundRect(
    LPCRECT lpRect,
    POINT point);
```  
  
### <a name="parameters"></a>Parametri  
 `x1`  
 Specifica la coordinata x dell'angolo superiore sinistro del rettangolo (in unità logiche).  
  
 `y1`  
 Specifica la coordinata y dell'angolo superiore sinistro del rettangolo (in unità logiche).  
  
 `x2`  
 Specifica la coordinata x dell'angolo inferiore destro del rettangolo (in unità logiche).  
  
 `y2`  
 Specifica la coordinata y dell'angolo inferiore destro del rettangolo (in unità logiche).  
  
 *x3*  
 Specifica la larghezza dell'ellisse utilizzata per disegnare gli angoli arrotondati (in unità logiche).  
  
 `y3`  
 Specifica l'altezza dell'ellisse utilizzata per disegnare gli angoli arrotondati (in unità logiche).  
  
 `lpRect`  
 Specifica il rettangolo di delimitazione nelle unità logiche. È possibile passare un `CRect` oggetto o un puntatore a un `RECT` struttura per questo parametro.  
  
 `point`  
 Coordinata x del `point` specifica la larghezza dell'ellisse per disegnare gli angoli arrotondati (in unità logiche). Coordinata y del `point` specifica l'altezza dell'ellisse per disegnare gli angoli arrotondati (in unità logiche). È possibile passare un **punto** struttura o un `CPoint` oggetto per questo parametro.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 L'interno del rettangolo viene riempito con il pennello corrente.  
  
 Nella figura che disegna questa funzione si estende fino a ma non include le coordinate inferiore e destro. Questo significa che l'altezza della figura `y2` – `y1` e la larghezza della figura `x2` – `x1`. Sia l'altezza e la larghezza del rettangolo di delimitazione deve essere maggiore di 2 unità e minore di 32.767.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#40; NVC_MFCDocView](../../mfc/codesnippet/cpp/cdc-class_12.cpp)]  
  
##  <a name="a-namesavedca--cdcsavedc"></a><a name="savedc"></a>CDC::SaveDC  
 Salva lo stato corrente del contesto del dispositivo tramite la copia di informazioni sullo stato (ad esempio l'area di visualizzazione, gli oggetti selezionati e modalità di mapping) a uno stack di contesto gestito da Windows.  
  
```  
virtual int SaveDC();
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero intero che identifica il contesto di dispositivo salvato. È 0 se si verifica un errore. Questo restituisce valore può essere utilizzato per ripristinare il contesto di dispositivo chiamando `RestoreDC`.  
  
### <a name="remarks"></a>Note  
 Il contesto di dispositivo salvato in un secondo momento può essere ripristinato utilizzando `RestoreDC`.  
  
 `SaveDC`può essere utilizzato qualsiasi numero di volte per salvare qualsiasi numero di stati di contesto di dispositivo.  
  
##  <a name="a-namescaleviewportexta--cdcscaleviewportext"></a><a name="scaleviewportext"></a>CDC::ScaleViewportExt  
 Modifica gli extent viewport relativi valori correnti.  
  
```  
virtual CSize ScaleViewportExt(
    int xNum,  
    int xDenom,  
    int yNum,  
    int yDenom);
```  
  
### <a name="parameters"></a>Parametri  
 `xNum`  
 Specifica la quantità per cui moltiplicare x-misura corrente.  
  
 `xDenom`  
 Specifica la quantità per cui dividere il risultato moltiplicando l'extent di x corrente per il valore di `xNum` parametro.  
  
 `yNum`  
 Specifica la quantità per cui moltiplicare l'extent di y corrente.  
  
 `yDenom`  
 Specifica la quantità per cui dividere il risultato moltiplicando l'extent di y corrente per il valore di `yNum` parametro.  
  
### <a name="return-value"></a>Valore restituito  
 Gli extent viewport precedente (in unità di dispositivo) come un `CSize` oggetto.  
  
### <a name="remarks"></a>Note  
 Le formule vengono scritti come indicato di seguito:  
  
 `xNewVE = ( xOldVE * xNum ) / xDenom`  
  
 `yNewVE = ( yOldVE * yNum ) / yDenom`  
  
 Il nuovo extent viewport vengono calcolati moltiplicando gli extent correnti per il numeratore specificato e quindi dividendo per il denominatore specificato.  
  
##  <a name="a-namescalewindowexta--cdcscalewindowext"></a><a name="scalewindowext"></a>CDC::ScaleWindowExt  
 Modifica gli extent finestra relativi valori correnti.  
  
```  
virtual CSize ScaleWindowExt(
    int xNum,  
    int xDenom,  
    int yNum,  
    int yDenom);
```  
  
### <a name="parameters"></a>Parametri  
 `xNum`  
 Specifica la quantità per cui moltiplicare x-misura corrente.  
  
 `xDenom`  
 Specifica la quantità per cui dividere il risultato moltiplicando l'extent di x corrente per il valore di `xNum` parametro.  
  
 `yNum`  
 Specifica la quantità per cui moltiplicare l'extent di y corrente.  
  
 `yDenom`  
 Specifica la quantità per cui dividere il risultato moltiplicando l'extent di y corrente per il valore di `yNum` parametro.  
  
### <a name="return-value"></a>Valore restituito  
 Gli extent finestra precedente (in unità logiche) come un `CSize` oggetto.  
  
### <a name="remarks"></a>Note  
 Le formule vengono scritti come indicato di seguito:  
  
 `xNewWE = ( xOldWE * xNum ) / xDenom`  
  
 `yNewWE = ( yOldWE * yNum ) / yDenom`  
  
 Il nuovo extent finestra vengono calcolati moltiplicando gli extent correnti per il numeratore specificato e quindi dividendo per il denominatore specificato.  
  
##  <a name="a-namescrolldca--cdcscrolldc"></a><a name="scrolldc"></a>CDC::ScrollDC  
 Scorre un rettangolo di bit orizzontalmente e verticalmente.  
  
```  
BOOL ScrollDC(
    int dx,  
    int dy,  
    LPCRECT lpRectScroll,  
    LPCRECT lpRectClip,  
    CRgn* pRgnUpdate,  
    LPRECT lpRectUpdate);
```  
  
### <a name="parameters"></a>Parametri  
 `dx`  
 Specifica il numero di unità di scorrimento orizzontale.  
  
 *dy*  
 Specifica il numero di unità di scorrimento verticale.  
  
 `lpRectScroll`  
 Indichi il `RECT` struttura o `CRect` oggetto che contiene le coordinate del rettangolo di scorrimento.  
  
 `lpRectClip`  
 Indichi il `RECT` struttura o `CRect` oggetto che contiene le coordinate del rettangolo di ritaglio. Quando questo rettangolo è inferiore rispetto all'originale uno a cui puntava `lpRectScroll`, lo scorrimento si verifica solo nel rettangolo più piccolo.  
  
 `pRgnUpdate`  
 Identifica l'area non rilevato dal processo di scorrimento. Il `ScrollDC` funzione definisce l'area; non è necessariamente un rettangolo.  
  
 `lpRectUpdate`  
 Punta al `RECT` struttura o `CRect` oggetto che riceve le coordinate del rettangolo che delimita l'area di aggiornamento di scorrimento. Questa è l'area rettangolare più grande che richiede l'aggiornamento. I valori nella struttura o nell'oggetto quando la funzione restituisce sono nelle coordinate client, indipendentemente dalla modalità di mapping per il contesto di dispositivo specificato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se viene eseguito lo scorrimento. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se `lpRectUpdate` è **NULL**, Windows non calcola il rettangolo di aggiornamento. Se entrambi `pRgnUpdate` e `lpRectUpdate` sono **NULL**, Windows non viene calcolata la regione di aggiornamento. Se `pRgnUpdate` non **NULL**, Windows presuppone che contiene un puntatore valido per l'area non rilevato dal processo di scorrimento (definito dal `ScrollDC` funzione membro). Area di aggiornamento restituita `lpRectUpdate` può essere passato a `CWnd::InvalidateRgn` se necessario.  
  
 Un'applicazione deve usare il `ScrollWindow` funzione membro di classe `CWnd` quando è necessario scorrere l'intera area client di una finestra. In caso contrario, è necessario utilizzare `ScrollDC`.  
  
##  <a name="a-nameselectclippatha--cdcselectclippath"></a><a name="selectclippath"></a>CDC::SelectClipPath  
 Seleziona il percorso corrente come un'area di visualizzazione per il contesto di dispositivo, combinando la nuova area con un'area di ritaglio esistente utilizzando la modalità specificata.  
  
```  
BOOL SelectClipPath(int nMode);
```  
  
### <a name="parameters"></a>Parametri  
 `nMode`  
 Specifica la modalità di utilizzo del percorso. Sono consentiti i valori seguenti:  
  
- **RGN_AND** la nuova area di ritaglio include l'intersezione (aree sovrapposte) tra l'area di ritaglio corrente e il percorso corrente.  
  
- **RGN_COPY** la nuova area di ritaglio è il percorso corrente.  
  
- **RGN_DIFF** la nuova area di ritaglio include le aree dell'area di ritaglio corrente e quelli del percorso corrente vengono esclusi.  
  
- **RGN_OR** la nuova area di ritaglio include l'unione (combinate aree) dell'area di ritaglio corrente e il percorso corrente.  
  
- **RGN_XOR** la nuova area di ritaglio include l'unione dell'area di ritaglio corrente e il percorso corrente, ma senza le aree sovrapposte.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Il contesto di dispositivo identificato deve contenere un tracciato chiuso.  
  
##  <a name="a-nameselectcliprgna--cdcselectcliprgn"></a><a name="selectcliprgn"></a>CDC::SelectClipRgn  
 Selezionare l'area specificata come area di ritaglio corrente per il contesto di dispositivo.  
  
```  
int SelectClipRgn(CRgn* pRgn);

 
int SelectClipRgn(
    CRgn* pRgn,  
    int nMode);
```  
  
### <a name="parameters"></a>Parametri  
 `pRgn`  
 Identifica l'area da selezionare.  
  
-   Per la prima versione di questa funzione, se questo valore è **NULL**, l'intera area client è selezionata e viene comunque ritagliato output.  
  
-   Per la seconda versione di questa funzione, l'handle può essere **NULL** solo quando il **RGN_COPY** modalità è specificata.  
  
 `nMode`  
 Specifica l'operazione da eseguire. Deve essere uno dei valori seguenti:  
  
- **RGN_AND** la nuova area di ritaglio combina le aree sovrapposte tra l'area di ritaglio corrente e area identificata dal `pRgn`.  
  
- **RGN_COPY** la nuova area di ritaglio è una copia dell'area identificata dal `pRgn`. Si tratta di funzionalità è identica alla prima versione di `SelectClipRgn`. Se l'area identificato da `pRgn` è **NULL**, la nuova area di ritaglio diventa l'area di visualizzazione predefinito (area null).  
  
- **RGN_DIFF** la nuova area di ritaglio combina le aree dell'area di ritaglio corrente con quelle aree escluse dall'area identificata dal `pRgn`.  
  
- **RGN_OR** la nuova area di ritaglio combina l'area di ritaglio corrente e area identificata dal `pRgn`.  
  
- **RGN_XOR** la nuova area di ritaglio combina l'area di ritaglio corrente e area identificata dal `pRgn` ma esclude le aree sovrapposte.  
  
### <a name="return-value"></a>Valore restituito  
 Tipo della regione. Può essere uno dei valori seguenti:  
  
- **COMPLEXREGION** nuova area di ritaglio è sovrapposti i bordi.  
  
- **ERRORE** contesto di dispositivo o l'area non è valido.  
  
- **NULLREGION** nuova area di ritaglio è vuoto.  
  
- **SIMPLEREGION** nuova area di visualizzazione non dispone di alcun bordi sovrapposti.  
  
### <a name="remarks"></a>Note  
 Viene utilizzata solo una copia della regione selezionata. L'area stesso può essere selezionata per un numero qualsiasi di altri contesti di dispositivo, o può essere eliminato.  
  
 La funzione si presuppone che le coordinate per l'area specificata sono specificate in unità di dispositivo. Alcuni dispositivi stampante supportano l'output di testo una risoluzione maggiore rispetto a output grafico per mantenere la precisione necessaria per esprimere le metriche di testo. Questi dispositivi report, ovvero unità dispositivo con risoluzione superiore, in unità di testo. Questi dispositivi quindi scalare coordinate per la grafica in modo che diverse segnalate dispositivo unità mappa solo 1 unità grafici. È necessario chiamare sempre il `SelectClipRgn` con unità di testo.  
  
 Le applicazioni che è necessario eseguire il ridimensionamento di oggetti grafici in GDI possono utilizzare il **GETSCALINGFACTOR** escape della stampante per determinare il fattore di scala. Questo fattore di scala influisce sul ridimensionamento. Se viene utilizzata un'area per ritagliare grafica, GDI divide le coordinate per il fattore di scala. Se l'area viene utilizzato per ridimensionare il testo, GDI non rende regolazione alcun ridimensionamento. Un fattore di scala pari a 1 determina le coordinate di essere diviso per 2. un fattore di scala di 2 fa sì che le coordinate di essere diviso per 4; E così via.  
  
##  <a name="a-nameselectobjecta--cdcselectobject"></a><a name="selectobject"></a>CDC::SelectObject  
 Seleziona un oggetto nel contesto di dispositivo.  
  
```  
CPen* SelectObject(CPen* pPen);  
CBrush* SelectObject(CBrush* pBrush);  
virtual CFont* SelectObject(CFont* pFont);  
CBitmap* SelectObject(CBitmap* pBitmap);  
int SelectObject(CRgn* pRgn);  
CGdiObject* SelectObject(CGdiObject* pObject);
```  
  
### <a name="parameters"></a>Parametri  
 *pPen*  
 Un puntatore a un [CPen](../../mfc/reference/cpen-class.md) oggetto da selezionare.  
  
 `pBrush`  
 Un puntatore a un [CBrush](../../mfc/reference/cbrush-class.md) oggetto da selezionare.  
  
 `pFont`  
 Un puntatore a un [CFont](../../mfc/reference/cfont-class.md) oggetto da selezionare.  
  
 `pBitmap`  
 Un puntatore a un [CBitmap](../../mfc/reference/cbitmap-class.md) oggetto da selezionare.  
  
 `pRgn`  
 Un puntatore a un [CRgn](../../mfc/reference/crgn-class.md) oggetto da selezionare.  
  
 `pObject`  
 Un puntatore a un [CGdiObject](../../mfc/reference/cgdiobject-class.md) oggetto da selezionare.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'oggetto da sostituire. Questo è un puntatore a un oggetto di una delle classi derivate da `CGdiObject`, ad esempio `CPen`, a seconda di quale versione della funzione viene utilizzata. Il valore restituito è **NULL** se si verifica un errore. Questa funzione può restituire un puntatore a un oggetto temporaneo. Questo oggetto temporaneo è valido solo durante l'elaborazione di un messaggio di Windows. Per altre informazioni, vedere `CGdiObject::FromHandle`.  
  
 La versione della funzione membro che accetta un parametro di area esegue la stessa attività come la `SelectClipRgn` funzione membro. Il valore restituito può essere uno dei seguenti:  
  
- **COMPLEXREGION** nuova area di ritaglio è sovrapposti i bordi.  
  
- **ERRORE** contesto di dispositivo o l'area non è valido.  
  
- **NULLREGION** nuova area di ritaglio è vuoto.  
  
- **SIMPLEREGION** nuova area di visualizzazione non dispone di alcun bordi sovrapposti.  
  
### <a name="remarks"></a>Note  
 Classe `CDC` sono disponibili cinque versioni particolari per particolari tipi di oggetti GDI, tra cui penne, pennelli, tipi di carattere, bitmap e aree. L'oggetto appena selezionato sostituisce l'oggetto precedente dello stesso tipo. Ad esempio, se `pObject` della versione generale di `SelectObject` punta a un [CPen](../../mfc/reference/cpen-class.md) dell'oggetto, la funzione sostituisce la penna corrente con la penna specificata da `pObject`.  
  
 Un'applicazione può selezionare una bitmap in contesti di dispositivo di memoria solo e nel contesto di dispositivo di memoria solo una alla volta. Il formato della bitmap deve essere monocromatica o compatibile con il contesto di dispositivo. in caso contrario, `SelectObject` restituisce un errore.  
  
 Per Windows 3.1 e versioni successive, il `SelectObject` funzione restituisce lo stesso valore se viene utilizzato in un metafile o non. Nelle versioni precedenti di Windows, `SelectObject` ha restituito un valore diverso da zero per il successo e 0 per esito negativo quando è stato utilizzato in un metafile.  
  
##  <a name="a-nameselectpalettea--cdcselectpalette"></a><a name="selectpalette"></a>CDC::SelectPalette  
 Seleziona la tavolozza logica specificato da `pPalette` dell'oggetto selezionato tavolozza del contesto del dispositivo.  
  
```  
CPalette* SelectPalette(
    CPalette* pPalette,  
    BOOL bForceBackground);
```  
  
### <a name="parameters"></a>Parametri  
 `pPalette`  
 Identifica la tavolozza logica da selezionare. Tavolozza sia già stata creata con il `CPalette` funzione membro [CreatePalette](../../mfc/reference/cpalette-class.md#createpalette).  
  
 `bForceBackground`  
 Specifica se la tavolozza logica viene forzata a essere una tavolozza di sfondo. Se `bForceBackground` è diverso da zero, la tavolozza selezionata è sempre una tavolozza di sfondo, indipendentemente dal fatto che la finestra ha lo stato attivo. Se `bForceBackground` è 0 e il contesto di dispositivo è collegato a una finestra, la tavolozza logica è presente una tavolozza di primo piano quando la finestra ha lo stato attivo.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CPalette` oggetto che identifica la tavolozza logica sostituita dalla tavolozza specificata da `pPalette`. È **NULL** se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 La nuova tavolozza diventa l'oggetto tavolozza utilizzata da GDI per controllo i colori visualizzati nel contesto di dispositivo e sostituisce quella precedente.  
  
 Un'applicazione è possibile selezionare una tavolozza logica in più di un contesto di dispositivo. Tuttavia, le modifiche apportate a una tavolozza logica influirà su tutti i contesti di dispositivo per cui è selezionata. Se un'applicazione consente di selezionare una tavolozza in più di un contesto di dispositivo, tutti i contesti di dispositivo devono appartenere allo stesso dispositivo fisico.  
  
##  <a name="a-nameselectstockobjecta--cdcselectstockobject"></a><a name="selectstockobject"></a>CDC::SelectStockObject  
 Seleziona un [CGdiObject](../../mfc/reference/cgdiobject-class.md) oggetto che corrisponde a uno dei predefiniti azionarie penne, pennelli o tipi di carattere.  
  
```  
virtual CGdiObject* SelectStockObject(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Specifica il tipo di oggetto predefinito desiderato. Può essere uno dei valori seguenti:  
  
- **BLACK_BRUSH** nero pennello.  
  
- **DKGRAY_BRUSH** pennello grigio scuro.  
  
- **GRAY_BRUSH** pennello grigio.  
  
- **HOLLOW_BRUSH** rendere cavo pennello.  
  
- **LTGRAY_BRUSH** pennello grigio chiaro.  
  
- **NULL_BRUSH** Null pennello.  
  
- **WHITE_BRUSH** pennello bianco.  
  
- **BLACK_PEN** penna di colore nero.  
  
- **NULL_PEN** penna Null.  
  
- **WHITE_PEN** bianco della penna.  
  
- **ANSI_FIXED_FONT** carattere di sistema predefinito ANSI.  
  
- **ANSI_VAR_FONT** carattere di sistema variabile ANSI.  
  
- **DEVICE_DEFAULT_FONT** caratteri dipendente dalla periferica.  
  
- **OEM_FIXED_FONT** OEM dipendente dal tipo di carattere fissato.  
  
- **SYSTEM_FONT** il carattere di sistema. Per impostazione predefinita, Windows utilizza il carattere di sistema per disegnare i menu, controlli finestra di dialogo e altro testo. È consigliabile, tuttavia, non si basano su SYSTEM_FONT per ottenere il carattere usato dalle finestre di dialogo e. Utilizzare invece il `SystemParametersInfo` funzione con il parametro SPI_GETNONCLIENTMETRICS per recuperare il tipo di carattere corrente. `SystemParametersInfo`prende in considerazione il tema corrente e vengono fornite informazioni di carattere per le didascalie, menu e finestre di messaggio.  
  
- **SYSTEM_FIXED_FONT** il tipo di carattere a larghezza fissa sistema utilizzato in Windows prima della versione 3.0. Questo oggetto è disponibile per compatibilità con le versioni precedenti di Windows.  
  
- **DEFAULT_PALETTE** tavolozza di colori predefinita. Questo riquadro è costituito da 20 statici colori nella tavolozza di sistema.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il `CGdiObject` oggetto che è stato sostituito se la funzione ha esito positivo. L'oggetto effettivo a cui puntata è un [CPen](../../mfc/reference/cpen-class.md), [CBrush](../../mfc/reference/cbrush-class.md), o [CFont](../../mfc/reference/cfont-class.md) oggetto. Se la chiamata ha esito negativo, il valore restituito è **NULL**.  
  
##  <a name="a-namesetabortproca--cdcsetabortproc"></a><a name="setabortproc"></a>CDC:: SETABORTPROC  
 Installa la procedura di interruzione per il processo di stampa.  
  
```  
int SetAbortProc(BOOL (CALLBACK* lpfn)(HDC, int));
```  
  
### <a name="parameters"></a>Parametri  
 `lpfn`  
 Un puntatore alla funzione di interruzione per l'installazione della procedura di interruzione. Per ulteriori informazioni sulla funzione di callback, vedere [funzione di Callback per CDC:: SetAbortProc](../../mfc/reference/callback-function-for-cdc-setabortproc.md).  
  
### <a name="return-value"></a>Valore restituito  
 Specifica il risultato del `SetAbortProc` (funzione). Alcuni dei valori seguenti sono più probabile rispetto ad altri, ma tutti sono possibili.  
  
- **SP_ERROR** errore generale.  
  
- **SP_OUTOFDISK** spazio su disco insufficiente è attualmente disponibile per lo spooling e non più spazio diventerà disponibile.  
  
- **SP_OUTOFMEMORY** memoria insufficiente è disponibile per lo spooling.  
  
- **SP_USERABORT** utente ha terminato il processo tramite il gestore di stampa.  
  
### <a name="remarks"></a>Note  
 Se un'applicazione è il processo di stampa deve essere annullato durante lo spooling, è necessario impostare la funzione di interruzione prima che il processo di stampa viene avviato con il [StartDoc](#startdoc) funzione membro. Gestione stampa chiama la funzione di interruzione durante lo spooling per consentire all'applicazione per annullare il processo di stampa o per elaborare le condizioni di uscita di spazio su disco. Se non è impostata alcuna funzione di interruzione, il processo di stampa avrà esito negativo se non c'è spazio sufficiente per lo spooling.  
  
 Si noti che le funzionalità di Microsoft Visual C++ semplificano la creazione della funzione di callback passata a `SetAbortProc`. L'indirizzo passato il `EnumObjects` funzione membro è un puntatore a una funzione esportata con **dllexport** e con il `__stdcall` la convenzione di chiamata.  
  
 Inoltre non è necessario esportare il nome della funzione in un **esportazioni** istruzione nel file di definizione moduli dell'applicazione. È possibile utilizzare il **ESPORTARE** funzione modificatore, come illustrato nella  
  
 **BOOL CALLBACK esportazione** AFunction ( **HDC**, `int` **);**  
  
 Per fare in modo il compilatore a generare il record di esportazione appropriate per l'esportazione in base al nome senza alias. Questa soluzione per la maggior parte delle esigenze. In alcuni casi speciali, ad esempio l'esportazione di una funzione mediante ordinal o aliasing l'esportazione, è comunque necessario utilizzare un **esportazioni** istruzione in un file di definizione moduli.  
  
 Interfacce di registrazione di callback sono ora indipendenti dai tipi (è necessario passare un puntatore a funzione che punta al tipo appropriato della funzione di callback specifico).  
  
 Si noti inoltre che tutte le funzioni di callback devono intercettare le eccezioni di Microsoft Foundation prima di tornare a Windows, poiché non possono essere generate eccezioni attraverso i limiti di callback. Per ulteriori informazioni sulle eccezioni, vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).  
  
##  <a name="a-namesetarcdirectiona--cdcsetarcdirection"></a><a name="setarcdirection"></a>CDC::SetArcDirection  
 Imposta la direzione di disegno da utilizzare per le funzioni arco e il rettangolo.  
  
```  
int SetArcDirection(int nArcDirection);
```  
  
### <a name="parameters"></a>Parametri  
 *nArcDirection*  
 Specifica la nuova direzione dell'arco. Questo parametro può essere uno dei valori seguenti:  
  
- **AD_COUNTERCLOCKWISE** figure disegnate in senso antiorario.  
  
- **AD_CLOCKWISE** figure disegnate in senso orario.  
  
### <a name="return-value"></a>Valore restituito  
 Specifica la direzione arco precedente, se ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La direzione predefinita è in senso antiorario. Il `SetArcDirection` funzione specifica la direzione in cui le seguenti funzioni di disegno:  
  
|Arc|Torta|  
|---------|---------|  
|`ArcTo`|**Rettangolo**|  
|`Chord`|`RoundRect`|  
|**Ellisse**||  
  
##  <a name="a-namesetattribdca--cdcsetattribdc"></a><a name="setattribdc"></a>CDC::SetAttribDC  
 Chiamare questa funzione per impostare il contesto di dispositivo, attributo `m_hAttribDC`.  
  
```  
virtual void SetAttribDC(HDC hDC);
```  
  
### <a name="parameters"></a>Parametri  
 `hDC`  
 Un contesto di dispositivo Windows.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro non viene associato il contesto di dispositivo per il `CDC` oggetto. Solo il contesto di dispositivo di output è collegato a un `CDC` oggetto.  
  
##  <a name="a-namesetbkcolora--cdcsetbkcolor"></a><a name="setbkcolor"></a>CDC::SetBkColor  
 Imposta il colore di sfondo corrente per il colore specificato.  
  
```  
virtual COLORREF SetBkColor(COLORREF crColor);
```  
  
### <a name="parameters"></a>Parametri  
 `crColor`  
 Specifica il nuovo colore di sfondo.  
  
### <a name="return-value"></a>Valore restituito  
 Il colore di sfondo precedente come un valore di colore RGB. Se si verifica un errore, il valore restituito è 0x80000000.  
  
### <a name="remarks"></a>Note  
 Se la modalità in background è **OPACO**, il sistema utilizza il colore di sfondo per riempire i gap nelle righe con stile, gli spazi vuoti tra righe tratteggiate pennelli e background nelle celle di carattere. Il sistema utilizza anche il colore di sfondo durante la conversione di bitmap tra contesti di dispositivo monocromatico e colore.  
  
 Se il dispositivo non può visualizzare il colore specificato, il sistema imposta il colore di sfondo sul colore fisico più vicino.  
  
##  <a name="a-namesetbkmodea--cdcsetbkmode"></a><a name="setbkmode"></a>CDC::SetBkMode  
 Imposta la modalità in background.  
  
```  
int SetBkMode(int nBkMode);
```  
  
### <a name="parameters"></a>Parametri  
 *nBkMode*  
 Specifica la modalità da impostare. Questo parametro può essere uno dei valori seguenti:  
  
- **OPACO** Background viene riempita con il colore di sfondo corrente prima del testo, riempimento tratteggiato, o penna disegnata. Si tratta della modalità di sfondo predefinito.  
  
- **TRASPARENTE** Background non viene modificato prima del disegno.  
  
### <a name="return-value"></a>Valore restituito  
 La modalità in background.  
  
### <a name="remarks"></a>Note  
 La modalità in background definisce se il sistema rimuove i colori di sfondo esistente nell'area di disegno prima della creazione di testo, pennelli tratteggiati o qualsiasi stile della penna che non è una linea continua.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CWnd::OnCtlColor](../../mfc/reference/cwnd-class.md#onctlcolor).  
  
##  <a name="a-namesetboundsrecta--cdcsetboundsrect"></a><a name="setboundsrect"></a>CDC::SetBoundsRect  
 Controlla l'accumulo di informazioni rettangolo di delimitazione per il contesto di dispositivo specificato.  
  
```  
UINT SetBoundsRect(
    LPCRECT lpRectBounds,  
    UINT flags);
```  
  
### <a name="parameters"></a>Parametri  
 `lpRectBounds`  
 Punta a un `RECT` struttura o `CRect` oggetto utilizzato per impostare il rettangolo di delimitazione. Le dimensioni rettangolo sono indicate nelle coordinate logiche. Questo parametro può essere **NULL**.  
  
 `flags`  
 Specifica come il nuovo rettangolo verrà combinato con il rettangolo accumulato. Questo parametro può essere una combinazione dei valori seguenti:  
  
- **DCB_ACCUMULATE** aggiungere il rettangolo specificato da `lpRectBounds` al rettangolo di delimitazione (mediante un'operazione di unione rettangolo).  
  
- **DCB_DISABLE** disattivare accumulo di limiti.  
  
- **DCB_ENABLE** accendere accumulo di limiti. (L'impostazione predefinita per l'accumulo di limiti è disabilitato).  
  
### <a name="return-value"></a>Valore restituito  
 Lo stato corrente del rettangolo di delimitazione, se la funzione ha esito positivo. Ad esempio `flags`, il valore restituito può essere una combinazione di **DCB_** valori:  
  
- **DCB_ACCUMULATE** il rettangolo di delimitazione non è vuoto. Questo valore verrà sempre impostato.  
  
- **DCB_DISABLE** accumulo di limiti è disattivata.  
  
- **DCB_ENABLE** è accumulo di limiti.  
  
### <a name="remarks"></a>Note  
 Windows consente di mantenere un rettangolo di delimitazione per tutte le operazioni di disegno. Questo rettangolo può essere eseguita una query e reimpostare dall'applicazione. I limiti di disegno sono utili per invalidare la cache bitmap.  
  
##  <a name="a-namesetbrushorga--cdcsetbrushorg"></a><a name="setbrushorg"></a>CDC::SetBrushOrg  
 Specifica l'origine che GDI assegnerà il pennello successivo che consente di selezionare l'applicazione nel contesto di dispositivo.  
  
```  
CPoint SetBrushOrg(
    int x,  
    int y);  
  
CPoint SetBrushOrg(POINT point);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica la coordinata x (in unità di dispositivo) della nuova origine. Questo valore deve essere compreso nell'intervallo 0-7.  
  
 *y*  
 Specifica la coordinata y (in unità di dispositivo) della nuova origine. Questo valore deve essere compreso nell'intervallo 0-7.  
  
 `point`  
 Specifica le coordinate x e y della nuova origine. Ogni valore deve essere compreso nell'intervallo 0-7. È possibile passare un **punto** struttura o un `CPoint` oggetto per questo parametro.  
  
### <a name="return-value"></a>Valore restituito  
 L'origine precedente il pennello in unità di dispositivo.  
  
### <a name="remarks"></a>Note  
 Il valore predefinito di coordinate di origine pennello sono (0, 0). Per modificare l'origine di un pennello, chiamare il `UnrealizeObject` funzione per il `CBrush` dell'oggetto, chiamare `SetBrushOrg`e quindi chiamare il `SelectObject` funzione membro per selezionare il pennello nel contesto di dispositivo.  
  
 Non utilizzare `SetBrushOrg` con scorte `CBrush` oggetti.  
  
##  <a name="a-namesetcoloradjustmenta--cdcsetcoloradjustment"></a><a name="setcoloradjustment"></a>CDC::SetColorAdjustment  
 Imposta i valori di regolazione del colore per il contesto di dispositivo utilizzando i valori specificati.  
  
```  
BOOL SetColorAdjustment(const COLORADJUSTMENT* lpColorAdjust);
```  
  
### <a name="parameters"></a>Parametri  
 `lpColorAdjust`  
 Punta a un [COLORADJUSTMENT](../../mfc/reference/coloradjustment-structure.md) struttura dati che contiene i valori di regolazione del colore.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 I valori di regolazione del colore vengono utilizzati per regolare il colore della bitmap di origine per le chiamate all'input di `CDC::StretchBlt` funzione membro quando **dei mezzitoni** mode è impostato.  
  
##  <a name="a-namesetdcbrushcolora--cdcsetdcbrushcolor"></a><a name="setdcbrushcolor"></a>CDC::SetDCBrushColor  
 Imposta il colore corrente del pennello contesto (DC) di dispositivo per il valore di colore specificato.  
  
```  
COLORREF SetDCBrushColor(COLORREF crColor);
```  
  
### <a name="parameters"></a>Parametri  
 `crColor`  
 Specifica il nuovo colore del pennello.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito specifica il colore del pennello precedente controller di dominio come un `COLORREF` valore.  
  
 In caso contrario, il valore restituito è `CLR_INVALID`.  
  
### <a name="remarks"></a>Note  
 Questo metodo emula la funzionalità della funzione [SetDCBrushColor](http://msdn.microsoft.com/library/windows/desktop/dd162969), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namesetdcpencolora--cdcsetdcpencolor"></a><a name="setdcpencolor"></a>CDC::SetDCPenColor  
 Imposta il colore corrente della penna contesto (DC) dispositivo per il valore di colore specificato.  
  
```  
COLORREF SetDCPenColor(COLORREF crColor);
```  
  
### <a name="parameters"></a>Parametri  
 `crColor`  
 Specifica il nuovo colore della penna.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro utilizza la funzione Win32 [SetDCPenColor](http://msdn.microsoft.com/library/windows/desktop/dd162970), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namesetgraphicsmodea--cdcsetgraphicsmode"></a><a name="setgraphicsmode"></a>CDC::SetGraphicsMode  
 Imposta la modalità grafica per il contesto di dispositivo specificato.  
  
```  
int SetGraphicsMode(int iMode);
```  
  
### <a name="parameters"></a>Parametri  
 `iMode`  
 Specifica la modalità grafica. Per un elenco dei valori che può richiedere questo parametro, vedere [SetGraphicsMode](http://msdn.microsoft.com/library/windows/desktop/dd162977).  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la modalità grafica precedente in caso di riuscita.  
  
 Restituisce 0 in caso di errore. Per ottenere ulteriori informazioni sull'errore, chiamare [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360).  
  
### <a name="remarks"></a>Note  
 Questo metodo include la funzione GDI Windows [SetGraphicsMode](http://msdn.microsoft.com/library/windows/desktop/dd162977).  
  
##  <a name="a-namesetlayouta--cdcsetlayout"></a><a name="setlayout"></a>CDC::setLayout  
 Chiamare questa funzione membro per modificare il layout del testo e grafica per un contesto di dispositivo a destra a sinistra, del layout standard per lingue quali arabo ed ebraico.  
  
```  
DWORD SetLayout(DWORD dwLayout);
```  
  
### <a name="parameters"></a>Parametri  
 `dwLayout`  
 Flag di controllo di layout del contesto di dispositivo e bitmap. Può essere una combinazione dei valori seguenti.  
  
|Valore|Significato|  
|-----------|-------------|  
|BIT LAYOUT_BITMAPORIENTATIONPRESERVED|Disabilita qualsiasi reflection per le chiamate a [CDC::BitBlt](#bitblt) e [CDC::StretchBlt](#stretchblt).|  
|LAYOUT_RTL|Imposta il layout orizzontale predefinito da destra a sinistra.|  
|LAYOUT_LTR|Imposta il layout predefinito per essere da sinistra a destra.|  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, il layout precedente del contesto del dispositivo.  
  
 In caso contrario, **GDI_ERROR**. Per ottenere ulteriori informazioni sull'errore, chiamare [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360).  
  
### <a name="remarks"></a>Note  
 In genere, la chiamata non **SetLayout** per una finestra. Piuttosto, puoi controllare il layout da destra a sinistra in una finestra impostando il [stili finestra estesi](../../mfc/reference/extended-window-styles.md) , ad esempio **WS_EX_RTLREADING**. Un contesto di dispositivo, ad esempio una stampante o un metafile non eredita questo layout. L'unico modo per impostare il contesto di dispositivo per un layout da destra a sinistra è chiamando **SetLayout**.  
  
 Se si chiama **SetLayout (LAYOUT_RTL** ), **SetLayout** modifica automaticamente la modalità di mapping per `MM_ISOTROPIC`. Di conseguenza, una chiamata successiva a [GetMapMode](#getmapmode) restituirà **MM_ISOTROPIC** anziché `MM_TEXT`.  
  
 In alcuni casi, ad esempio con molti bitmap, è possibile applicare mantenere il layout da sinistra a destra. In questi casi, il rendering dell'immagine chiamando `BitBlt` o `StretchBlt`, quindi impostare il flag di controllo di bitmap per `dwLayout` a **bit LAYOUT_BITMAPORIENTATIONPRESERVED**.  
  
 Dopo aver modificato il layout con il **LAYOUT_RTL** flag, flag che specificano in genere a destra o sinistra sono invertiti. Per evitare confusione, è consigliabile definire nomi alternativi per i flag standard. Per un elenco di nomi di flag alternative suggerite, vedere [SetLayout](http://msdn.microsoft.com/library/windows/desktop/dd162979) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namesetmapmodea--cdcsetmapmode"></a><a name="setmapmode"></a>CDC::SetMapMode  
 Imposta la modalità di mapping.  
  
```  
virtual int SetMapMode(int nMapMode);
```  
  
### <a name="parameters"></a>Parametri  
 `nMapMode`  
 Specifica la nuova modalità di mapping. Può essere uno dei valori seguenti:  
  
- `MM_ANISOTROPIC`Unità logiche vengono convertite in unità arbitrarie arbitrariamente in scala degli assi. L'impostazione della modalità di mapping `MM_ANISOTROPIC` non modifica le impostazioni di finestra o il riquadro di visualizzazione corrente. Per modificare le unità, orientamento e la scalabilità, chiamare il [SetWindowExt](#setwindowext) e [SetViewportExt](#setviewportext) funzioni membro.  
  
- `MM_HIENGLISH`Ogni unità logica viene convertito in 0,001 pollici. X positivo è a destra. y positivo sia attivo.  
  
- `MM_HIMETRIC`Ogni unità logica viene convertito a 0,01 millimetri. X positivo è a destra. y positivo sia attivo.  
  
- `MM_ISOTROPIC`Unità logiche vengono convertite in unità arbitrarie in modo uniforme in scala degli assi; vale a dire 1 unità lungo l'asse x è uguale a 1 unità lungo l'asse y. Utilizzare il `SetWindowExt` e `SetViewportExt` le funzioni membro per specificare l'unità desiderata e l'orientamento degli assi. GDI regolare le impostazioni necessarie per garantire che gli assi x e y unità rimangono le stesse dimensioni.  
  
- `MM_LOENGLISH`Ogni unità logica viene convertito in 0,01 pollici. X positivo è a destra. y positivo sia attivo.  
  
- `MM_LOMETRIC`Ogni unità logica viene convertito in millimetri 0,1. X positivo è a destra. y positivo sia attivo.  
  
- `MM_TEXT`Ogni unità logica viene convertito in pixel di 1 dispositivo. X positivo è a destra. y positivo è inattivo.  
  
- `MM_TWIPS`Ogni unità logica viene convertito in 1/20 di un punto. (Poiché un punto è 1/72 di pollice, un twip è 1/1440 pollice). X positivo è a destra. y positivo sia attivo.  
  
### <a name="return-value"></a>Valore restituito  
 La modalità di mapping precedente.  
  
### <a name="remarks"></a>Note  
 La modalità di mapping definisce l'unità di misura utilizzata per convertire le unità logiche in unità organizzative di dispositivo. definisce inoltre l'orientamento del dispositivo x e y. GDI utilizza la modalità di mapping per convertire le coordinate di dispositivo appropriati delle coordinate logiche. Il `MM_TEXT` modalità consente alle applicazioni di funzionare in pixel del dispositivo, dove 1 unità è uguale a 1 pixel. La dimensione fisica di un pixel varia da un dispositivo a altro.  
  
 Il `MM_HIENGLISH`, `MM_HIMETRIC`, `MM_LOENGLISH`, `MM_LOMETRIC`, e `MM_TWIPS` modalità sono utili per le applicazioni che è necessario disegnare in unità fisicamente significative (ad esempio pollici o millimetri). Il `MM_ISOTROPIC` modalità assicura una proporzione 1:1, che è utile quando è importante mantenere la forma esatta di un'immagine. Il `MM_ANISOTROPIC` modalità consente le coordinate x e y affinché venga regolato in modo indipendente.  
  
> [!NOTE]
>  Se si chiama [SetLayout](#setlayout) per modificare il controller di dominio (contesto del dispositivo) al layout da destra a sinistra, **SetLayout** modifica automaticamente la modalità di mapping per `MM_ISOTROPIC`.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CView::OnPrepareDC](../../mfc/reference/cview-class.md#onpreparedc).  
  
##  <a name="a-namesetmapperflagsa--cdcsetmapperflags"></a><a name="setmapperflags"></a>CDC::SetMapperFlags  
 Modifica il metodo utilizzato da BizTalk mapper carattere durante la conversione di un tipo di carattere logica per un tipo di carattere fisico.  
  
```  
DWORD SetMapperFlags(DWORD dwFlag);
```  
  
### <a name="parameters"></a>Parametri  
 `dwFlag`  
 Specifica se il mapper del tipo di carattere tenta la corrispondenza altezza aspetto del tipo di carattere e la larghezza al dispositivo. Quando questo valore è **ASPECT_FILTERING**, BizTalk mapper seleziona soli i tipi di carattere il cui aspetto x e y aspetto corrispondano esattamente a quelli del dispositivo specificato.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore precedente del flag di mapping di tipi di carattere.  
  
### <a name="remarks"></a>Note  
 Un'applicazione può utilizzare `SetMapperFlags` per causare il mapper del tipo di carattere tentare di scegliere solo un tipo di carattere fisico che corrisponde esattamente le proporzioni del dispositivo specificato.  
  
 Un'applicazione che utilizza solo i tipi di carattere raster può utilizzare il `SetMapperFlags` funzione per verificare che il tipo di carattere selezionato per il mapper del tipo di carattere sia più attraente e leggibile sul dispositivo specificato. Applicazioni che utilizzano tipi di carattere (TrueType) scalabile in genere non utilizzano `SetMapperFlags`.  
  
 Se nessun tipo di carattere fisico dispone di un rapporto che corrisponde la specifica del tipo di carattere logica, GDI sceglie un nuovo rapporto di aspetto e seleziona un tipo di carattere che corrisponde a questo nuovo rapporto di aspetto.  
  
##  <a name="a-namesetmiterlimita--cdcsetmiterlimit"></a><a name="setmiterlimit"></a>CDC::SetMiterLimit  
 Imposta il limite per la lunghezza di join di giunzione per il contesto di dispositivo.  
  
```  
BOOL SetMiterLimit(float fMiterLimit);
```  
  
### <a name="parameters"></a>Parametri  
 *fMiterLimit*  
 Specifica il nuovo limite per il contesto di dispositivo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 La lunghezza dell'angolo è definita come la distanza dall'intersezione dei lati del join all'interno dell'intersezione dei lati all'esterno del join. Il limite smussatura è il rapporto massimo consentito tra la lunghezza dell'angolo per lo spessore della linea. Il limite predefinito è 10.0.  
  
##  <a name="a-namesetoutputdca--cdcsetoutputdc"></a><a name="setoutputdc"></a>CDC::SetOutputDC  
 Chiamare questa funzione membro per impostare il contesto di dispositivo di output, `m_hDC`.  
  
```  
virtual void SetOutputDC(HDC hDC);
```  
  
### <a name="parameters"></a>Parametri  
 `hDC`  
 Un contesto di dispositivo Windows.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro può essere chiamata solo quando un contesto di dispositivo non è stato collegato la `CDC` oggetto. La funzione membro imposta `m_hDC` ma non viene associato il contesto di dispositivo per il `CDC` oggetto.  
  
##  <a name="a-namesetpixela--cdcsetpixel"></a><a name="setpixel"></a>CDC::SetPixel  
 Imposta i pixel nel punto specificato per la migliore approssimazione del colore specificato da `crColor`.  
  
```  
COLORREF SetPixel(
    int x,  
    int y,  
    COLORREF crColor);

 
COLORREF SetPixel(
    POINT point,  
    COLORREF crColor);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica la coordinata x logica del punto da impostare.  
  
 *y*  
 Specifica la coordinata y logica del punto da impostare.  
  
 `crColor`  
 Oggetto **COLORREF** valore RGB che specifica il colore utilizzato per disegnare il punto. Vedere [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per una descrizione di questo valore.  
  
 `point`  
 Specifica la logica coordinate x e y-del punto da impostare. È possibile passare un **punto** struttura o un `CPoint` oggetto per questo parametro.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore RGB per il colore che il punto in realtà viene disegnato. Questo valore può essere diverso da quello specificato da `crColor` se viene utilizzata un'approssimazione del colore. Se la funzione ha esito negativo (se il punto è all'esterno dell'area di ritaglio), il valore restituito è -1.  
  
### <a name="remarks"></a>Note  
 Il punto deve essere nell'area di visualizzazione. Se il punto non è presente nell'area di visualizzazione, la funzione non esegue alcuna operazione.  
  
 Non tutti i dispositivi supportano la funzione `SetPixel`. Per determinare se un dispositivo supporta `SetPixel`, chiamare il `GetDeviceCaps` funzione membro con il **RASTERCAPS** di indice e controllare il valore restituito per il **RC_BITBLT** flag.  
  
##  <a name="a-namesetpixelva--cdcsetpixelv"></a><a name="setpixelv"></a>CDC::SetPixelV  
 Imposta i pixel delle coordinate specificate per la migliore approssimazione del colore specificato.  
  
```  
BOOL SetPixelV(
    int x,  
    int y,  
    COLORREF crColor);

 
BOOL SetPixelV(
    POINT point,  
    COLORREF crColor);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica la coordinata x, in unità logiche, del punto da impostare.  
  
 *y*  
 Specifica la coordinata y, in unità logiche, del punto da impostare.  
  
 `crColor`  
 Specifica il colore da utilizzare per disegnare il punto.  
  
 `point`  
 Specifica la logica coordinate x e y-del punto da impostare. È possibile passare un [punto](../../mfc/reference/point-structure1.md) struttura di data o un [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) oggetto per questo parametro.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Il punto deve essere l'area di visualizzazione sia la parte visibile dell'area di dispositivo. Non tutti i dispositivi supportano la funzione membro. Per ulteriori informazioni, vedere il **RC_BITBLT** capacità di `CDC::GetDeviceCaps` funzione membro. `SetPixelV`è più veloce `SetPixel` perché non è necessario restituire il valore di colore del punto di disegnare effettivamente.  
  
##  <a name="a-namesetpolyfillmodea--cdcsetpolyfillmode"></a><a name="setpolyfillmode"></a>CDC::SetPolyFillMode  
 Imposta la modalità di riempimento del poligono.  
  
```  
int SetPolyFillMode(int nPolyFillMode);
```  
  
### <a name="parameters"></a>Parametri  
 `nPolyFillMode`  
 Specifica la nuova modalità di riempimento. Questo valore può essere **ALTERNATIVO** o **VERTICI**. La modalità predefinita impostata in Windows è **ALTERNATIVO**.  
  
### <a name="return-value"></a>Valore restituito  
 La modalità di riempimento precedente, se ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Quando la modalità di riempimento del poligono è **ALTERNATIVO**, il sistema riempie l'area tra i lati di pari e dispari poligono su ogni linea di analisi. Ovvero, il sistema riempie l'area tra il primo e secondo lato, tra il lato terzo e quarto e così via. Questa modalità è il valore predefinito.  
  
 Quando la modalità di riempimento del poligono è **VERTICI**, il sistema utilizza la direzione in cui è stata disegnata una figura per determinare se riempire un'area. Ogni segmento di linea in un poligono viene disegnato in senso orario o antiorario. Ogni volta che una linea immaginaria tracciata da un'area all'esterno di una figura passa attraverso un segmento di linea in senso orario, un numero viene incrementato. Quando la riga passa attraverso un segmento di linea in senso antiorario, il conteggio viene decrementato. L'area viene inserito se il conteggio è diverso da zero quando la riga raggiunge all'esterno della figura.  
  
##  <a name="a-namesetrop2a--cdcsetrop2"></a><a name="setrop2"></a>CDC::SetROP2  
 Imposta la modalità di disegno corrente.  
  
```  
int SetROP2(int nDrawMode);
```  
  
### <a name="parameters"></a>Parametri  
 `nDrawMode`  
 Specifica la nuova modalità di disegno. Può essere uno dei valori seguenti:  
  
- **R2_BLACK** Pixel è sempre nero.  
  
- **R2_WHITE** Pixel è sempre il bianco.  
  
- **R2_NOP** Pixel rimane invariato.  
  
- **R2_NOT** Pixel è l'inverso del colore sullo schermo.  
  
- **R2_COPYPEN** Pixel è il colore della penna.  
  
- **R2_NOTCOPYPEN** Pixel è l'inverso del colore della penna.  
  
- **R2_MERGEPENNOT** Pixel è una combinazione di colore della penna e l'inverso del colore dello schermo (pixel finale = (non pixel sullo schermo) o penna).  
  
- **R2_MASKPENNOT** Pixel è una combinazione di colori utilizzati per la penna e l'inverso della schermata (pixel finale = (non pixel sullo schermo) e penna).  
  
- **R2_MERGENOTPEN** Pixel è una combinazione del colore dello schermo e l'inverso del colore della penna (pixel finale = (non penna) o schermata pixel).  
  
- **R2_MASKNOTPEN** Pixel è una combinazione di colori comuni sia sullo schermo e l'inverso della penna (pixel finale = (non penna) e dello schermo in pixel).  
  
- **R2_MERGEPEN** Pixel è una combinazione di colore della penna e il colore dello schermo (pixel finale = penna pixel sullo schermo OR).  
  
- **R2_NOTMERGEPEN** Pixel è l'inverso del **R2_MERGEPEN** colore (pixel finale = non (pen pixel sullo schermo OR)).  
  
- **R2_MASKPEN** Pixel è una combinazione dei colori comuni a penna e la schermata (pixel finale = pixel sullo schermo e penna).  
  
- **R2_NOTMASKPEN** Pixel è l'inverso del **R2_MASKPEN** colore (pixel finale = non (pen pixel sullo schermo e)).  
  
- **R2_XORPEN** Pixel è una combinazione di colori che sono la penna o nella schermata, ma non in entrambi (pixel finale = penna XOR schermata pixel).  
  
- **R2_NOTXORPEN** Pixel è l'inverso del **R2_XORPEN** colore (pixel finale = non (pixel sullo schermo di penna XOR)).  
  
### <a name="return-value"></a>Valore restituito  
 La modalità di disegno precedente.  
  
 Può essere uno dei valori indicati il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 La modalità di disegno specifica come vengono combinati i colori della penna e l'area interna di oggetti con riempimento con colore già sulla superficie di visualizzazione.  
  
 La modalità di disegno è raster solo per i dispositivi; non si applica ai dispositivi di vettore. Modalità di disegno sono codici di operazione raster binari che rappresentano tutte le possibili combinazioni di due variabili, utilizzando gli operatori binari AND, OR e XOR (OR esclusivo) e l'operazione unaria NOT booleane.  
  
##  <a name="a-namesetstretchbltmodea--cdcsetstretchbltmode"></a><a name="setstretchbltmode"></a>CDC::SetStretchBltMode  
 Imposta la modalità di adattamento di bitmap per la `StretchBlt` funzione membro.  
  
```  
int SetStretchBltMode(int nStretchMode);
```  
  
### <a name="parameters"></a>Parametri  
 *nStretchMode*  
 Specifica la modalità di adattamento. Può essere uno dei valori seguenti:  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|**BLACKONWHITE**|Esegue un'operazione AND booleana utilizzando i valori di colore dei pixel eliminati ed esistenti. Se la bitmap è una bitmap monocromatica, questa modalità mantiene pixel neri a spese pixel bianco.|  
|**COLORONCOLOR**|Elimina i pixel. Questa modalità consente di eliminare eliminate tutte le righe di pixel senza tentare di mantenere le relative informazioni.|  
|**MEZZITONI**|Esegue il mapping di pixel a partire dal rettangolo di origine in blocchi di pixel nel rettangolo di destinazione. Il colore medio sul blocco di destinazione di pixel è simile al colore dei pixel di origine.|  
||Dopo aver impostato la **dei mezzitoni** adattamento modalità, un'applicazione deve chiamare la funzione Win32 [SetBrushOrgEx](http://msdn.microsoft.com/library/windows/desktop/dd162967) per impostare l'origine del pennello. Se non è possibile eseguire questa operazione, si verifica disallineamento del pennello.|  
|**STRETCH_ANDSCANS**|**Windows 95/98**: uguale a **BLACKONWHITE**|  
|**STRETCH_DELETESCANS**|**Windows 95/98**: uguale a **COLORONCOLOR**|  
|**STRETCH_HALFTONE**|**Windows 95/98**: uguale a **dei mezzitoni**.|  
|**STRETCH_ORSCANS**|**Windows 95/98**: uguale a **WHITEONBLACK**|  
|**WHITEONBLACK**|Esegue un'operazione OR booleana utilizzando i valori di colore dei pixel eliminati ed esistenti. Se la bitmap è una bitmap monocromatica, questa modalità consente di mantenere un pixel bianco a spese pixel nero.|  
  
### <a name="return-value"></a>Valore restituito  
 La modalità di adattamento precedente. Può essere **STRETCH_ANDSCANS**, **STRETCH_DELETESCANS**, o **STRETCH_ORSCANS**.  
  
### <a name="remarks"></a>Note  
 La modalità di adattamento bitmap definisce come vengono rimosse informazioni dalle immagini bitmap che vengono compresse utilizzando la funzione.  
  
 Il **BLACKONWHITE** ( **STRETCH_ANDSCANS**) e **WHITEONBLACK** ( **STRETCH_ORSCANS**) modalità sono in genere utilizzata per mantenere pixel Bitmap monocromatica in primo piano. Il **COLORONCOLOR** ( **STRETCH_DELETESCANS**) viene comunemente utilizzato per conservare colore nella bitmap a colori.  
  
 Il **dei mezzitoni** modalità richiesta un'ulteriore elaborazione dell'immagine di origine rispetto a tre modalità; è più lento rispetto agli altri, ma produce immagini di qualità superiore. Si noti inoltre che **SetBrushOrgEx** deve essere chiamato dopo l'impostazione di **dei mezzitoni** modalità per evitare problemi di allineamento pennello.  
  
 Modalità di adattamento aggiuntive possono anche essere disponibili a seconda delle funzionalità del driver di dispositivo.  
  
##  <a name="a-namesettextaligna--cdcsettextalign"></a><a name="settextalign"></a>CDC::setTextAlign  
 Imposta i flag di allineamento del testo.  
  
```  
UINT SetTextAlign(UINT nFlags);
```  
  
### <a name="parameters"></a>Parametri  
 `nFlags`  
 Specifica i flag di allineamento del testo. I flag di specificano la relazione tra un punto e un rettangolo che racchiude il testo. Il punto può essere coordinate specificate da una funzione di output di testo o posizione corrente. Il rettangolo che racchiude il testo viene definito dalle celle adiacenti carattere nella stringa di testo. Il `nFlags` parametro può essere uno o più flag tra le tre categorie seguenti. Scegliere un solo flag per ogni categoria. La prima categoria riguarda l'allineamento del testo nella direzione x:  
  
- **TA_CENTER** consente di allineare il punto al centro orizzontale del rettangolo di delimitazione.  
  
- **TA_LEFT** consente di allineare il punto al lato sinistro del rettangolo di delimitazione. Questa è l'impostazione predefinita.  
  
- **TA_RIGHT** consente di allineare il punto al lato destro del rettangolo di delimitazione.  
  
 La seconda categoria riguarda l'allineamento del testo nella direzione y:  
  
- **TA_BASELINE** consente di allineare il punto con la linea di base del tipo di carattere scelto.  
  
- **TA_BOTTOM** consente di allineare il punto alla parte inferiore del rettangolo di delimitazione.  
  
- **TA_TOP** consente di allineare il punto alla parte superiore del rettangolo di delimitazione. Questa è l'impostazione predefinita.  
  
 La terza categoria determina se la posizione corrente viene aggiornata quando il testo è scritto:  
  
- **TA_NOUPDATECP** non aggiorna la posizione corrente dopo ogni chiamata a una funzione di output di testo. Questa è l'impostazione predefinita.  
  
- **TA_UPDATECP** Aggiorna la posizione x corrente dopo ogni chiamata a una funzione di output di testo. La nuova posizione è sul lato destro del rettangolo di delimitazione per il testo. Quando questo flag è impostato, le coordinate nelle chiamate al `TextOut` funzione membro vengono ignorati.  
  
### <a name="return-value"></a>Valore restituito  
 L'allineamento del testo impostazione precedente, se ha esito positivo. Il byte meno significativo contiene le impostazioni orizzontale e il byte più significativo contiene l'impostazione verticale; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il `TextOut` e `ExtTextOut` le funzioni membro utilizzare questi flag durante il posizionamento di una stringa di testo in un dispositivo o la visualizzazione. I flag di specificano la relazione tra un momento specifico e un rettangolo che racchiude il testo. Le coordinate di questo punto vengono passate come parametri per il `TextOut` funzione membro. Il rettangolo che racchiude il testo è formato dalle celle adiacenti carattere nella stringa di testo.  
  
##  <a name="a-namesettextcharacterextraa--cdcsettextcharacterextra"></a><a name="settextcharacterextra"></a>CDC::SetTextCharacterExtra  
 Imposta la quantità di spaziatura tra caratteri relativamente.  
  
```  
int SetTextCharacterExtra(int nCharExtra);
```  
  
### <a name="parameters"></a>Parametri  
 `nCharExtra`  
 Specifica la quantità di spazio aggiuntivo (in unità logiche) per essere aggiunti a ciascun carattere. Se non è la modalità di mapping corrente `MM_TEXT`, `nCharExtra` viene trasformato e arrotondato al pixel più vicino.  
  
### <a name="return-value"></a>Valore restituito  
 La quantità di spaziatura relativamente precedente.  
  
### <a name="remarks"></a>Note  
 GDI aggiunge la spaziatura a ogni carattere, inclusi i caratteri di interruzione, quando si scrive una riga di testo nel contesto di dispositivo. Il valore predefinito per la quantità di spaziatura tra caratteri relativamente è 0.  
  
##  <a name="a-namesettextcolora--cdcsettextcolor"></a><a name="settextcolor"></a>CDC::SetTextColor  
 Imposta il colore del testo per il colore specificato.  
  
```  
virtual COLORREF SetTextColor(COLORREF crColor);
```  
  
### <a name="parameters"></a>Parametri  
 `crColor`  
 Specifica il colore del testo come valore di colore RGB.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore RGB per il colore del testo precedente.  
  
### <a name="remarks"></a>Note  
 Il sistema utilizzerà il colore del testo durante la scrittura di testo in tale contesto di dispositivo e anche quando la conversione di bitmap tra i colori e monocromatica contesti di dispositivo.  
  
 Se il dispositivo non può rappresentare il colore specificato, il sistema imposta il colore del testo sul colore fisico più vicino. Il colore di sfondo per un carattere specificato dal `SetBkColor` e `SetBkMode` funzioni membro.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CWnd::OnCtlColor](../../mfc/reference/cwnd-class.md#onctlcolor).  
  
##  <a name="a-namesettextjustificationa--cdcsettextjustification"></a><a name="settextjustification"></a>CDC::SetTextJustification  
 Aggiunge uno spazio per i caratteri di interruzione in una stringa.  
  
```  
int SetTextJustification(
    int nBreakExtra,  
    int nBreakCount);
```  
  
### <a name="parameters"></a>Parametri  
 `nBreakExtra`  
 Specifica lo spazio totale da aggiungere alla riga di testo (in unità logiche). Se non è la modalità di mapping corrente `MM_TEXT`, al valore fornito da questo parametro viene convertito in modalità di mapping corrente e arrotondato all'unità di dispositivo più vicino.  
  
 *nBreakCount*  
 Specifica il numero di caratteri di interruzione nella riga.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Un'applicazione può utilizzare il `GetTextMetrics` carattere di suddividere le funzioni membro per recuperare un tipo di carattere.  
  
 Dopo il `SetTextJustification` chiamata la funzione membro, una chiamata a una funzione di output di testo (ad esempio `TextOut`) consente di distribuire lo spazio aggiuntivo specificato in modo uniforme tra il numero specificato di caratteri di interruzione. Il carattere di interruzione è in genere il carattere spazio (ASCII 32), ma può essere definito da un tipo di carattere come un altro carattere.  
  
 La funzione membro `GetTextExtent` viene generalmente utilizzata con `SetTextJustification`. `GetTextExtent`Calcola la larghezza di una determinata riga prima di allineamento. Un'applicazione può determinare la quantità di spazio per specificare il `nBreakExtra` parametro sottraendo il valore restituito da `GetTextExtent` dalla larghezza della stringa dopo l'allineamento.  
  
 Il `SetTextJustification` funzione può essere utilizzata per allineare una riga che contiene più esecuzioni in diversi tipi di carattere. In questo caso, la riga deve essere creata a fasi allineamento e scrivendo separatamente ogni esecuzione.  
  
 Poiché gli errori di arrotondamento possono verificarsi durante l'allineamento, il sistema mantiene un termine di errore in esecuzione che definisce l'errore corrente. Quando l'allineamento di una riga che contiene più esecuzioni, `GetTextExtent` utilizza automaticamente il termine di errore quando calcola la misura della successiva esecuzione. In questo modo la funzione di output di testo sfumare l'esecuzione di nuovo l'errore.  
  
 Dopo ogni riga è stata allineata, il termine di questo errore deve essere cancellato in modo da essere incorporate in riga successiva. Il termine può essere cancellato chiamando `SetTextJustification` con `nBreakExtra` impostato su 0.  
  
##  <a name="a-namesetviewportexta--cdcsetviewportext"></a><a name="setviewportext"></a>CDC::SetViewportExt  
 Imposta gli extent x e y del riquadro di visualizzazione del contesto del dispositivo.  
  
```  
virtual CSize SetViewportExt(
    int cx,  
    int cy);  
  
CSize SetViewportExt(SIZE size);
```  
  
### <a name="parameters"></a>Parametri  
 `cx`  
 Specifica l'entità x del riquadro di visualizzazione (in unità di dispositivo).  
  
 `cy`  
 Specifica l'entità y del riquadro di visualizzazione (in unità di dispositivo).  
  
 `size`  
 Specifica gli extent x e y del riquadro di visualizzazione (in unità di dispositivo).  
  
### <a name="return-value"></a>Valore restituito  
 L'extent precedente del riquadro di visualizzazione come una [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto. Quando si verifica un errore, le coordinate x e y dell'oggetto restituito `CSize` sono entrambe impostate su 0.  
  
### <a name="remarks"></a>Note  
 Il riquadro di visualizzazione, con la finestra di contesto di dispositivo, definisce come GDI esegue il mapping di punti nel sistema di coordinate logico a punti nel sistema di coordinate del dispositivo effettivo. In altre parole, definiscono la modalità GDI converte le coordinate logiche in coordinate di dispositivo.  
  
 Quando sono impostate le seguenti modalità di mapping, le chiamate a `SetWindowExt` e `SetViewportExt` vengono ignorati:  
  
|MM_HIENGLISH|MM_LOMETRIC|  
|-------------------|------------------|  
|`MM_HIMETRIC`|`MM_TEXT`|  
|`MM_LOENGLISH`|`MM_TWIPS`|  
  
 Quando `MM_ISOTROPIC` mode è impostato, un'applicazione deve chiamare il `SetWindowExt` funzione membro prima di chiamare `SetViewportExt`.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CView::OnPrepareDC](../../mfc/reference/cview-class.md#onpreparedc).  
  
##  <a name="a-namesetviewportorga--cdcsetviewportorg"></a><a name="setviewportorg"></a>CDC::SetViewportOrg  
 Imposta l'origine del riquadro di visualizzazione del contesto del dispositivo.  
  
```  
virtual CPoint SetViewportOrg(
    int x,  
    int y);  
  
CPoint SetViewportOrg(POINT point);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica la coordinata x (in unità di dispositivo) dell'origine del riquadro di visualizzazione. Il valore deve essere compreso nell'intervallo di sistema di coordinate del dispositivo.  
  
 *y*  
 Specifica la coordinata y (in unità di dispositivo) dell'origine del riquadro di visualizzazione. Il valore deve essere compreso nell'intervallo di sistema di coordinate del dispositivo.  
  
 `point`  
 Specifica l'origine del viewport. I valori devono essere all'interno dell'intervallo di sistema di coordinate del dispositivo. È possibile passare un **punto** struttura o un `CPoint` oggetto per questo parametro.  
  
### <a name="return-value"></a>Valore restituito  
 L'origine precedente del riquadro di visualizzazione (nelle coordinate del dispositivo) come un `CPoint` oggetto.  
  
### <a name="remarks"></a>Note  
 Il riquadro di visualizzazione, con la finestra di contesto di dispositivo, definisce come GDI esegue il mapping di punti nel sistema di coordinate logico a punti nel sistema di coordinate del dispositivo effettivo. In altre parole, definiscono la modalità GDI converte le coordinate logiche in coordinate di dispositivo.  
  
 L'origine viewport contrassegna il punto nel sistema di coordinate di dispositivo a cui GDI esegue il mapping dell'origine della finestra, nel sistema di coordinate logico specificato da un punto di **SetWindowOrg** funzione membro. GDI esegue il mapping di tutti gli altri punti seguendo la procedura necessaria per eseguire il mapping dell'origine finestra all'origine del viewport. Ad esempio, tutti i punti in un cerchio intorno al punto in corrispondenza dell'origine della finestra sarà un cerchio intorno al punto in corrispondenza dell'origine del riquadro di visualizzazione. Analogamente, tutti i punti in una riga che passa attraverso l'origine della finestra sarà in una riga che passa attraverso l'origine del riquadro di visualizzazione.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CView::OnPrepareDC](../../mfc/reference/cview-class.md#onpreparedc).  
  
##  <a name="a-namesetwindowexta--cdcsetwindowext"></a><a name="setwindowext"></a>CDC::SetWindowExt  
 Imposta gli extent x e y della finestra associata al contesto di dispositivo.  
  
```  
virtual CSize SetWindowExt(
    int cx,  
    int cy);  
  
CSize SetWindowExt(SIZE size);
```  
  
### <a name="parameters"></a>Parametri  
 `cx`  
 Specifica la misura x (in unità logiche) della finestra.  
  
 `cy`  
 Specifica la misura y (in unità logiche) della finestra.  
  
 `size`  
 Specifica la x - e y-extent (in unità logiche) della finestra.  
  
### <a name="return-value"></a>Valore restituito  
 L'extent precedente della finestra (in unità logiche) come un `CSize` oggetto. Se si verifica un errore, le coordinate x e y dell'oggetto restituito `CSize` sono entrambe impostate su 0.  
  
### <a name="remarks"></a>Note  
 La finestra, insieme al contesto di dispositivo viewport, definisce come GDI esegue il mapping di punti nel sistema di coordinate logico a punti nel sistema di coordinate del dispositivo.  
  
 Quando sono impostate le seguenti modalità di mapping, le chiamate a `SetWindowExt` e `SetViewportExt` le funzioni vengono ignorate:  
  
- `MM_HIENGLISH`  
  
- `MM_HIMETRIC`  
  
- `MM_LOENGLISH`  
  
- `MM_LOMETRIC`  
  
- `MM_TEXT`  
  
- `MM_TWIPS`  
  
 Quando `MM_ISOTROPIC` mode è impostato, un'applicazione deve chiamare il `SetWindowExt` funzione membro prima di chiamare `SetViewportExt`.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CView::OnPrepareDC](../../mfc/reference/cview-class.md#onpreparedc).  
  
##  <a name="a-namesetwindoworga--cdcsetwindoworg"></a><a name="setwindoworg"></a>CDC::SetWindowOrg  
 Imposta l'origine della finestra del contesto del dispositivo.  
  
```  
CPoint SetWindowOrg(
    int x,  
    int y);  
  
CPoint SetWindowOrg(POINT point);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica la coordinata x logica della nuova origine della finestra.  
  
 *y*  
 Specifica la coordinata y logica della nuova origine della finestra.  
  
 `point`  
 Specifica le coordinate logiche modifica dell'origine della finestra. È possibile passare un **punto** struttura o un `CPoint` oggetto per questo parametro.  
  
### <a name="return-value"></a>Valore restituito  
 L'origine precedente della finestra come un `CPoint` oggetto.  
  
### <a name="remarks"></a>Note  
 La finestra, insieme al contesto di dispositivo viewport, definisce come GDI esegue il mapping di punti nel sistema di coordinate logico a punti nel sistema di coordinate del dispositivo.  
  
 L'origine finestra contrassegna il punto nel sistema di coordinate logico da cui GDI esegue il mapping dell'origine del riquadro di visualizzazione, nel sistema di coordinate di dispositivo specificato da un punto di **SetWindowOrg** (funzione). GDI esegue il mapping di tutti gli altri punti seguendo la procedura necessaria per eseguire il mapping dell'origine finestra all'origine del viewport. Ad esempio, tutti i punti in un cerchio intorno al punto in corrispondenza dell'origine della finestra sarà un cerchio intorno al punto in corrispondenza dell'origine del riquadro di visualizzazione. Analogamente, tutti i punti in una riga che passa attraverso l'origine della finestra sarà in una riga che passa attraverso l'origine del riquadro di visualizzazione.  
  
##  <a name="a-namesetworldtransforma--cdcsetworldtransform"></a><a name="setworldtransform"></a>CDC::SetWorldTransform  
 Imposta una trasformazione bidimensionale lineare tra spazio mondo e pagina per il contesto di dispositivo specificato. Questa trasformazione può essere utilizzata per scalare, ruotare, inclinare o convertire l'output grafico.  
  
```  
BOOL SetWorldTransform(const XFORM& rXform);
```  
  
### <a name="parameters"></a>Parametri  
 `rXform`  
 Fare riferimento a un [XFORM](http://msdn.microsoft.com/library/windows/desktop/dd145228) struttura che contiene i dati di trasformazione.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un valore diverso da zero in caso di riuscita.  
  
 Restituisce 0 in caso di errore.  
  
 Per ottenere ulteriori informazioni sull'errore, chiamare [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360).  
  
### <a name="remarks"></a>Note  
 Questo metodo include la funzione GDI Windows [SetWorldTransform](http://msdn.microsoft.com/library/windows/desktop/dd145104).  
  
##  <a name="a-namestartdoca--cdcstartdoc"></a><a name="startdoc"></a>CDC::StartDoc  
 Informa il driver di dispositivo avviato un nuovo processo di stampa e che tutte le successive `StartPage` e `EndPage` chiamate devono essere eseguito lo spooling sotto lo stesso processo fino a un `EndDoc` chiamata viene eseguita.  
  
```  
int StartDoc(LPDOCINFO lpDocInfo);  
int StartDoc(LPCTSTR lpszDocName);
```  
  
### <a name="parameters"></a>Parametri  
 *lpDocInfo*  
 Punta a un [DOCINFO](http://msdn.microsoft.com/library/windows/desktop/dd183574) struttura che contiene il nome del file del documento e il nome del file di output.  
  
 *lpszDocName*  
 Puntatore a una stringa contenente il nome del file del documento.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è maggiore di zero. Questo valore è l'identificatore di processo di stampa del documento.  
  
 In caso contrario, il valore restituito è minore o uguale a zero.  
  
### <a name="remarks"></a>Note  
 Ciò garantisce che documenti più di una pagina non verranno essere combinati con altri processi.  
  
 Per Windows 3.1 e versioni successive, questa funzione sostituisce la **STARTDOC** escape della stampante. Utilizzare questa funzione assicura che i documenti che contengono più di una pagina non vengono intercalati con altri processi di stampa.  
  
 `StartDoc`non deve essere utilizzato all'interno di metafile.  
  
### <a name="example"></a>Esempio  
 Questo frammento di codice ottiene la stampante predefinita, viene aperto un processo di stampa ed effettua lo spooling di una pagina con "Hello, World!" su di esso. Poiché il testo stampato dal codice non viene adattato alle unità logiche della stampante, il testo di output potrebbe essere in tali lettere di piccole dimensioni che il risultato è illeggibile. CDC scalabilità funzioni, ad esempio `SetMapMode`, `SetViewportOrg`, e `SetWindowExt`, può essere utilizzato per risolvere il ridimensionamento.  
  
 [!code-cpp[NVC_MFCDocView n.&41;](../../mfc/codesnippet/cpp/cdc-class_13.cpp)]  
  
##  <a name="a-namestartpagea--cdcstartpage"></a><a name="startpage"></a>CDC::StartPage  
 Chiamare questa funzione membro per preparare il driver della stampante per la ricezione dei dati.  
  
```  
int StartPage();
```  
  
### <a name="return-value"></a>Valore restituito  
 Maggiore o uguale a 0 se la funzione ha esito positivo o un valore negativo se si è verificato un errore.  
  
### <a name="remarks"></a>Note  
 `StartPage`sostituisce il **NEWFRAME** e **BANDINFO** di escape.  
  
 Per una panoramica della sequenza di chiamate di stampare, vedere il [StartDoc](#startdoc) funzione membro.  
  
 Il sistema disabilita il `ResetDC` funzione membro tra le chiamate a `StartPage` e `EndPage`.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CDC::StartDoc](#startdoc).  
  
##  <a name="a-namestretchblta--cdcstretchblt"></a><a name="stretchblt"></a>CDC::StretchBlt  
 Copia una bitmap da un rettangolo di origine in un rettangolo di destinazione, allungando o comprimendo la bitmap se necessario per adattarla alle dimensioni del rettangolo di destinazione.  
  
```  
BOOL StretchBlt(
    int x,  
    int y,  
    int nWidth,  
    int nHeight,  
    CDC* pSrcDC,  
    int xSrc,  
    int ySrc,  
    int nSrcWidth,  
    int nSrcHeight,  
    DWORD dwRop);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica la coordinata x (in unità logiche) dell'angolo superiore sinistro del rettangolo di destinazione.  
  
 *y*  
 Specifica la coordinata y (in unità logiche) dell'angolo superiore sinistro del rettangolo di destinazione.  
  
 `nWidth`  
 Specifica la larghezza (in unità logiche) del rettangolo di destinazione.  
  
 `nHeight`  
 Specifica l'altezza (in unità logiche) del rettangolo di destinazione.  
  
 `pSrcDC`  
 Specifica il contesto del dispositivo di origine.  
  
 `xSrc`  
 Specifica la coordinata x (in unità logiche) dell'angolo superiore sinistro del rettangolo di origine.  
  
 `ySrc`  
 Specifica la coordinata y (in unità logiche) dell'angolo superiore sinistro del rettangolo di origine.  
  
 `nSrcWidth`  
 Specifica la larghezza (in unità logiche) del rettangolo di origine.  
  
 `nSrcHeight`  
 Specifica l'altezza (in unità logiche) del rettangolo di origine.  
  
 *dwRop*  
 Specifica l'operazione raster da eseguire. I codici dell'operazione raster definiscono in che modo GDI combina i colori nelle operazioni di output che includono un pennello corrente, una possibile bitmap di origine e una bitmap di destinazione. Il parametro può avere uno dei valori seguenti:  
  
- **BLACKNESS** tutto l'output nero.  
  
- **DSTINVERT** inverte la bitmap di destinazione.  
  
- **MERGECOPY** combina il modello e la bitmap di origine utilizzando l'operatore booleano AND.  
  
- **MERGEPAINT** combina la bitmap di origine invertita con la bitmap di destinazione utilizzando l'operatore booleano OR.  
  
- **NOTSRCCOPY** copia la bitmap di origine invertita nella destinazione.  
  
- **NOTSRCERASE** inverte il risultato della combinazione delle bitmap di origine e destinazione utilizzando l'operatore booleano OR.  
  
- **PATCOPY** copia il modello nella bitmap di destinazione.  
  
- **PATINVERT** combina la bitmap di destinazione con il modello utilizzando l'operatore booleano XOR.  
  
- **PATPAINT** combina la bitmap di origine invertita con il modello utilizzando l'operatore booleano OR. Combina il risultato di questa operazione con la bitmap di destinazione utilizzando l'operatore booleano OR.  
  
- **SRCAND** combina i pixel delle bitmap di origine e destinazione utilizzando l'operatore booleano AND.  
  
- **SRCCOPY** copia la bitmap di origine nella bitmap di destinazione.  
  
- **SRCERASE** inverte la bitmap di destinazione e ne combina il risultato con la bitmap di origine utilizzando l'operatore booleano AND.  
  
- **SRCINVERT** combina i pixel delle bitmap di origine e destinazione utilizzando l'operatore booleano XOR.  
  
- **SRCPAINT** combina i pixel delle bitmap di origine e destinazione utilizzando l'operatore booleano OR.  
  
- **WHITENESS** tutto l'output vuoto.  
  
### <a name="return-value"></a>Valore restituito  
 Se la bitmap viene tracciata è diverso da zero; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 La funzione utilizza la modalità di adattamento del contesto del dispositivo di destinazione (impostata da `SetStretchBltMode`) per determinare come allungare o comprimere la bitmap.  
  
 La funzione `StretchBlt` sposta la bitmap dal dispositivo di origine fornito da `pSrcDC` al dispositivo di destinazione rappresentato dall'oggetto contesto del dispositivo di cui viene chiamata la funzione membro. I parametri `xSrc`, `ySrc`, `nSrcWidth` e `nSrcHeight` definiscono l'angolo superiore sinistro e le dimensioni del rettangolo di origine. Il *x*, *y*, `nWidth`, e `nHeight` parametri definiscono l'angolo superiore sinistro e le dimensioni del rettangolo di destinazione. L'operazione raster specificata da *dwRop* definisce la combinazione di bitmap di origine e i bit già presenti nel dispositivo di destinazione.  
  
 La funzione `StretchBlt` crea un'immagine speculare di una bitmap se i segni dei parametri `nSrcWidth` e `nWidth` o `nSrcHeight` e `nHeight` sono diversi. Se `nSrcWidth` e `nWidth` hanno segni diversi, la funzione crea un'immagine speculare della bitmap lungo l'asse x. Se `nSrcHeight` e `nHeight` hanno segni diversi, la funzione crea un'immagine speculare della bitmap lungo l'asse y.  
  
 La funzione `StretchBlt` allunga o comprime la bitmap di origine in memoria, quindi copia il risultato nella destinazione. Se è necessario unire un modello al risultato, questo non viene unito finché la bitmap di origine adattata non viene copiata nella destinazione. Se viene utilizzato un pennello, si tratta del pennello selezionato nel contesto del dispositivo di destinazione. Le coordinate di destinazione vengono trasformate in base al contesto del dispositivo di destinazione; le coordinate di origine vengono trasformate in base al contesto del dispositivo di origine.  
  
 Se le bitmap di destinazione, origine e modello non hanno lo stesso formato di colore, `StretchBlt` converte le bitmap di origine e modello per farle corrispondere alle bitmap di destinazione. Nella conversione vengono utilizzati i colori di primo piano e di sfondo del contesto del dispositivo di destinazione.  
  
 Se `StretchBlt` deve convertire a colori una bitmap monocromatica, imposta i bit bianchi (1) sui bit del colore di sfondo e i bit neri (0) sul colore di primo piano. Per la conversione da colore a monocromatico, imposta i pixel corrispondenti al colore di sfondo sul bianco (1) e tutti gli altri pixel sul nero (0). Vengono utilizzati i colori di primo piano e di sfondo del contesto del dispositivo a colori.  
  
 Non tutti i dispositivi supportano la funzione `StretchBlt`. Per determinare se un dispositivo supporta `StretchBlt`, chiamare il `GetDeviceCaps` funzione membro con il **RASTERCAPS** di indice e controllare il valore restituito per il **RC_STRETCHBLT** flag.  
  
##  <a name="a-namestrokeandfillpatha--cdcstrokeandfillpath"></a><a name="strokeandfillpath"></a>CDC::StrokeAndFillPath  
 Chiude figure aperte in un percorso, i tratti la struttura del percorso utilizzando la penna corrente e viene compilato interna utilizzando il pennello corrente.  
  
```  
BOOL StrokeAndFillPath();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Il contesto di dispositivo deve contenere un tracciato chiuso. Il `StrokeAndFillPath` funzione membro ha lo stesso effetto di tutte le figure aperte nel percorso di chiusura e traccia e inserendo il percorso separatamente, ad eccezione del fatto che non si sovrappongono anche se l'area tracciata riempita la penna è ampia.  
  
##  <a name="a-namestrokepatha--cdcstrokepath"></a><a name="strokepath"></a>CDC::StrokePath  
 Esegue il rendering nel percorso specificato utilizzando la penna corrente.  
  
```  
BOOL StrokePath();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Il contesto di dispositivo deve contenere un tracciato chiuso.  
  
##  <a name="a-nametabbedtextouta--cdctabbedtextout"></a><a name="tabbedtextout"></a>CDC::TabbedTextOut  
 Chiamare questa funzione membro per scrivere una stringa di caratteri nella posizione specificata, l'espansione di schede per i valori specificati nella matrice di posizioni di tabulazione.  
  
```  
virtual CSize TabbedTextOut(
    int x,  
    int y,  
    LPCTSTR lpszString,  
    int nCount,  
    int nTabPositions,  
    LPINT lpnTabStopPositions,  
    int nTabOrigin);

 
CSize TabbedTextOut(
    int x,  
    int y,  
    const CString& str,  
    int nTabPositions,  
    LPINT lpnTabStopPositions,  
    int nTabOrigin);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica la coordinata x logica del punto iniziale della stringa.  
  
 *y*  
 Specifica la coordinata y logica del punto iniziale della stringa.  
  
 `lpszString`  
 Punta alla stringa di caratteri da disegnare. È possibile passare un puntatore a una matrice di caratteri o un [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto per questo parametro.  
  
 `nCount`  
 Specifica il numero di caratteri nella stringa. Se `nCount` è -1, la lunghezza viene calcolata.  
  
 `nTabPositions`  
 Specifica il numero di valori nella matrice di posizioni di tabulazione.  
  
 `lpnTabStopPositions`  
 Punta a una matrice contenente le posizioni di tabulazione (in unità logiche). I punti di tabulazione devono essere ordinati in senso crescente; il valore x minimo deve essere il primo elemento nella matrice.  
  
 `nTabOrigin`  
 Specifica la coordinata x della posizione iniziale dalla quale vengono espansi schede (in unità logiche).  
  
 `str`  
 Oggetto `CString` oggetto che contiene i caratteri specificati.  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni della stringa (in unità logiche) come un `CSize` oggetto.  
  
### <a name="remarks"></a>Note  
 Il testo viene scritto nel tipo di carattere attualmente selezionato. Se `nTabPositions` è 0 e `lpnTabStopPositions` è **NULL**, le schede vengono espanse in otto volte la media larghezza del carattere.  
  
 Se `nTabPositions` è 1, la scheda arresta è separati per la distanza specificata per il primo valore di `lpnTabStopPositions` matrice. Se il `lpnTabStopPositions` matrice contiene più di un valore, viene impostato un punto di tabulazione per ogni valore nella matrice, fino al numero specificato da `nTabPositions`. Il `nTabOrigin` parametro consente a un'applicazione di chiamare il `TabbedTextOut` funzione più volte per una singola riga. Se l'applicazione chiama la funzione più volte con il `nTabOrigin` impostato sullo stesso valore ogni volta, la funzione espande tutte le schede relative alla posizione specificata da `nTabOrigin`.  
  
 Per impostazione predefinita, la posizione corrente non viene utilizzata o aggiornata dalla funzione. Se un'applicazione deve aggiornare la posizione corrente quando chiama la funzione, l'applicazione può chiamare il [SetTextAlign](#settextalign) funzione membro con `nFlags` impostato su **TA_UPDATECP**. Quando questo flag è impostato, Windows ignora i *x* e *y* parametri nelle chiamate successive a `TabbedTextOut`, utilizzando invece la posizione corrente.  
  
##  <a name="a-nametextouta--cdctextout"></a><a name="textout"></a>CDC:: TextOut  
 Scrive una stringa di caratteri nella posizione specificata utilizzando il tipo di carattere attualmente selezionato.  
  
```  
virtual BOOL TextOut(
    int x,  
    int y,  
    LPCTSTR lpszString,  
    int nCount);

 
BOOL TextOut(
    int x,
    int y,
    const CString& str);
```  
  
### <a name="parameters"></a>Parametri  
 *x*  
 Specifica la coordinata x logica del punto iniziale del testo.  
  
 *y*  
 Specifica la coordinata y logica del punto iniziale del testo.  
  
 `lpszString`  
 Punta alla stringa di caratteri da tracciare.  
  
 `nCount`  
 Specifica il numero di caratteri nella stringa.  
  
 `str`  
 Oggetto `CString` che contiene i caratteri da tracciare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Le origini del carattere si trovano nell'angolo superiore sinistro della cella del carattere. Per impostazione predefinita, la posizione corrente non viene utilizzata o aggiornata dalla funzione.  
  
 Se un'applicazione deve aggiornare la posizione corrente quando chiama `TextOut`, l'applicazione può chiamare il `SetTextAlign` funzione membro con `nFlags` impostato su **TA_UPDATECP**. Quando questo flag è impostato, Windows ignora i *x* e *y* parametri nelle chiamate successive a `TextOut`, utilizzando invece la posizione corrente.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CDC:: BeginPath](#beginpath).  
  
##  <a name="a-nametransparentblta--cdctransparentblt"></a><a name="transparentblt"></a>CDC::TransparentBlt  
 Chiamare questa funzione membro per il trasferimento di un blocco di bit di dati relativi al colore, che corrisponde a un rettangolo di pixel dal contesto di dispositivo di origine specificata, in un contesto di dispositivo di destinazione.  
  
```  
BOOL TransparentBlt(
    int xDest,  
    int yDest,
    int nDestWidth,
    int nDestHeight,  
    CDC* pSrcDC,  
    int xSrc,  
    int ySrc,  
    int nSrcWidth,  
    int nSrcHeight,  
    UINT clrTransparent);
```  
  
### <a name="parameters"></a>Parametri  
 `xDest`  
 Specifica la coordinata x, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.  
  
 `yDest`  
 Specifica la coordinata y, in unità logiche, dell'angolo superiore sinistro del rettangolo di destinazione.  
  
 `nDestWidth`  
 Specifica la larghezza, in unità logiche, del rettangolo di destinazione.  
  
 `nDestHeight`  
 Specifica l'altezza, in unità logiche, del rettangolo di destinazione.  
  
 `pSrcDC`  
 Puntatore al contesto di dispositivo di origine.  
  
 `xSrc`  
 Specifica la coordinata x, in unità logiche, del rettangolo di origine.  
  
 `ySrc`  
 Specifica la coordinata y, in unità logiche, del rettangolo di origine.  
  
 `nSrcWidth`  
 Specifica la larghezza, in unità logiche, del rettangolo di origine.  
  
 `nSrcHeight`  
 Specifica l'altezza, in unità logiche, del rettangolo di origine.  
  
 `clrTransparent`  
 La bitmap di origine da trattare come trasparente il colore RGB.  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se ha esito positivo; in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 `TransparentBlt`Consente di trasparenza; vale a dire il colore RGB indicato dal `clrTransparent` viene eseguito il rendering trasparente per il trasferimento.  
  
 Per ulteriori informazioni, vedere [TransparentBlt](http://msdn.microsoft.com/library/windows/desktop/dd145141) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameupdatecolorsa--cdcupdatecolors"></a><a name="updatecolors"></a>CDC::UpdateColors  
 Gli aggiornamenti dell'area client di contesto di dispositivo abbinando corrente colori dell'area client per la tavolozza di sistema su base pixel per pixel.  
  
```  
void UpdateColors();
```  
  
### <a name="remarks"></a>Note  
 Una finestra non attiva con una tavolozza logica realizzata può chiamare `UpdateColors` come alternativa a ogni nuovo disegno della relativa area client quando viene modificata la tavolozza di sistema.  
  
 Per ulteriori informazioni sull'utilizzo di tavolozze dei colori, vedere [UpdateColors](http://msdn.microsoft.com/library/windows/desktop/dd145166) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Il `UpdateColors` funzione membro in genere gli aggiornamenti un'area client più rapidamente di ridisegnare l'area. Tuttavia, poiché la funzione esegue la conversione di colore in base al colore di ciascun pixel prima di modificare la tavolozza di sistema, ogni chiamata a questa funzione comporta la perdita di alcuni precisione di colore.  
  
##  <a name="a-namewidenpatha--cdcwidenpath"></a><a name="widenpath"></a>CDC::WidenPath  
 Ridefinisce il percorso corrente dell'area che verrà disegnato se sono stato tracciato il percorso utilizzando la penna attualmente selezionata nel contesto di dispositivo.  
  
```  
BOOL WidenPath();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione ha esito positivo solo se la penna corrente è un oggetto pen geometrico creato per la seconda versione di `CreatePen` funzione membro, o se la penna viene creata con la prima versione di `CreatePen` e ha una larghezza, in unità di dispositivo, maggiore di 1. Il contesto di dispositivo deve contenere un tracciato chiuso. Le curve Bzier nel percorso vengono convertite in sequenze di linee rette approssimare le curve ampliate. Di conseguenza, non includono curve Bzier rimangono nel percorso dopo `WidenPath` viene chiamato.  
  
## <a name="see-also"></a>Vedere anche  
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CPaintDC (classe)](../../mfc/reference/cpaintdc-class.md)   
 [Gli oggetti CWindowDC (classe)](../../mfc/reference/cwindowdc-class.md)   
 [CClientDC (classe)](../../mfc/reference/cclientdc-class.md)   
 [CMetaFileDC (classe)](../../mfc/reference/cmetafiledc-class.md)

